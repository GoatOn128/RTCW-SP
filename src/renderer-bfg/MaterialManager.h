/*
===========================================================================

Doom 3 BFG Edition GPL Source Code
Copyright (C) 1993-2012 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 BFG Edition GPL Source Code ("Doom 3 BFG Edition Source Code").

Doom 3 BFG Edition Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 BFG Edition Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#ifndef __MATERIALMANAGER_H__
#define __MATERIALMANAGER_H__

#include "Material.h"

/*
===============================================================================

	Material Manager

	A trimmed stand-in for the BFG declaration manager, following the
	model manager of this module: the shader script translation keeps
	its own registry of the parsed materials.

===============================================================================
*/

class idMaterialManager {
public:
virtual ~idMaterialManager() {}

// clears the list and creates the default material
virtual void                    Init() = 0;

// frees all the materials
virtual void                    Shutdown() = 0;

// returns the default material, which is never drawn
virtual const idMaterial *      DefaultMaterial() const = 0;

// returns NULL if the name is empty or the material is not loaded
virtual const idMaterial *      CheckMaterial( const char *name ) = 0;

// returns a valid material for every name: an explicitly defined
// shader if there is one, otherwise the texture-only fallback of
// R_FindShader; the default material only for empty names
virtual const idMaterial *      FindMaterial( const char *name, int lightmapIndex = LIGHTMAP_NONE ) = 0;

virtual int                     NumMaterials() const = 0;

// prints the loaded materials, for development
virtual void                    ListMaterials() const = 0;

// the global sun direction of the engine's tr.sunDirection, set by
// the sun keyword of the shader files
virtual const float *           SunDirection() const = 0;

// the light grid multipliers of the engine's tr.lightGridMulAmbient
// and tr.lightGridMulDirected, set by the lightgridmul keywords,
// 0 means no multiplier
virtual float                   LightGridMulAmbient() const = 0;
virtual float                   LightGridMulDirected() const = 0;
};

// this will be statically pointed at a private implementation
extern idMaterialManager        *materialManager;

#endif /* !__MATERIALMANAGER_H__ */
