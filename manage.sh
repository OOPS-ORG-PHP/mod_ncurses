#!/bin/bash

source /usr/share/annyung-release/functions.d/bash/functions

errmsg () {
	echo "$*" 1>&2
}

usage () {
	echo "Usage: $0 [clean|pack|test [php-version]]"
	exit 1
}

opts=$(getopt -u -o h -l help -- "$@")
[ $? != 0 ] && usage

set -- ${opts}
for i
do
	case "$i" in
		-h|--help)
			usage
			shift
			;;
		--)
			shift
			break
			;;
	esac
done

mode="${1}"

case "${mode}" in
	clean)
		cat <<-EOL
			[ -f Makefile ] && make distclean
			rm -rf autom4te.cache build include modules
			rm -f .deps Makefile* ac*.m4 compile tags
			rm -f config.h* config.nice configure* config.sub config.guess
			rm -f install-sh ltmain.sh missing mkinstalldirs run-tests.php

			rm -f package.xml
			find ./tests ! -name '*.phpt' -a ! -name '*.txt' -a -type f
			----->
		EOL

		[ -f Makefile ] && make distclean
		rm -rf autom4te.cache build include modules
		rm -f .deps Makefile* ac*.m4 compile tags
		rm -f config.h* config.nice configure* config.sub config.guess
		rm -f install-sh ltmain.sh missing mkinstalldirs run-tests.php
		rm -f tests/*.{diff,exp,log,out,php,sh,mem}
		;;
	test)
		if [[ -f tests/${3}.php ]]; then
			/usr/bin/php${2} -d "extension_dir=./modules/" -d "extension=ncurses.so" tests/${3}.php
			exit $?
		elif [[ -f ${3} ]]; then
			/usr/bin/php${2} -d "extension_dir=./modules/" -d "extension=ncurses.so" ${3}
			exit $?
		fi

		if [[ -z $3 ]]; then
			./manage.sh clean
			echo "phpize${2} ./configure"
			phpize${2} && ./configure --with-libdir=lib64 && make -j8 || exit 0
		fi
		echo "make test PHP_EXECUTABLE=/usr/bin/php${2}"
		make test PHP_EXECUTABLE=/usr/bin/php${2} <<< n
		;;
	stub)
		# stub tagging
		# /** @generate-function-entries **/ build with function entries
		# /** @generate-legacy-arginfo **/   build with legacy style
		if [[ ! -f build/gen_stub.php ]]; then
			cat <<-EOL
			ERROR: execute before PHP 8 build environment or before execute phpize
			EOL
			exit 1
		fi
		phpcmd="/usr/bin/php80"
		perl -pi -e 's/ext_functions/ncurses_functions/g' build/gen_stub.php
		${phpcmd} build/gen_stub.php -f *.stub.php
		;;
	*)
		errmsg "Unsupport mode '${1}'"
		exit 1
esac

exit 0
