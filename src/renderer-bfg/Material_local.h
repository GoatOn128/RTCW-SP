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

#ifndef __MATERIAL_LOCAL_H__
#define __MATERIAL_LOCAL_H__

#include "MaterialManager.h"

/*

  The local material manager, with the shader text lookup the script
  translation uses. The shader file scan and the script parsing live in
  Material_shader.cpp, following the BFG renderer's split of the
  material code across files.

*/

class idMaterialManagerLocal : public idMaterialManager {
public:
virtual void                    Init();
virtual void                    Shutdown();
virtual const idMaterial *      DefaultMaterial() const { return defaultMaterial; }
virtual const idMaterial *      CheckMaterial( const char *name );
virtual const idMaterial *      FindMaterial( const char *name, int lightmapIndex = LIGHTMAP_NONE );
virtual int                     NumMaterials() const { return materials.Num(); }
virtual void                    ListMaterials() const;

private:
const idMaterial *              GetMaterial( const char *name, int lightmapIndex, bool createIfNotFound );
void                            AddMaterial( idMaterial *material );
void                            EnsureInitialized();

// scans the scripts directory for .shader files and combines them into
// the shader text, then indexes the definitions; implemented in
// Material_shader.cpp
void                            LoadShaderFiles();

// returns the byte offset into the shader text right behind the name
// token of the definition, or -1 when the name has no definition;
// implemented in Material_shader.cpp
int                             FindShaderTextDef( const char *name ) const;

// parses the definition at the given offset into the material and
// calls Finish; implemented in Material_shader.cpp
bool                            ParseShaderDef( int offset, idMaterial *material );

idList<idMaterial *, TAG_MATERIAL> materials;
idHashIndex                     hash;
idMaterial *                    defaultMaterial;
bool                            initialized;

// the combined text of all shader files and the index of the
// definitions: for every name, the byte offset right behind the name
idStr                           shaderText;
idList<idStr>                   shaderDefNames;
idList<int>                     shaderDefOffsets;
idHashIndex                     shaderTextHash;
};

#endif /* !__MATERIAL_LOCAL_H__ */
