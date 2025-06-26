dnl Process this file with autoconf to produce a configure script.

dnl Copyright (C) 2025 Ivan Guerreschi.

dnl This file is free software; as a special exception the author gives
dnl unlimited permission to copy and/or distribute it, with or without
dnl modifications, as long as this notice is preserved.
dnl
dnl This program is distributed in the hope that it will be useful, but
dnl WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
dnl implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

AC_INIT([ttdb],
	[1.0],
	[ivan.guerreschi.dev@gmail.com], [],
	[https://github.com/nullzeiger/ttdb])

dnl Must come before AM_INIT_AUTOMAKE.
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11.1 -Wall -Werror])

dnl Minimum Autoconf version required.
AC_PREREQ([2.64])

dnl Where to generate output; srcdir location.
AC_CONFIG_HEADERS([config.h:config.in])dnl Keep filename to 8.3 for MS-DOS.
AC_CONFIG_SRCDIR([src/ttdbcli.c])

dnl Checks for programs.
dnl We need a C compiler.
AC_PROG_CC

dnl Since we use gnulib: gl_EARLY must be called as soon as possible after
dnl the C compiler is checked.  The others could be later, but we just
dnl keep everything together.
gl_EARLY
gl_INIT

dnl i18n support from GNU gettext.
AM_GNU_GETTEXT_VERSION([0.23.1])
AM_GNU_GETTEXT([external])

dnl readline
AC_CHECK_LIB([readline], [readline],
  [READLINE_LIBS="-lreadline"],
  [AC_MSG_ERROR([Library readline not found])])

AC_CHECK_HEADERS([readline/readline.h readline/history.h])

# Rende la variabile disponibile per i Makefile
AC_SUBST([READLINE_LIBS])

AC_CONFIG_FILES([Makefile
	lib/Makefile
	src/Makefile
	po/Makefile.in
])

AC_OUTPUT
