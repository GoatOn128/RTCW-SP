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

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __Q3PATCH_H__
#define __Q3PATCH_H__

#include "Q3Bsp.h"

// max dimensions of a patch mesh in the map file
const int Q3_MAX_PATCH_SIZE = 32;
// max dimensions of a grid mesh in memory
const int Q3_MAX_GRID_SIZE = 65;

/*
===============================================================================

	Patch subdivision. Adapted from the RTCW renderer curve code
	(src/renderer/tr_curve.c) onto the BSP adapter vertex type; the level of
	detail solution is direction independent, based only on subdivided
	distance from the true curve.

===============================================================================
*/

// turns a raw grid of control points from the map file into a subdivided
// grid mesh; outVerts receives a malloc'd array of outWidth * outHeight
// vertices that the caller owns, and the function returns false if the
// patch exceeds the grid limits
bool q3SubdividePatchToGrid( int width, int height, const q3BspDrawVert_t *points,
							 int *outWidth, int *outHeight, const q3BspDrawVert_t **outVerts );

#endif /* !__Q3PATCH_H__ */
