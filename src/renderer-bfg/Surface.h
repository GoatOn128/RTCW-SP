/*
===========================================================================

Return to Castle Wolfenstein single player GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of the Return to Castle Wolfenstein single player GPL Source Code ("RTCW SP Source Code").

RTCW SP Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RTCW SP Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RTCW SP Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the RTCW SP Source Code is also subject to certain additional terms.  You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing to id Software at the address below.

If you have questions concerning the license or the applicable terms, you should contact in writing to id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, MD 20850 USA.

===========================================================================
*/

#ifndef __SURFACE_H__
#define __SURFACE_H__

#include "Tess.h"
#include "Model.h"

// the static geometry path: every surface of the load adapters is
// the srfTriangles_t of the model phase, so the engine's face, grid
// and mesh paths collapse into this one
void RB_SurfaceTriangles( srfTriangles_t *srf );

// the procedural entity surfaces (engine RB_SurfaceEntity dispatch)
void RB_SurfaceEntity( void );

#endif
