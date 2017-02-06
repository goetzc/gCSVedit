/*
 * This file is part of gCSVedit.
 *
 * Copyright 2015, 2016 - Université Catholique de Louvain
 *
 * From gedit for Windows support:
 * Copyright 2010 - Jesse van den Kieboom
 *
 * gCSVedit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gCSVedit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gCSVedit.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Sébastien Wilmet <sebastien.wilmet@uclouvain.be>
 */

#include "config.h"
#include <locale.h>
#include <libintl.h>
#include "gcsv-application.h"

static gchar *
get_locale_directory (void)
{
	return g_build_filename (GCSV_DATADIR, "locale", NULL);
}

static void
setup_i18n (void)
{
	gchar *locale_dir;

	setlocale (LC_ALL, "");

	locale_dir = get_locale_directory ();
	bindtextdomain (GETTEXT_PACKAGE, locale_dir);
	g_free (locale_dir);

	bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
	textdomain (GETTEXT_PACKAGE);
}

gint
main (gint    argc,
      gchar **argv)
{
	GcsvApplication *app;
	gint status;

	setup_i18n ();

	app = gcsv_application_new ();
	status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);

	return status;
}
