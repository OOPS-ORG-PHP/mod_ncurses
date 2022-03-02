/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 630859abe2cdb9b5b472f4b4addace007331b0a3 */

#if PHP_VERSION_ID >= 80000

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_addch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_waddch, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_color_set, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pair, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_delwin, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_end, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_getch arginfo_ncurses_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_has_colors, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_init arginfo_ncurses_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_init_pair, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pair, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_move, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ncurses_newpad, 0, 2, resource, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_prefresh, 0, 7, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, pad, resource, 0)
	ZEND_ARG_TYPE_INFO(0, pminrow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pmincol, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sminrow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, smincol, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, smaxrow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, smaxcol, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_pnoutrefresh arginfo_ncurses_prefresh

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_newwin, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_refresh arginfo_ncurses_addch

#define arginfo_ncurses_start_color arginfo_ncurses_end

#define arginfo_ncurses_standout arginfo_ncurses_end

#define arginfo_ncurses_standend arginfo_ncurses_end

#define arginfo_ncurses_baudrate arginfo_ncurses_end

#define arginfo_ncurses_beep arginfo_ncurses_end

#define arginfo_ncurses_can_change_color arginfo_ncurses_has_colors

#define arginfo_ncurses_cbreak arginfo_ncurses_has_colors

#define arginfo_ncurses_clear arginfo_ncurses_has_colors

#define arginfo_ncurses_clrtobot arginfo_ncurses_has_colors

#define arginfo_ncurses_clrtoeol arginfo_ncurses_has_colors

#define arginfo_ncurses_reset_prog_mode arginfo_ncurses_end

#define arginfo_ncurses_reset_shell_mode arginfo_ncurses_end

#define arginfo_ncurses_def_prog_mode arginfo_ncurses_end

#define arginfo_ncurses_def_shell_mode arginfo_ncurses_end

#define arginfo_ncurses_delch arginfo_ncurses_end

#define arginfo_ncurses_deleteln arginfo_ncurses_end

#define arginfo_ncurses_doupdate arginfo_ncurses_end

#define arginfo_ncurses_echo arginfo_ncurses_end

#define arginfo_ncurses_erase arginfo_ncurses_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_erasechar, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_flash arginfo_ncurses_end

#define arginfo_ncurses_flushinp arginfo_ncurses_end

#define arginfo_ncurses_has_ic arginfo_ncurses_end

#define arginfo_ncurses_has_il arginfo_ncurses_end

#define arginfo_ncurses_inch arginfo_ncurses_erasechar

#define arginfo_ncurses_insertln arginfo_ncurses_end

#define arginfo_ncurses_isendwin arginfo_ncurses_end

#define arginfo_ncurses_killchar arginfo_ncurses_erasechar

#define arginfo_ncurses_nl arginfo_ncurses_end

#define arginfo_ncurses_nocbreak arginfo_ncurses_end

#define arginfo_ncurses_noecho arginfo_ncurses_end

#define arginfo_ncurses_nonl arginfo_ncurses_end

#define arginfo_ncurses_noraw arginfo_ncurses_has_colors

#define arginfo_ncurses_raw arginfo_ncurses_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_meta, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, _8bit, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_werase, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_resetty arginfo_ncurses_end

#define arginfo_ncurses_savetty arginfo_ncurses_end

#define arginfo_ncurses_termattrs arginfo_ncurses_end

#define arginfo_ncurses_use_default_colors arginfo_ncurses_end

#define arginfo_ncurses_slk_attr arginfo_ncurses_end

#define arginfo_ncurses_slk_clear arginfo_ncurses_end

#define arginfo_ncurses_slk_noutrefresh arginfo_ncurses_end

#define arginfo_ncurses_slk_refresh arginfo_ncurses_end

#define arginfo_ncurses_slk_restore arginfo_ncurses_end

#define arginfo_ncurses_slk_touch arginfo_ncurses_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_slk_set, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, labelnr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_attroff, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attributes, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_attron arginfo_ncurses_attroff

#define arginfo_ncurses_attrset arginfo_ncurses_attroff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_bkgd, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrchar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wbkgd, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, handle, resource, 0)
	ZEND_ARG_TYPE_INFO(0, attrchar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_curs_set, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visibility, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_delay_output, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, milliseconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_echochar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, character, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_halfdelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tenth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_has_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keycode, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_insch arginfo_ncurses_echochar

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_insdelln, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_mouseinterval arginfo_ncurses_delay_output

#define arginfo_ncurses_napms arginfo_ncurses_delay_output

#define arginfo_ncurses_scrl arginfo_ncurses_insdelln

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_slk_attroff, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, intarg, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_slk_attron arginfo_ncurses_slk_attroff

#define arginfo_ncurses_slk_attrset arginfo_ncurses_slk_attroff

#define arginfo_ncurses_slk_color arginfo_ncurses_slk_attroff

#define arginfo_ncurses_slk_init arginfo_ncurses_slk_attroff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_typeahead, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_ungetch arginfo_ncurses_has_key

#define arginfo_ncurses_vidattr arginfo_ncurses_slk_attroff

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_use_extended_names, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_bkgdset, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, attrchar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wbkgdset, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, handle, resource, 0)
	ZEND_ARG_TYPE_INFO(0, attrchar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_filter, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_noqiflush arginfo_ncurses_end

#define arginfo_ncurses_qiflush arginfo_ncurses_filter

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_timeout, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, millisec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_use_env, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_addstr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_putp arginfo_ncurses_addstr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_scr_dump, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_scr_init arginfo_ncurses_scr_dump

#define arginfo_ncurses_scr_restore arginfo_ncurses_scr_dump

#define arginfo_ncurses_scr_set arginfo_ncurses_scr_dump

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvaddch, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvaddchnstr, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_addchnstr, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvaddchstr, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_addchstr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_mvaddnstr arginfo_ncurses_mvaddchnstr

#define arginfo_ncurses_addnstr arginfo_ncurses_addchnstr

#define arginfo_ncurses_mvaddstr arginfo_ncurses_mvaddchstr

#define arginfo_ncurses_mvdelch arginfo_ncurses_move

#define arginfo_ncurses_mvgetch arginfo_ncurses_move

#define arginfo_ncurses_mvinch arginfo_ncurses_move

#define arginfo_ncurses_insstr arginfo_ncurses_addstr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_instr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, buffer, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvhline, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attrchar, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_mvvline arginfo_ncurses_mvhline

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvcur, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, old_y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, old_x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, new_y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, new_x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_init_color, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_color_content, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_pair_content, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pair, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, f, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_border, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tl_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tr_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bl_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, br_corner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wborder, 0, 9, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tl_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tr_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bl_corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, br_corner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_assume_default_colors, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fg, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_define_key, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, definition, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, keycode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_hline, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charattr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_vline arginfo_ncurses_hline

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_whline, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, charattr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_wvline arginfo_ncurses_whline

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_keyok, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keycode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mvwaddstr, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_wrefresh arginfo_ncurses_werase

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wscrl, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wsetscrreg, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bot, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_scrollok, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, bf, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_termname arginfo_ncurses_erasechar

#define arginfo_ncurses_longname arginfo_ncurses_erasechar

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mousemask, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newmask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, oldmask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_getmouse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(1, mevent, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_ungetmouse, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mevent, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_mouse_trafo, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toscreen, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wmouse_trafo, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toscreen, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_getyx, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(1, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(1, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_getmaxyx arginfo_ncurses_getyx

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wmove, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_keypad arginfo_ncurses_scrollok

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wcolor_set, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, color_pair, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_wclear arginfo_ncurses_werase

#define arginfo_ncurses_wnoutrefresh arginfo_ncurses_werase

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_waddstr, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, n, IS_LONG, 0, "\"\"")
ZEND_END_ARG_INFO()

#define arginfo_ncurses_wgetch arginfo_ncurses_werase

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_wattroff, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
	ZEND_ARG_TYPE_INFO(0, attrs, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_wattron arginfo_ncurses_wattroff

#define arginfo_ncurses_wattrset arginfo_ncurses_wattroff

#define arginfo_ncurses_wstandend arginfo_ncurses_werase

#define arginfo_ncurses_wstandout arginfo_ncurses_werase

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ncurses_new_panel, 0, 1, resource, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_del_panel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, panel, resource, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_hide_panel, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, panel, resource, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_show_panel arginfo_ncurses_hide_panel

#define arginfo_ncurses_top_panel arginfo_ncurses_hide_panel

#define arginfo_ncurses_bottom_panel arginfo_ncurses_hide_panel

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_move_panel, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, panel, resource, 0)
	ZEND_ARG_TYPE_INFO(0, startx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, starty, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ncurses_replace_panel, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, panel, resource, 0)
	ZEND_ARG_OBJ_INFO(0, window, resource, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_ncurses_panel_above, 0, 1, resource, 0)
	ZEND_ARG_OBJ_INFO(0, panel, resource, 0)
ZEND_END_ARG_INFO()

#define arginfo_ncurses_panel_below arginfo_ncurses_panel_above

#define arginfo_ncurses_panel_window arginfo_ncurses_panel_above

#define arginfo_ncurses_update_panels arginfo_ncurses_filter

static const zend_function_entry ncurses_functions[] = {
	ZEND_FE(ncurses_addch, arginfo_ncurses_addch)
	ZEND_FE(ncurses_waddch, arginfo_ncurses_waddch)
#ifdef HAVE_NCURSES_COLOR_SET
	ZEND_FE(ncurses_color_set, arginfo_ncurses_color_set)
#endif
	ZEND_FE(ncurses_delwin, arginfo_ncurses_delwin)
	ZEND_FE(ncurses_end, arginfo_ncurses_end)
	ZEND_FE(ncurses_getch, arginfo_ncurses_getch)
	ZEND_FE(ncurses_has_colors, arginfo_ncurses_has_colors)
	ZEND_FE(ncurses_init, arginfo_ncurses_init)
	ZEND_FE(ncurses_init_pair, arginfo_ncurses_init_pair)
	ZEND_FE(ncurses_move, arginfo_ncurses_move)
	ZEND_FE(ncurses_newpad, arginfo_ncurses_newpad)
	ZEND_FE(ncurses_prefresh, arginfo_ncurses_prefresh)
	ZEND_FE(ncurses_pnoutrefresh, arginfo_ncurses_pnoutrefresh)
	ZEND_FE(ncurses_newwin, arginfo_ncurses_newwin)
	ZEND_FE(ncurses_refresh, arginfo_ncurses_refresh)
	ZEND_FE(ncurses_start_color, arginfo_ncurses_start_color)
	ZEND_FE(ncurses_standout, arginfo_ncurses_standout)
	ZEND_FE(ncurses_standend, arginfo_ncurses_standend)
	ZEND_FE(ncurses_baudrate, arginfo_ncurses_baudrate)
	ZEND_FE(ncurses_beep, arginfo_ncurses_beep)
	ZEND_FE(ncurses_can_change_color, arginfo_ncurses_can_change_color)
	ZEND_FE(ncurses_cbreak, arginfo_ncurses_cbreak)
	ZEND_FE(ncurses_clear, arginfo_ncurses_clear)
	ZEND_FE(ncurses_clrtobot, arginfo_ncurses_clrtobot)
	ZEND_FE(ncurses_clrtoeol, arginfo_ncurses_clrtoeol)
	ZEND_FE(ncurses_reset_prog_mode, arginfo_ncurses_reset_prog_mode)
	ZEND_FE(ncurses_reset_shell_mode, arginfo_ncurses_reset_shell_mode)
	ZEND_FE(ncurses_def_prog_mode, arginfo_ncurses_def_prog_mode)
	ZEND_FE(ncurses_def_shell_mode, arginfo_ncurses_def_shell_mode)
	ZEND_FE(ncurses_delch, arginfo_ncurses_delch)
	ZEND_FE(ncurses_deleteln, arginfo_ncurses_deleteln)
	ZEND_FE(ncurses_doupdate, arginfo_ncurses_doupdate)
	ZEND_FE(ncurses_echo, arginfo_ncurses_echo)
	ZEND_FE(ncurses_erase, arginfo_ncurses_erase)
	ZEND_FE(ncurses_erasechar, arginfo_ncurses_erasechar)
	ZEND_FE(ncurses_flash, arginfo_ncurses_flash)
	ZEND_FE(ncurses_flushinp, arginfo_ncurses_flushinp)
	ZEND_FE(ncurses_has_ic, arginfo_ncurses_has_ic)
	ZEND_FE(ncurses_has_il, arginfo_ncurses_has_il)
	ZEND_FE(ncurses_inch, arginfo_ncurses_inch)
	ZEND_FE(ncurses_insertln, arginfo_ncurses_insertln)
	ZEND_FE(ncurses_isendwin, arginfo_ncurses_isendwin)
	ZEND_FE(ncurses_killchar, arginfo_ncurses_killchar)
	ZEND_FE(ncurses_nl, arginfo_ncurses_nl)
	ZEND_FE(ncurses_nocbreak, arginfo_ncurses_nocbreak)
	ZEND_FE(ncurses_noecho, arginfo_ncurses_noecho)
	ZEND_FE(ncurses_nonl, arginfo_ncurses_nonl)
	ZEND_FE(ncurses_noraw, arginfo_ncurses_noraw)
	ZEND_FE(ncurses_raw, arginfo_ncurses_raw)
	ZEND_FE(ncurses_meta, arginfo_ncurses_meta)
	ZEND_FE(ncurses_werase, arginfo_ncurses_werase)
	ZEND_FE(ncurses_resetty, arginfo_ncurses_resetty)
	ZEND_FE(ncurses_savetty, arginfo_ncurses_savetty)
	ZEND_FE(ncurses_termattrs, arginfo_ncurses_termattrs)
	ZEND_FE(ncurses_use_default_colors, arginfo_ncurses_use_default_colors)
#ifdef HAVE_NCURSES_SLK_ATTR
	ZEND_FE(ncurses_slk_attr, arginfo_ncurses_slk_attr)
#endif
	ZEND_FE(ncurses_slk_clear, arginfo_ncurses_slk_clear)
	ZEND_FE(ncurses_slk_noutrefresh, arginfo_ncurses_slk_noutrefresh)
	ZEND_FE(ncurses_slk_refresh, arginfo_ncurses_slk_refresh)
	ZEND_FE(ncurses_slk_restore, arginfo_ncurses_slk_restore)
	ZEND_FE(ncurses_slk_touch, arginfo_ncurses_slk_touch)
	ZEND_FE(ncurses_slk_set, arginfo_ncurses_slk_set)
	ZEND_FE(ncurses_attroff, arginfo_ncurses_attroff)
	ZEND_FE(ncurses_attron, arginfo_ncurses_attron)
	ZEND_FE(ncurses_attrset, arginfo_ncurses_attrset)
	ZEND_FE(ncurses_bkgd, arginfo_ncurses_bkgd)
	ZEND_FE(ncurses_wbkgd, arginfo_ncurses_wbkgd)
	ZEND_FE(ncurses_curs_set, arginfo_ncurses_curs_set)
	ZEND_FE(ncurses_delay_output, arginfo_ncurses_delay_output)
	ZEND_FE(ncurses_echochar, arginfo_ncurses_echochar)
	ZEND_FE(ncurses_halfdelay, arginfo_ncurses_halfdelay)
	ZEND_FE(ncurses_has_key, arginfo_ncurses_has_key)
	ZEND_FE(ncurses_insch, arginfo_ncurses_insch)
	ZEND_FE(ncurses_insdelln, arginfo_ncurses_insdelln)
	ZEND_FE(ncurses_mouseinterval, arginfo_ncurses_mouseinterval)
	ZEND_FE(ncurses_napms, arginfo_ncurses_napms)
	ZEND_FE(ncurses_scrl, arginfo_ncurses_scrl)
	ZEND_FE(ncurses_slk_attroff, arginfo_ncurses_slk_attroff)
	ZEND_FE(ncurses_slk_attron, arginfo_ncurses_slk_attron)
	ZEND_FE(ncurses_slk_attrset, arginfo_ncurses_slk_attrset)
#ifdef HAVE_NCURSES_SLK_COLOR
	ZEND_FE(ncurses_slk_color, arginfo_ncurses_slk_color)
#endif
	ZEND_FE(ncurses_slk_init, arginfo_ncurses_slk_init)
	ZEND_FE(ncurses_typeahead, arginfo_ncurses_typeahead)
	ZEND_FE(ncurses_ungetch, arginfo_ncurses_ungetch)
	ZEND_FE(ncurses_vidattr, arginfo_ncurses_vidattr)
#ifdef HAVE_NCURSES_USE_EXTENDED_NAMES
	ZEND_FE(ncurses_use_extended_names, arginfo_ncurses_use_extended_names)
#endif
	ZEND_FE(ncurses_bkgdset, arginfo_ncurses_bkgdset)
	ZEND_FE(ncurses_wbkgdset, arginfo_ncurses_wbkgdset)
	ZEND_FE(ncurses_filter, arginfo_ncurses_filter)
	ZEND_FE(ncurses_noqiflush, arginfo_ncurses_noqiflush)
	ZEND_FE(ncurses_qiflush, arginfo_ncurses_qiflush)
	ZEND_FE(ncurses_timeout, arginfo_ncurses_timeout)
	ZEND_FE(ncurses_use_env, arginfo_ncurses_use_env)
	ZEND_FE(ncurses_addstr, arginfo_ncurses_addstr)
	ZEND_FE(ncurses_putp, arginfo_ncurses_putp)
	ZEND_FE(ncurses_scr_dump, arginfo_ncurses_scr_dump)
	ZEND_FE(ncurses_scr_init, arginfo_ncurses_scr_init)
	ZEND_FE(ncurses_scr_restore, arginfo_ncurses_scr_restore)
	ZEND_FE(ncurses_scr_set, arginfo_ncurses_scr_set)
	ZEND_FE(ncurses_mvaddch, arginfo_ncurses_mvaddch)
	ZEND_FE(ncurses_mvaddchnstr, arginfo_ncurses_mvaddchnstr)
	ZEND_FE(ncurses_addchnstr, arginfo_ncurses_addchnstr)
	ZEND_FE(ncurses_mvaddchstr, arginfo_ncurses_mvaddchstr)
	ZEND_FE(ncurses_addchstr, arginfo_ncurses_addchstr)
	ZEND_FE(ncurses_mvaddnstr, arginfo_ncurses_mvaddnstr)
	ZEND_FE(ncurses_addnstr, arginfo_ncurses_addnstr)
	ZEND_FE(ncurses_mvaddstr, arginfo_ncurses_mvaddstr)
	ZEND_FE(ncurses_mvdelch, arginfo_ncurses_mvdelch)
	ZEND_FE(ncurses_mvgetch, arginfo_ncurses_mvgetch)
	ZEND_FE(ncurses_mvinch, arginfo_ncurses_mvinch)
	ZEND_FE(ncurses_insstr, arginfo_ncurses_insstr)
	ZEND_FE(ncurses_instr, arginfo_ncurses_instr)
	ZEND_FE(ncurses_mvhline, arginfo_ncurses_mvhline)
	ZEND_FE(ncurses_mvvline, arginfo_ncurses_mvvline)
	ZEND_FE(ncurses_mvcur, arginfo_ncurses_mvcur)
	ZEND_FE(ncurses_init_color, arginfo_ncurses_init_color)
	ZEND_FE(ncurses_color_content, arginfo_ncurses_color_content)
	ZEND_FE(ncurses_pair_content, arginfo_ncurses_pair_content)
	ZEND_FE(ncurses_border, arginfo_ncurses_border)
	ZEND_FE(ncurses_wborder, arginfo_ncurses_wborder)
#ifdef HAVE_NCURSES_ASSUME_DEFAULT_COLORS
	ZEND_FE(ncurses_assume_default_colors, arginfo_ncurses_assume_default_colors)
#endif
#ifdef HAVE_NCURSES_DEFINE_KEY
	ZEND_FE(ncurses_define_key, arginfo_ncurses_define_key)
#endif
	ZEND_FE(ncurses_hline, arginfo_ncurses_hline)
	ZEND_FE(ncurses_vline, arginfo_ncurses_vline)
	ZEND_FE(ncurses_whline, arginfo_ncurses_whline)
	ZEND_FE(ncurses_wvline, arginfo_ncurses_wvline)
	ZEND_FE(ncurses_keyok, arginfo_ncurses_keyok)
	ZEND_FE(ncurses_mvwaddstr, arginfo_ncurses_mvwaddstr)
	ZEND_FE(ncurses_wrefresh, arginfo_ncurses_wrefresh)
	ZEND_FE(ncurses_wscrl, arginfo_ncurses_wscrl)
	ZEND_FE(ncurses_wsetscrreg, arginfo_ncurses_wsetscrreg)
	ZEND_FE(ncurses_scrollok, arginfo_ncurses_scrollok)
	ZEND_FE(ncurses_termname, arginfo_ncurses_termname)
	ZEND_FE(ncurses_longname, arginfo_ncurses_longname)
	ZEND_FE(ncurses_mousemask, arginfo_ncurses_mousemask)
	ZEND_FE(ncurses_getmouse, arginfo_ncurses_getmouse)
	ZEND_FE(ncurses_ungetmouse, arginfo_ncurses_ungetmouse)
	ZEND_FE(ncurses_mouse_trafo, arginfo_ncurses_mouse_trafo)
	ZEND_FE(ncurses_wmouse_trafo, arginfo_ncurses_wmouse_trafo)
	ZEND_FE(ncurses_getyx, arginfo_ncurses_getyx)
	ZEND_FE(ncurses_getmaxyx, arginfo_ncurses_getmaxyx)
	ZEND_FE(ncurses_wmove, arginfo_ncurses_wmove)
	ZEND_FE(ncurses_keypad, arginfo_ncurses_keypad)
#ifdef HAVE_NCURSES_COLOR_SET
	ZEND_FE(ncurses_wcolor_set, arginfo_ncurses_wcolor_set)
#endif
	ZEND_FE(ncurses_wclear, arginfo_ncurses_wclear)
	ZEND_FE(ncurses_wnoutrefresh, arginfo_ncurses_wnoutrefresh)
	ZEND_FE(ncurses_waddstr, arginfo_ncurses_waddstr)
	ZEND_FE(ncurses_wgetch, arginfo_ncurses_wgetch)
	ZEND_FE(ncurses_wattroff, arginfo_ncurses_wattroff)
	ZEND_FE(ncurses_wattron, arginfo_ncurses_wattron)
	ZEND_FE(ncurses_wattrset, arginfo_ncurses_wattrset)
	ZEND_FE(ncurses_wstandend, arginfo_ncurses_wstandend)
	ZEND_FE(ncurses_wstandout, arginfo_ncurses_wstandout)

#if HAVE_NCURSES_PANEL
	ZEND_FE(ncurses_new_panel, arginfo_ncurses_new_panel)
	ZEND_FE(ncurses_del_panel, arginfo_ncurses_del_panel)
	ZEND_FE(ncurses_hide_panel, arginfo_ncurses_hide_panel)
	ZEND_FE(ncurses_show_panel, arginfo_ncurses_show_panel)
	ZEND_FE(ncurses_top_panel, arginfo_ncurses_top_panel)
	ZEND_FE(ncurses_bottom_panel, arginfo_ncurses_bottom_panel)
	ZEND_FE(ncurses_move_panel, arginfo_ncurses_move_panel)
	ZEND_FE(ncurses_replace_panel, arginfo_ncurses_replace_panel)
	ZEND_FE(ncurses_panel_above, arginfo_ncurses_panel_above)
	ZEND_FE(ncurses_panel_below, arginfo_ncurses_panel_below)
	ZEND_FE(ncurses_panel_window, arginfo_ncurses_panel_window)
	ZEND_FE(ncurses_update_panels, arginfo_ncurses_update_panels)
#endif
	ZEND_FE_END
};

#endif /* PHP_VERSION_ID >= 80000 */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
