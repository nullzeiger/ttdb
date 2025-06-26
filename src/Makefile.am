# Makefile for the src directory of ttdb.
#
# Copyright (C) 2025 Ivan Guerreschi.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

AM_CPPFLAGS = -DLOCALEDIR=\"$(localedir)\" \
	-I$(top_builddir)/lib \
	-I$(top_srcdir)/lib \
	$(READLINE_CPPFLAGS)

bin_PROGRAMS = ttdbcli

ttdbcli_SOURCES = ttdbcli.c

ttdbcli_LDADD = $(top_builddir)/lib/lib$(PACKAGE).a \
	$(LIBINTL) \
	$(READLINE_LIBS)
