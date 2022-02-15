--TEST--
Check for ncurses_init function
--SKIPIF--
<?php
if ( ! extension_loaded ('ncurses') )
	print "skip";
?>
--FILE--
<?php 
$ncurses = ncurses_init ();
ncurses_end();
echo 'yes';
?>
--EXPECT--
[?1049h[1;24r(B[m[4l[?7h[?1h=[24;1H[?1049l[?1l>yes
