<?php
# reference : https://raw.githubusercontent.com/jean-pasqualini/ia/master/test3.php

// we begin by initializing ncurses
$ncurse = ncurses_init();
// let ncurses know we wish to use the whole screen
$fullscreen = ncurses_newwin(0, 0, 0, 0);
// draw a border around the whole thing.
ncurses_border(0, 0, 0, 0, 0, 0, 0, 0);
// now lets create a small window
$small = ncurses_newwin(10, 26, 1, 1);
// border our small window.
ncurses_wborder($small, 0, 0, 0, 0, 0, 0, 0, 0);
ncurses_refresh();
// paint both windows
// move into the small window and write a string
ncurses_mvwaddstr($small, 5, 5, "   Example #2   ");
ncurses_attron(NCURSES_A_REVERSE);
ncurses_mvaddstr(0, 1, "  Exmaple 2:  ");
ncurses_attroff(NCURSES_A_REVERSE);
// show our handiwork and refresh our small window
ncurses_wrefresh($small);
$pressed = ncurses_getch();
// wait for a user keypress
ncurses_end();
// clean up our screen
