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

#ifndef __SHADOW_H__
#define __SHADOW_H__

#include "Backend.h"

/*
===============================================================================

  The stencil shadow pass of the engine backend

  Ported from src/renderer/tr_shadows.c of this code base. The shadow
  volumes are planar projections: the silhouette edges of the
  tesselated surface project away from the entity light direction and
  write to the stencil buffer, front facing triangles increment it and
  back facing triangles decrement it, and RB_ShadowFinish darkens every
  pixel the volumes cover once the whole view has been drawn.

  Like the image upload, nothing calls this yet: the module has no live
  GL context until the backend draw phase, which wires RB_ShadowTessEnd
  into RB_EndSurface for the shadow shader, RB_ShadowFinish into the
  view draw loop after the world, RB_ProjectionShadowDeform into the
  DEFORM_PROJECTION_SHADOW stage of a material and the stencil clear
  bit into the frame buffer clear.

  The backend state and the GL helpers it reads live in Backend.h; the
  tesselator it projects lives in Tess.h.

===============================================================================
*/

// the stencil shadow volume pass over the tesselated surface of the
// current entity, the engine's RB_ShadowTessEnd
void RB_ShadowTessEnd( void );

// darkens everything inside the shadow volumes once per view, the
// engine's RB_ShadowFinish
void RB_ShadowFinish( void );

// the deform of a projection shadow material, the engine's
// RB_ProjectionShadowDeform
void RB_ProjectionShadowDeform( void );

#endif /* !__SHADOW_H__ */
