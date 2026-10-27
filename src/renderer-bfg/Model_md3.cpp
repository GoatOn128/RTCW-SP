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
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 BFG Edition Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 BFG Edition Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 BFG Edition Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"

#include "RenderWorld.h"
#include "Model_md3.h"

/*
===================
R_LatLongToNormal

Decodes the packed latitude/longitude normal the md3 format stores with
every vertex. Adapted from R_LatLongToNormal in src/renderer/tr_surface.c
of this code base, with the engine's sine lookup table replaced by direct
sine and cosine evaluation.
===================
*/
static void R_LatLongToNormal( idVec3 &normal, short latLong ) {
	unsigned int lat = ( latLong >> 8 ) & 0xff;
	unsigned int lng = ( latLong & 0xff );

	const float latAngle = lat * ( idMath::PI / 128.0f );
	const float lngAngle = lng * ( idMath::PI / 128.0f );

	// decode X as cos( lat ) * sin( lng )
	// decode Y as sin( lat ) * sin( lng )
	// decode Z as cos( lng )
	normal.x = cos( latAngle ) * sin( lngAngle );
	normal.y = sin( latAngle ) * sin( lngAngle );
	normal.z = cos( lngAngle );
}

/*
===================
ReadModelFile

Interim: the engine file system is not hooked up yet, so the model is
read straight from the directory next to the working directory, like
the BSP loader reads its maps. The buffer belongs to the caller.
===================
*/
static byte *ReadModelFile( const char *fileName, int *fileLength ) {
	*fileLength = 0;

	FILE *file = fopen( fileName, "rb" );
	if ( file == NULL ) {
		return NULL;
	}
	fseek( file, 0, SEEK_END );
	const int length = ftell( file );
	fseek( file, 0, SEEK_SET );
	if ( length < (int)sizeof( md3Header_t ) ) {
		fclose( file );
		return NULL;
	}
	byte *buffer = (byte *) malloc( length );
	const int readLength = (int) fread( buffer, 1, length, file );
	fclose( file );
	if ( readLength != length ) {
		free( buffer );
		return NULL;
	}

	*fileLength = length;
	return buffer;
}

/*
===================
ValidateMD3Surfaces

Checks that the surface chains stay inside the file, so the
instantiation can trust the raw data afterwards
===================
*/
static bool ValidateMD3Surfaces( const md3Header_t *md3, int fileLength ) {
	if ( md3->numFrames < 1 || md3->numFrames > MD3_MAX_FRAMES ) {
		return false;
	}
	if ( md3->numSurfaces < 0 || md3->numSurfaces > MD3_MAX_SURFACES ) {
		return false;
	}
	if ( md3->ofsEnd > fileLength ) {
		return false;
	}

	const md3Surface_t *surf = (const md3Surface_t *)( (const byte *)md3 + md3->ofsSurfaces );
	for ( int i = 0; i < md3->numSurfaces; i++ ) {
		const byte *surfStart = (const byte *)surf;
		const byte *surfEnd = surfStart + surf->ofsEnd;

		if ( surf->ofsEnd < (int)sizeof( md3Surface_t ) || surfEnd > (const byte *)md3 + md3->ofsEnd ) {
			return false;
		}
		if ( surf->numVerts < 0 || surf->numVerts > MD3_MAX_VERTS
			 || surf->numTriangles < 0 || surf->numTriangles > MD3_MAX_TRIANGLES
			 || surf->numShaders < 0 || surf->numShaders > MD3_MAX_SHADERS ) {
			return false;
		}
		// the xyz normals lump carries a vertex per frame
		if ( surf->ofsXyzNormals + surf->numVerts * surf->numFrames * (int)sizeof( md3XyzNormal_t ) > surf->ofsEnd ) {
			return false;
		}
		if ( surf->ofsSt + surf->numVerts * (int)sizeof( md3St_t ) > surf->ofsEnd ) {
			return false;
		}
		if ( surf->ofsTriangles + surf->numTriangles * (int)sizeof( md3Triangle_t ) > surf->ofsEnd ) {
			return false;
		}
		if ( surf->ofsShaders + surf->numShaders * (int)sizeof( md3Shader_t ) > surf->ofsEnd ) {
			return false;
		}

		const md3Triangle_t *triangles = (const md3Triangle_t *)( surfStart + surf->ofsTriangles );
		for ( int j = 0; j < surf->numTriangles; j++ ) {
			for ( int k = 0; k < 3; k++ ) {
				if ( triangles[j].indexes[k] < 0 || triangles[j].indexes[k] >= surf->numVerts ) {
					return false;
				}
			}
		}

		surf = (const md3Surface_t *)( surfEnd );
	}
	return true;
}

