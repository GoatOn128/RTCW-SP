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

If you have questions concerning the license or the applicable additional terms, you should contact in writing to id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, MD 20850 USA.

===========================================================================
*/

#ifndef __LIGHTING_H__
#define __LIGHTING_H__

#include "Backend.h"

/*
===============================================================================

  The entity lighting

  The light grid sampling of src/renderer/tr_light.c of this code
  base: the grid trilerp of R_SetupEntityLightingGrid, the minlight
  and sun fallbacks of R_SetupEntityLighting and the point query of
  R_LightForPoint. The dynamic light part of the engine reads the
  refdef dlights, and the bmodel dlight walk of R_DlightBmodel
  transforms them; both land with the dynamic light phase, as
  documented at the call sites in Lighting.cpp.

  Nothing drives this yet: the scene phase calls it per entity like
  the engine front end does.

===============================================================================
*/

// calculates all the lighting values that the Calc_* functions of the
// tesselator read, the engine's R_SetupEntityLighting
void R_SetupEntityLighting( const trRefdef_t *refdef, trRefEntity_t *ent );

// the light grid lookup of the engine, returns qfalse without a grid
int R_LightForPoint( vec3_t point, vec3_t ambientLight, vec3_t directedLight, vec3_t lightDir );

#endif /* !__LIGHTING_H__ */
