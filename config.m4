dnl
dnl $Id: config.m4 292263 2009-12-17 18:42:59Z rasmus $
dnl

AC_MSG_CHECKING(whether we should enable wide char support)
AC_ARG_ENABLE(ncursesw,
[  --enable-ncursesw   Enable wide char support ],
[
  PHP_NCURSESW=$enableval
	AC_MSG_RESULT($enableval)
], 
[
  PHP_NCURSESW=no
	AC_MSG_RESULT(no)
])

PHP_ARG_WITH(ncurses, for ncurses support,
[  --with-ncurses[=DIR]    Include ncurses support (CLI/CGI only)])

if test "$PHP_NCURSES" != "no"; then

   if test "$PHP_NCURSESW" != "no"; then
     ncurses_name=ncursesw
     panel_name=panelw
   else
     ncurses_name=ncurses
     panel_name=panel
   fi

   SEARCH_PATH="$PHP_NCURSES /usr/local /usr"     

   for dir in $SEARCH_PATH; do
    for subdir in include/$ncurses_name include; do
     if test -d $dir/$subdir; then
       if test -r $dir/$subdir/ncurses.h; then
         NCURSES_DIR=$dir
         NCURSES_INCDIR=$dir/$subdir
         AC_DEFINE(HAVE_NCURSES_H,1,[ ])
         break 2
       elif test -r $dir/$subdir/curses.h; then
         NCURSES_DIR=$dir
         NCURSES_INCDIR=$dir/$subdir
         break 2
       fi
     fi
    done
   done
  
   if test -z "$NCURSES_DIR"; then
     AC_MSG_RESULT(not found)
     AC_MSG_ERROR(Please reinstall the $ncurses_name distribution)
   fi

   # --with-ncurses -> add include path
   PHP_ADD_INCLUDE($NCURSES_INCDIR)

   # --with-ncurses -> check for lib and symbol presence
   LIBNAME=$ncurses_name 
   LIBSYMBOL=initscr 

   PHP_CHECK_LIBRARY($LIBNAME, $LIBSYMBOL, [
     AC_DEFINE(HAVE_NCURSESLIB,1,[ ])
     PHP_ADD_LIBRARY_WITH_PATH($LIBNAME, $NCURSES_DIR/$PHP_LIBDIR, NCURSES_SHARED_LIBADD)

     PHP_CHECK_LIBRARY($panel_name, new_panel, [
       AC_DEFINE(HAVE_NCURSES_PANEL,1,[ ])
       PHP_ADD_LIBRARY_WITH_PATH($panel_name, $NCURSES_DIR/$PHP_LIBDIR, NCURSES_SHARED_LIBADD)
     ], [], [ 
       -L$NCURSES_DIR/$PHP_LIBDIR -l$LIBNAME -lm
     ])
   ], [
     AC_MSG_ERROR(Wrong ncurses lib version or lib not found)
   ], [
     -L$NCURSES_DIR/$PHP_LIBDIR -lm
   ])
 
   AC_CHECK_LIB($LIBNAME, color_set,   [AC_DEFINE(HAVE_NCURSES_COLOR_SET,  1, [ ])])
   AC_CHECK_LIB($LIBNAME, slk_color,   [AC_DEFINE(HAVE_NCURSES_SLK_COLOR,  1, [ ])])
   AC_CHECK_LIB($LIBNAME, assume_default_colors,   [AC_DEFINE(HAVE_NCURSES_ASSUME_DEFAULT_COLORS,  1, [ ])])
   AC_CHECK_LIB($LIBNAME, use_extended_names,   [AC_DEFINE(HAVE_NCURSES_USE_EXTENDED_NAMES,  1, [ ])])

   PHP_NEW_EXTENSION(ncurses, ncurses.c ncurses_fe.c ncurses_functions.c, $ext_shared, cli)
   PHP_SUBST(NCURSES_SHARED_LIBADD)

fi