/*
=================
idRenderModelMD3::idRenderModelMD3
=================
*/
idRenderModelMD3::idRenderModelMD3() {
	md3 = NULL;
}

/*
=================
idRenderModelMD3::~idRenderModelMD3
=================
*/
idRenderModelMD3::~idRenderModelMD3() {
	free( md3 );
	md3 = NULL;
}

/*
=================
idRenderModelMD3::InitFromFile

The BFG code base keeps the raw md3 file in memory and lerps the
frames on the fly; this port does the same. The shader pointers stay
NULL until the material phase resolves the names stored in the file.
=================
*/
void idRenderModelMD3::InitFromFile( const char *fileName ) {
	InitEmpty( fileName );

	// throw out any previous load of the file
	free( md3 );
	md3 = NULL;

	int fileLength = 0;
	byte *buffer = ReadModelFile( fileName, &fileLength );
	if ( buffer == NULL ) {
		idLib::Warning( "idRenderModelMD3::InitFromFile: %s not found or unreadable", fileName );
		MakeDefaultModel();
		return;
	}

	md3 = (md3Header_t *)buffer;

	if ( md3->version != MD3_VERSION ) {
		idLib::Warning( "idRenderModelMD3::InitFromFile: %s has wrong version (%i should be %i)",
						fileName, md3->version, MD3_VERSION );
		goto fail;
	}
	if ( !ValidateMD3Surfaces( md3, fileLength ) ) {
		idLib::Warning( "idRenderModelMD3::InitFromFile: %s is not a valid md3 file", fileName );
		goto fail;
	}

	// the md3 tags are not ported yet: nothing consumes them until the
	// game side is hooked up with the engine integration phase
	return;

fail:
	free( md3 );
	md3 = NULL;
	MakeDefaultModel();
}

/*
=================
idRenderModelMD3::IsDynamicModel
=================
*/
dynamicModel_t idRenderModelMD3::IsDynamicModel() const {
	return DM_CACHED;
}

/*
=================
idRenderModelMD3::LerpMeshVertexes

Adapted from the BFG Model_md3.cpp, with the engine's lat/long normal
decode added: the engine vertexes carry a normal the BFG code dropped.
=================
*/
void idRenderModelMD3::LerpMeshVertexes( srfTriangles_t *tri, const md3Surface_t *surf, const float backlerp,
										const int frame, const int oldframe ) const {
	const short *newXyz = (const short *)( (const byte *)surf + surf->ofsXyzNormals ) + frame * surf->numVerts * 4;
	const float newXyzScale = MD3_XYZ_SCALE * ( 1.0f - backlerp );
	const int numVerts = surf->numVerts;

	if ( backlerp == 0 ) {
		// just copy the vertexes
		for ( int vertNum = 0; vertNum < numVerts; vertNum++, newXyz += 4 ) {
			idDrawVert *outvert = &tri->verts[tri->numVerts];

			outvert->Clear();
			outvert->SetNativeOrderColor( 0xFFFFFFFF );

			outvert->xyz.x = newXyz[0] * newXyzScale;
			outvert->xyz.y = newXyz[1] * newXyzScale;
			outvert->xyz.z = newXyz[2] * newXyzScale;

			// the vertex normal comes from the new frame
			idVec3 normal;
			R_LatLongToNormal( normal, newXyz[3] );
			outvert->SetNormal( normal );

			tri->numVerts++;
		}
	} else {
		// interpolate and copy the vertexes
		const short *oldXyz = (const short *)( (const byte *)surf + surf->ofsXyzNormals ) + oldframe * surf->numVerts * 4;
		const float oldXyzScale = MD3_XYZ_SCALE * backlerp;

		for ( int vertNum = 0; vertNum < numVerts; vertNum++, oldXyz += 4, newXyz += 4 ) {
			idDrawVert *outvert = &tri->verts[tri->numVerts];

			outvert->Clear();
			outvert->SetNativeOrderColor( 0xFFFFFFFF );

			// interpolate the xyz
			outvert->xyz.x = oldXyz[0] * oldXyzScale + newXyz[0] * newXyzScale;
			outvert->xyz.y = oldXyz[1] * oldXyzScale + newXyz[1] * newXyzScale;
			outvert->xyz.z = oldXyz[2] * oldXyzScale + newXyz[2] * newXyzScale;

			// interpolate the normals like the engine does, then renormalize
			idVec3 oldNormal;
			idVec3 newNormal;
			R_LatLongToNormal( oldNormal, oldXyz[3] );
			R_LatLongToNormal( newNormal, newXyz[3] );
			idVec3 normal = oldNormal * backlerp + newNormal * ( 1.0f - backlerp );
			normal.Normalize();
			outvert->SetNormal( normal );

			tri->numVerts++;
		}
	}
}

