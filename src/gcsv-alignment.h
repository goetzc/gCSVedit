/*
 * This file is part of gCSVedit.
 *
 * Copyright 2015 - Université Catholique de Louvain
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

#ifndef __GCSV_ALIGNMENT_H__
#define __GCSV_ALIGNMENT_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GCSV_TYPE_ALIGNMENT (gcsv_alignment_get_type ())
G_DECLARE_FINAL_TYPE (GcsvAlignment, gcsv_alignment,
		      GCSV, ALIGNMENT,
		      GObject)

GcsvAlignment *	gcsv_alignment_new		(GtkTextBuffer *buffer,
						 gunichar       delimiter);

void		gcsv_alignment_update		(GcsvAlignment *align);

G_END_DECLS

#endif /* __GCSV_ALIGNMENT_H__ */
