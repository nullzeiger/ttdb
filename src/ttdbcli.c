/* ttdbcli.c -- cli for ttdb timetables database.

   Copyright (C) 2025 Ivan Guerreschi. 

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

/* Internationalization.  */
# include "gettext.h"
# define _(str) gettext (str)
# define N_(str) gettext_noop (str)

int
main (void)
{
  setlocale (LC_ALL, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

  char msg[1024];
  snprintf (msg, 1024, _("Hello World!"));
  puts (msg);

  char *input;

  using_history ();

  while (1)
    {
      input = readline ("myshell> ");

      if (!input || strcmp (input, "exit") == 0)
	{
	  free (input);
	  break;
	}

      if (*input)
	{
	  add_history (input);
	  printf (_("You have entered: %s\n"), input);
	}

      free (input);
    }

  return 0;
}