/*
=============
idRenderModelMD3::InstantiateDynamicModel

Adapted from the BFG Model_md3.cpp: a fresh static model is built from
the raw md3 data every call, the frame is driven through the entity
shader parms. The BFG code leaves the vertex color uninitialized; this
port clears the vertexes and sets a white color instead.
=============
*/
idRenderModel *idRenderModelMD3::InstantiateDynamicModel( const struct renderEntity_s *ent, const viewDef_t *view,
														   idRenderModel *cachedModel ) {
	if ( cachedModel != NULL ) {
		delete cachedModel;
		cachedModel = NULL;
	}

	idRenderModelStatic *staticModel = new idRenderModelStatic;
	staticModel->bounds.Clear();

	if ( md3 == NULL || ent == NULL ) {
		// the file never loaded; show the default box so the missing
		// model stays visible
		staticModel->MakeDefaultModel();
		return staticModel;
	}

	// the engine drives the animation through the shader parms
	int frame = (int)ent->shaderParms[SHADERPARM_MD3_FRAME];
	int oldframe = (int)ent->shaderParms[SHADERPARM_MD3_LASTFRAME];
	float backlerp = ent->shaderParms[SHADERPARM_MD3_BACKLERP];

	// clamp the frames the way the engine does when it adds the surfaces
	if ( frame < 0 ) {
		frame = 0;
	} else if ( frame >= md3->numFrames ) {
		frame = md3->numFrames - 1;
	}
	if ( oldframe < 0 ) {
		oldframe = 0;
	} else if ( oldframe >= md3->numFrames ) {
		oldframe = md3->numFrames - 1;
	}
	if ( backlerp < 0.0f ) {
		backlerp = 0.0f;
	} else if ( backlerp > 1.0f ) {
		backlerp = 1.0f;
	}

	const md3Surface_t *surface = (const md3Surface_t *)( (const byte *)md3 + md3->ofsSurfaces );
	for ( int i = 0; i < md3->numSurfaces; i++ ) {

		modelSurface_t surf;
		surf.id = i;
		// the shader name stays in the raw md3 data; the material system
		// resolves it in the material phase
		surf.shader = NULL;
		surf.geometry = staticModel->AllocSurfaceTriangles( surface->numVerts, surface->numTriangles * 3 );

		srfTriangles_t *tri = surf.geometry;

		LerpMeshVertexes( tri, surface, backlerp, frame, oldframe );

		const md3Triangle_t *triangles = (const md3Triangle_t *)( (const byte *)surface + surface->ofsTriangles );
		for ( int j = 0; j < surface->numTriangles; j++ ) {
			tri->indexes[j * 3 + 0] = triangles[j].indexes[0];
			tri->indexes[j * 3 + 1] = triangles[j].indexes[1];
			tri->indexes[j * 3 + 2] = triangles[j].indexes[2];
		}
		tri->numIndexes = surface->numTriangles * 3;

		const md3St_t *texCoords = (const md3St_t *)( (const byte *)surface + surface->ofsSt );
		for ( int j = 0; j < surface->numVerts; j++ ) {
			tri->verts[j].SetTexCoord( texCoords[j].st[0], texCoords[j].st[1] );
		}

		// bounds from the posed vertexes
		tri->bounds.Clear();
		for ( int j = 0; j < tri->numVerts; j++ ) {
			tri->bounds.AddPoint( tri->verts[j].xyz );
		}

		staticModel->AddSurface( surf );

		// find the next surface
		surface = (const md3Surface_t *)( (const byte *)surface + surface->ofsEnd );
	}

	return staticModel;
}

/*
=====================
idRenderModelMD3::Bounds
=====================
*/
idBounds idRenderModelMD3::Bounds( const struct renderEntity_s *ent ) const {
	idBounds ret;
	ret.Clear();

	if ( ent == NULL || md3 == NULL ) {
		// just give it the editor bounds
		ret.AddPoint( idVec3( -10, -10, -10 ) );
		ret.AddPoint( idVec3( 10, 10, 10 ) );
		return ret;
	}

	int frame = (int)ent->shaderParms[SHADERPARM_MD3_FRAME];
	if ( frame < 0 ) {
		frame = 0;
	} else if ( frame >= md3->numFrames ) {
		frame = md3->numFrames - 1;
	}

	const md3Frame_t *frames = (const md3Frame_t *)( (const byte *)md3 + md3->ofsFrames );
	const md3Frame_t *md3Frame = &frames[frame];

	ret.AddPoint( idVec3( md3Frame->bounds[0][0], md3Frame->bounds[0][1], md3Frame->bounds[0][2] ) );
	ret.AddPoint( idVec3( md3Frame->bounds[1][0], md3Frame->bounds[1][1], md3Frame->bounds[1][2] ) );

	return ret;
}
