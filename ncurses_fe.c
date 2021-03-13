/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2006 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Hartmut Holzgraefe <hholzgra@php.net>                       |
   |          Georg Richter <georg.richter@php-ev.de>                     |
   +----------------------------------------------------------------------+
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "php_ncurses.h"

#if (PHP_MAJOR_VERSION == 5 && PHP_MINOR_VERSION > 2) || PHP_MAJOR_VERSION > 5
# define NCURSES_ARGINFO
#else
# define NCURSES_ARGINFO static
#endif

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(void_func, 0)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(one_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(two_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(three_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
	ZEND_ARG_INFO(0, arg3)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(four_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
	ZEND_ARG_INFO(0, arg3)
	ZEND_ARG_INFO(0, arg4)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(seven_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
	ZEND_ARG_INFO(0, arg3)
	ZEND_ARG_INFO(0, arg4)
	ZEND_ARG_INFO(0, arg5)
	ZEND_ARG_INFO(0, arg6)
	ZEND_ARG_INFO(0, arg7)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(eight_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
	ZEND_ARG_INFO(0, arg3)
	ZEND_ARG_INFO(0, arg4)
	ZEND_ARG_INFO(0, arg5)
	ZEND_ARG_INFO(0, arg6)
	ZEND_ARG_INFO(0, arg7)
	ZEND_ARG_INFO(0, arg8)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(nine_args_func, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
	ZEND_ARG_INFO(0, arg3)
	ZEND_ARG_INFO(0, arg4)
	ZEND_ARG_INFO(0, arg5)
	ZEND_ARG_INFO(0, arg6)
	ZEND_ARG_INFO(0, arg7)
	ZEND_ARG_INFO(0, arg8)
	ZEND_ARG_INFO(0, arg9)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(firstandsecond_args_force_ref, 0)
	ZEND_ARG_PASS_INFO(1)
	ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(secondandthird_args_force_ref, 0)
	ZEND_ARG_PASS_INFO(0)
	ZEND_ARG_PASS_INFO(1)
	ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(second_thru_fourth_args_force_ref, 0)
	ZEND_ARG_PASS_INFO(0)
	ZEND_ARG_PASS_INFO(1)
	ZEND_ARG_PASS_INFO(1)
	ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(first_arg_force_ref, 0)
	ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();

NCURSES_ARGINFO
ZEND_BEGIN_ARG_INFO(second_arg_force_ref, 0)
	ZEND_ARG_PASS_INFO(0)
	ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();

/* ncurses_functions[]
 *
 * Every user visible function must have an entry in ncurses_functions[].
 */
zend_function_entry ncurses_functions[] = {
	PHP_FE(ncurses_addch,			one_args_func)
#ifdef HAVE_NCURSES_COLOR_SET
	PHP_FE(ncurses_color_set,		one_args_func)
#endif
	PHP_FE(ncurses_delwin,			one_args_func)
	PHP_FE(ncurses_end,				void_func)
	PHP_FE(ncurses_getch,			void_func)
	PHP_FE(ncurses_has_colors,		void_func)
	PHP_FE(ncurses_init,			void_func)
	PHP_FE(ncurses_init_pair,		three_args_func)
	PHP_FE(ncurses_color_content,	second_thru_fourth_args_force_ref)
	PHP_FE(ncurses_pair_content,	secondandthird_args_force_ref)
	PHP_FE(ncurses_move,			two_args_func)
	PHP_FE(ncurses_newwin,			four_args_func)
	PHP_FE(ncurses_refresh,			one_args_func)
	PHP_FE(ncurses_start_color,		void_func)
	PHP_FE(ncurses_standout,		void_func)
	PHP_FE(ncurses_standend,		void_func)
	PHP_FE(ncurses_baudrate,		void_func)
	PHP_FE(ncurses_beep,			void_func)
	PHP_FE(ncurses_can_change_color,	void_func)
	PHP_FE(ncurses_cbreak,			void_func)
	PHP_FE(ncurses_clear,			void_func)
	PHP_FE(ncurses_clrtobot,		void_func)
	PHP_FE(ncurses_clrtoeol,		void_func)
	PHP_FE(ncurses_def_prog_mode,	void_func)
	PHP_FE(ncurses_reset_prog_mode,	void_func)
	PHP_FE(ncurses_def_shell_mode,	void_func)
	PHP_FE(ncurses_reset_shell_mode,	void_func)
	PHP_FE(ncurses_delch,			void_func)
	PHP_FE(ncurses_deleteln,		void_func)
	PHP_FE(ncurses_doupdate,		void_func)
	PHP_FE(ncurses_echo,			void_func)
	PHP_FE(ncurses_erase,			void_func)
	PHP_FE(ncurses_werase,			one_args_func)
	PHP_FE(ncurses_erasechar,		void_func)
	PHP_FE(ncurses_flash,			void_func)
	PHP_FE(ncurses_flushinp,		void_func)
	PHP_FE(ncurses_has_ic,			void_func)
	PHP_FE(ncurses_has_il,			void_func)
	PHP_FE(ncurses_inch,			void_func)
	PHP_FE(ncurses_insertln,		void_func)
	PHP_FE(ncurses_isendwin,		void_func)
	PHP_FE(ncurses_killchar,		void_func)
	PHP_FE(ncurses_nl,				void_func)
	PHP_FE(ncurses_nocbreak,		void_func)
	PHP_FE(ncurses_noecho,			void_func)
	PHP_FE(ncurses_nonl,			void_func)
	PHP_FE(ncurses_noraw,			void_func)
	PHP_FE(ncurses_raw,				void_func)
	PHP_FE(ncurses_meta,			two_args_func)
	PHP_FE(ncurses_resetty,			void_func)
	PHP_FE(ncurses_savetty,			void_func)
	PHP_FE(ncurses_termattrs,		void_func)
	PHP_FE(ncurses_use_default_colors,	void_func)
#ifdef HAVE_NCURSES_SLK_ATTR
	PHP_FE(ncurses_slk_attr,		void_func)
#endif
	PHP_FE(ncurses_slk_clear,		void_func)
	PHP_FE(ncurses_slk_noutrefresh,	void_func)
	PHP_FE(ncurses_slk_refresh,		void_func)
	PHP_FE(ncurses_slk_restore,		void_func)
	PHP_FE(ncurses_slk_touch,		void_func)
	PHP_FE(ncurses_attroff,			one_args_func)
	PHP_FE(ncurses_attron,			one_args_func)
	PHP_FE(ncurses_attrset,			one_args_func)
	PHP_FE(ncurses_bkgd,			one_args_func)
	PHP_FE(ncurses_curs_set,		one_args_func)
	PHP_FE(ncurses_delay_output,	one_args_func)
	PHP_FE(ncurses_echochar,		one_args_func)
	PHP_FE(ncurses_halfdelay,		one_args_func)
	PHP_FE(ncurses_has_key,			one_args_func)
	PHP_FE(ncurses_insch,			one_args_func)
	PHP_FE(ncurses_insdelln,		one_args_func)
	PHP_FE(ncurses_mouseinterval,	one_args_func)
	PHP_FE(ncurses_napms,			one_args_func)
	PHP_FE(ncurses_scrl,			one_args_func)
	PHP_FE(ncurses_slk_attroff,		one_args_func)
	PHP_FE(ncurses_slk_attron,		one_args_func)
	PHP_FE(ncurses_slk_attrset,		one_args_func)
#ifdef HAVE_NCURSES_SLK_COLOR
	PHP_FE(ncurses_slk_color,		one_args_func)
#endif
	PHP_FE(ncurses_slk_init,		one_args_func)
	PHP_FE(ncurses_slk_set,			three_args_func)
	PHP_FE(ncurses_typeahead,		one_args_func)
	PHP_FE(ncurses_ungetch,			one_args_func)
	PHP_FE(ncurses_vidattr, 		one_args_func)
	PHP_FE(ncurses_wrefresh,		one_args_func)
#ifdef HAVE_NCURSES_USE_EXTENDED_NAMES
	PHP_FE(ncurses_use_extended_names,	one_args_func)
#endif
	PHP_FE(ncurses_bkgdset,			one_args_func)
	PHP_FE(ncurses_filter,			void_func)
	PHP_FE(ncurses_noqiflush,		void_func)
	PHP_FE(ncurses_qiflush,			void_func)
	PHP_FE(ncurses_timeout,			one_args_func)
	PHP_FE(ncurses_use_env,			one_args_func)
	PHP_FE(ncurses_addstr,			one_args_func)
	PHP_FE(ncurses_putp,			one_args_func)
	PHP_FE(ncurses_scr_dump,		one_args_func)
	PHP_FE(ncurses_scr_init,		one_args_func)
	PHP_FE(ncurses_scr_restore,		one_args_func)
	PHP_FE(ncurses_scr_set,			one_args_func)
	PHP_FE(ncurses_mvaddch,			three_args_func)
	PHP_FE(ncurses_mvaddchnstr,		four_args_func)
	PHP_FE(ncurses_addchnstr,		two_args_func)
	PHP_FE(ncurses_mvaddchstr,		three_args_func)
	PHP_FE(ncurses_addchstr,		one_args_func)
	PHP_FE(ncurses_mvaddnstr,		four_args_func)
	PHP_FE(ncurses_addnstr,			two_args_func)
	PHP_FE(ncurses_mvaddstr,		three_args_func)
	PHP_FE(ncurses_mvdelch,			two_args_func)
	PHP_FE(ncurses_mvgetch,			two_args_func)
	PHP_FE(ncurses_mvinch,			two_args_func)
	PHP_FE(ncurses_mvwaddstr,		four_args_func)
	PHP_FE(ncurses_insstr,			one_args_func)
	PHP_FE(ncurses_instr,			first_arg_force_ref)
	PHP_FE(ncurses_mvhline,			four_args_func)
	PHP_FE(ncurses_mvcur,			four_args_func)
	PHP_FE(ncurses_init_color,		four_args_func)
	PHP_FE(ncurses_border,			eight_args_func)
#ifdef HAVE_NCURSES_ASSUME_DEFAULT_COLORS
	PHP_FE(ncurses_assume_default_colors,	two_args_func)
#endif
#ifdef HAVE_NCURSES_DEFINE_KEY
	PHP_FE(ncurses_define_key,		two_args_func)
#endif
	PHP_FE(ncurses_hline,			two_args_func)
	PHP_FE(ncurses_vline,			two_args_func)
	PHP_FE(ncurses_keyok,			two_args_func)
	PHP_FE(ncurses_termname,		void_func)
	PHP_FE(ncurses_longname,		void_func)
	PHP_FE(ncurses_mousemask,		second_arg_force_ref)
	PHP_FE(ncurses_getmouse,		first_arg_force_ref)
	PHP_FE(ncurses_ungetmouse,		one_args_func)
	PHP_FE(ncurses_mouse_trafo,		firstandsecond_args_force_ref)
	PHP_FE(ncurses_wmouse_trafo,	secondandthird_args_force_ref)
	PHP_FE(ncurses_waddstr,			three_args_func)
	PHP_FE(ncurses_wnoutrefresh,	one_args_func)
	PHP_FE(ncurses_wclear,			one_args_func)
	PHP_FE(ncurses_wscrl,			two_args_func)
	PHP_FE(ncurses_wsetscrreg, 		three_args_func)
	PHP_FE(ncurses_scrollok, 		two_args_func)

#ifdef HAVE_NCURSES_COLOR_SET
	PHP_FE(ncurses_wcolor_set,	two_args_func)
#endif
	PHP_FE(ncurses_wgetch,		one_args_func)
	PHP_FE(ncurses_keypad,		two_args_func)
	PHP_FE(ncurses_wmove,		three_args_func)

	PHP_FE(ncurses_newpad,		two_args_func)
	PHP_FE(ncurses_prefresh,	seven_args_func)
	PHP_FE(ncurses_pnoutrefresh,	seven_args_func)
	PHP_FE(ncurses_wstandout,	one_args_func)
	PHP_FE(ncurses_wstandend,	one_args_func)
	PHP_FE(ncurses_wattrset,	two_args_func)
	PHP_FE(ncurses_wattron,		two_args_func)
	PHP_FE(ncurses_wattroff,	two_args_func)
	PHP_FE(ncurses_waddch,		two_args_func)
	PHP_FE(ncurses_wborder,		nine_args_func)
	PHP_FE(ncurses_whline,		three_args_func)
	PHP_FE(ncurses_wvline,		three_args_func)
	PHP_FE(ncurses_getyx,		secondandthird_args_force_ref)
	PHP_FE(ncurses_getmaxyx,	secondandthird_args_force_ref)
	
#if HAVE_NCURSES_PANEL
	PHP_FE(ncurses_update_panels,	void_func)
	PHP_FE(ncurses_panel_window,	one_args_func)
	PHP_FE(ncurses_panel_below,	one_args_func)
	PHP_FE(ncurses_panel_above,	one_args_func)
	PHP_FE(ncurses_replace_panel,	two_args_func)
	PHP_FE(ncurses_move_panel,	three_args_func)
	PHP_FE(ncurses_bottom_panel,	one_args_func)
	PHP_FE(ncurses_top_panel,	one_args_func)
	PHP_FE(ncurses_show_panel,	one_args_func)
	PHP_FE(ncurses_hide_panel,	one_args_func)
	PHP_FE(ncurses_del_panel,	one_args_func)
	PHP_FE(ncurses_new_panel,	one_args_func)
#endif

  {NULL, NULL, NULL}  /* Must be the last line in ncurses_functions[] */
};

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
