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
#include "MaterialManager.h"
#include "Model_mdc.h"

// the compressed normals index into this table, it is the very table the
// engine renderer keeps in tr_local.h; the data comes from this code
// base's own src/renderer/anorms256.h
static const float mdcAnormals[NUMMDCVERTEXNORMALS][3] = {
#include "../renderer/anorms256.h"
};

/*
===================
R_LatLongToNormal

Decodes the packed latitude/longitude normal the base frames store with
every vertex. Adapted from R_LatLongToNormal in src/renderer/tr_surface.c
of this code base.
===================
*/
static void R_LatLongToNormal( idVec3 &normal, short latLong ) {
	unsigned int lat = ( latLong >> 8 ) & 0xff;
	unsigned int lng = ( latLong & 0xff );

	const float latAngle = lat * ( idMath::PI / 128.0f );
	const float lngAngle = lng * ( idMath::PI / 128.0f );

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
	if ( length < (int)sizeof( mdcHeader_t ) ) {
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
idRenderModelMDC::idRenderModelMDC
===================
*/
idRenderModelMDC::idRenderModelMDC() {
	mdc = NULL;
}

/*
===================
idRenderModelMDC::~idRenderModelMDC
===================
*/
idRenderModelMDC::~idRenderModelMDC() {
	free( mdc );
	mdc = NULL;
	FreeRuntimeSurfaces();
}

/*
===================
idRenderModelMDC::FreeRuntimeSurfaces
===================
*/
void idRenderModelMDC::FreeRuntimeSurfaces() {
	for ( int i = 0; i < mdcSurfaces.Num(); i++ ) {
		free( mdcSurfaces[i].indexes );
		free( mdcSurfaces[i].texCoords );
		free( mdcSurfaces[i].xyz );
		free( mdcSurfaces[i].normals );
	}
	mdcSurfaces.Clear();
}

/*
===================
LoadMDCSurfaces

Decompresses every frame of every surface. The decode follows
R_MDC_DecodeXyzCompressed in src/renderer/tr_local.h: a compressed frame
stores an offset from its base frame, scaled by MDC_DIST_SCALE per axis,
plus a normal index in the upper byte.
===================
*/
static bool LoadMDCSurfaces( const mdcHeader_t *mdc, int fileLength, idList<mdcRuntimeSurface_t, TAG_MODEL> &out ) {
	if ( mdc->numFrames < 1 || mdc->numFrames > MD3_MAX_FRAMES ) {
		return false;
	}
	if ( mdc->numSurfaces < 0 || mdc->numSurfaces > MD3_MAX_SURFACES ) {
		return false;
	}
	if ( mdc->ofsEnd > fileLength ) {
		return false;
	}

	const int numFrames = mdc->numFrames;

	const mdcSurface_t *surf = (const mdcSurface_t *)( (const byte *)mdc + mdc->ofsSurfaces );
	for ( int i = 0; i < mdc->numSurfaces; i++ ) {
		const byte *surfStart = (const byte *)surf;
		const byte *surfEnd = surfStart + surf->ofsEnd;

		if ( surf->ofsEnd < (int)sizeof( mdcSurface_t ) || surfEnd > (const byte *)mdc + mdc->ofsEnd ) {
			return false;
		}
		if ( surf->numVerts < 0 || surf->numVerts > MD3_MAX_VERTS
			 || surf->numTriangles < 0 || surf->numTriangles > MD3_MAX_TRIANGLES
			 || surf->numShaders < 0 || surf->numShaders > MD3_MAX_SHADERS ) {
			return false;
		}
		if ( surf->numBaseFrames < 0 || surf->numBaseFrames > numFrames
			 || surf->numCompFrames < 0 || surf->numCompFrames > numFrames ) {
			return false;
		}
		if ( surf->ofsXyzNormals + surf->numVerts * surf->numBaseFrames * (int)sizeof( md3XyzNormal_t ) > surf->ofsEnd ) {
			return false;
		}
		if ( surf->ofsXyzCompressed + surf->numVerts * surf->numCompFrames * (int)sizeof( mdcXyzCompressed_t ) > surf->ofsEnd ) {
			return false;
		}
		if ( surf->ofsFrameBaseFrames + numFrames * (int)sizeof( short ) > surf->ofsEnd
			 || surf->ofsFrameCompFrames + numFrames * (int)sizeof( short ) > surf->ofsEnd ) {
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

		mdcRuntimeSurface_t runtime;
		memset( &runtime, 0, sizeof( runtime ) );
		runtime.numVerts = surf->numVerts;
		runtime.numTriangles = surf->numTriangles;
		runtime.numFrames = numFrames;

		runtime.indexes = (triIndex_t *) malloc( surf->numTriangles * 3 * sizeof( triIndex_t ) );
		for ( int j = 0; j < surf->numTriangles; j++ ) {
			runtime.indexes[j * 3 + 0] = triangles[j].indexes[0];
			runtime.indexes[j * 3 + 1] = triangles[j].indexes[1];
			runtime.indexes[j * 3 + 2] = triangles[j].indexes[2];
		}

		const md3St_t *st = (const md3St_t *)( surfStart + surf->ofsSt );
		runtime.texCoords = (idVec2 *) malloc( surf->numVerts * sizeof( idVec2 ) );
		for ( int j = 0; j < surf->numVerts; j++ ) {
			runtime.texCoords[j].x = st[j].st[0];
			runtime.texCoords[j].y = st[j].st[1];
		}

		// keep the shader name for the material resolution at
		// instantiation; the on-disk name is not guaranteed to be null
		// terminated
		if ( surf->numShaders > 0 ) {
			const md3Shader_t *shader = (const md3Shader_t *)( surfStart + surf->ofsShaders );
			char name[65];
			strncpy( name, shader[0].name, 64 );
			name[64] = '\0';
			runtime.shaderName = name;
		}

		const int numVerts = surf->numVerts;
		runtime.xyz = (float *) malloc( (size_t)numFrames * numVerts * 3 * sizeof( float ) );
		runtime.normals = (float *) malloc( (size_t)numFrames * numVerts * 3 * sizeof( float ) );

		const short *frameBaseFrames = (const short *)( surfStart + surf->ofsFrameBaseFrames );
		const short *frameCompFrames = (const short *)( surfStart + surf->ofsFrameCompFrames );
		const md3XyzNormal_t *baseXyz = (const md3XyzNormal_t *)( surfStart + surf->ofsXyzNormals );
		const mdcXyzCompressed_t *compXyz = (const mdcXyzCompressed_t *)( surfStart + surf->ofsXyzCompressed );

		for ( int f = 0; f < numFrames; f++ ) {
			const int baseFrame = frameBaseFrames[f];
			const int compFrame = frameCompFrames[f];
			if ( baseFrame < 0 || baseFrame >= surf->numBaseFrames
				 || compFrame < -1 || compFrame >= surf->numCompFrames ) {
				free( runtime.indexes );
				free( runtime.texCoords );
				free( runtime.xyz );
				free( runtime.normals );
				return false;
			}

			for ( int v = 0; v < numVerts; v++ ) {
				const md3XyzNormal_t &baseVert = baseXyz[baseFrame * numVerts + v];

				float *outXyz = &runtime.xyz[( f * numVerts + v ) * 3];
				float *outNormal = &runtime.normals[( f * numVerts + v ) * 3];

				outXyz[0] = baseVert.xyz[0] * MD3_XYZ_SCALE;
				outXyz[1] = baseVert.xyz[1] * MD3_XYZ_SCALE;
				outXyz[2] = baseVert.xyz[2] * MD3_XYZ_SCALE;

				if ( compFrame >= 0 ) {
					// the compressed frame stores an offset from the base
					// frame and a normal index in the upper byte
					const unsigned int ofsVec = compXyz[compFrame * numVerts + v].ofsVec;

					// the engine macro casts to float before the subtraction,
					// doing it in unsigned arithmetic would wrap around
					outXyz[0] += ( (float)( ofsVec & 255 ) - MDC_MAX_OFS ) * MDC_DIST_SCALE;
					outXyz[1] += ( (float)( ( ofsVec >> 8 ) & 255 ) - MDC_MAX_OFS ) * MDC_DIST_SCALE;
					outXyz[2] += ( (float)( ( ofsVec >> 16 ) & 255 ) - MDC_MAX_OFS ) * MDC_DIST_SCALE;

					outNormal[0] = mdcAnormals[ofsVec >> 24][0];
					outNormal[1] = mdcAnormals[ofsVec >> 24][1];
					outNormal[2] = mdcAnormals[ofsVec >> 24][2];
				} else {
					idVec3 normal;
					R_LatLongToNormal( normal, baseVert.normal );
					outNormal[0] = normal.x;
					outNormal[1] = normal.y;
					outNormal[2] = normal.z;
				}
			}
		}

		out.Append( runtime );

		surf = (const mdcSurface_t *)( surfEnd );
	}
	return true;
}

/*
=================
idRenderModelMDC::InitFromFile

The mdc file is decompressed into per-surface frame arrays at load
time, the raw file copy stays around for the frame bounds.
=================
*/
void idRenderModelMDC::InitFromFile( const char *fileName ) {
	InitEmpty( fileName );

	// throw out any previous load of the file
	free( mdc );
	mdc = NULL;
	FreeRuntimeSurfaces();

	int fileLength = 0;
	byte *buffer = ReadModelFile( fileName, &fileLength );
	if ( buffer == NULL ) {
		idLib::Warning( "idRenderModelMDC::InitFromFile: %s not found or unreadable", fileName );
		MakeDefaultModel();
		return;
	}

	mdc = (mdcHeader_t *)buffer;

	bool ok = mdc->version == MDC_VERSION;
	if ( !ok ) {
		idLib::Warning( "idRenderModelMDC::InitFromFile: %s has wrong version (%i should be %i)",
						fileName, mdc->version, MDC_VERSION );
	} else if ( !LoadMDCSurfaces( mdc, fileLength, mdcSurfaces ) ) {
		idLib::Warning( "idRenderModelMDC::InitFromFile: %s is not a valid mdc file", fileName );
		ok = false;
	}

	if ( !ok ) {
		free( mdc );
		mdc = NULL;
		FreeRuntimeSurfaces();
		MakeDefaultModel();
	}

	// the mdc tags are not ported yet: nothing consumes them until the
	// game side is hooked up with the engine integration phase
}

/*
=================
idRenderModelMDC::IsDynamicModel
=================
*/
dynamicModel_t idRenderModelMDC::IsDynamicModel() const {
	return DM_CACHED;
}

/*
=============
idRenderModelMDC::InstantiateDynamicModel

Builds a fresh static model from the decompressed frames every call;
the frame is driven through the entity shader parms like the md3
adapter does. The vertex normals are lerped and renormalized the way
LerpCMeshVertexes in src/renderer/tr_surface.c does.
=============
*/
idRenderModel *idRenderModelMDC::InstantiateDynamicModel( const struct renderEntity_s *ent, const viewDef_t *view,
														  idRenderModel *cachedModel ) {
	if ( cachedModel != NULL ) {
		delete cachedModel;
		cachedModel = NULL;
	}

	idRenderModelStatic *staticModel = new idRenderModelStatic;
	staticModel->bounds.Clear();

	if ( mdc == NULL || ent == NULL ) {
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
	} else if ( frame >= mdc->numFrames ) {
		frame = mdc->numFrames - 1;
	}
	if ( oldframe < 0 ) {
		oldframe = 0;
	} else if ( oldframe >= mdc->numFrames ) {
		oldframe = mdc->numFrames - 1;
	}
	if ( backlerp < 0.0f ) {
		backlerp = 0.0f;
	} else if ( backlerp > 1.0f ) {
		backlerp = 1.0f;
	}

	for ( int i = 0; i < mdcSurfaces.Num(); i++ ) {
		const mdcRuntimeSurface_t &surface = mdcSurfaces[i];

		modelSurface_t surf;
		surf.id = i;
		// resolve the shader name the load kept on the runtime surface
		// through the material manager; an empty name yields the
		// default material
		surf.shader = materialManager->FindMaterial( surface.shaderName.c_str() );
		surf.geometry = staticModel->AllocSurfaceTriangles( surface.numVerts, surface.numTriangles * 3 );

		srfTriangles_t *tri = surf.geometry;

		for ( int v = 0; v < surface.numVerts; v++ ) {
			idDrawVert *outvert = &tri->verts[tri->numVerts++];

			outvert->Clear();
			outvert->SetNativeOrderColor( 0xFFFFFFFF );

			const float *newXyz = &surface.xyz[( frame * surface.numVerts + v ) * 3];
			const float *newNormal = &surface.normals[( frame * surface.numVerts + v ) * 3];

			if ( backlerp == 0 ) {
				outvert->xyz.x = newXyz[0];
				outvert->xyz.y = newXyz[1];
				outvert->xyz.z = newXyz[2];
				outvert->SetNormal( idVec3( newNormal[0], newNormal[1], newNormal[2] ) );
			} else {
				const float *oldXyz = &surface.xyz[( oldframe * surface.numVerts + v ) * 3];
				const float *oldNormal = &surface.normals[( oldframe * surface.numVerts + v ) * 3];

				outvert->xyz.x = oldXyz[0] * backlerp + newXyz[0] * ( 1.0f - backlerp );
				outvert->xyz.y = oldXyz[1] * backlerp + newXyz[1] * ( 1.0f - backlerp );
				outvert->xyz.z = oldXyz[2] * backlerp + newXyz[2] * ( 1.0f - backlerp );

				idVec3 normal;
				normal.x = oldNormal[0] * backlerp + newNormal[0] * ( 1.0f - backlerp );
				normal.y = oldNormal[1] * backlerp + newNormal[1] * ( 1.0f - backlerp );
				normal.z = oldNormal[2] * backlerp + newNormal[2] * ( 1.0f - backlerp );
				normal.Normalize();
				outvert->SetNormal( normal );
			}

			outvert->SetTexCoord( surface.texCoords[v].x, surface.texCoords[v].y );
		}

		for ( int j = 0; j < surface.numTriangles * 3; j++ ) {
			tri->indexes[j] = surface.indexes[j];
		}
		tri->numIndexes = surface.numTriangles * 3;

		// bounds from the posed vertexes
		tri->bounds.Clear();
		for ( int j = 0; j < tri->numVerts; j++ ) {
			tri->bounds.AddPoint( tri->verts[j].xyz );
		}

		staticModel->AddSurface( surf );
	}

	return staticModel;
}

/*
=====================
idRenderModelMDC::Bounds
=====================
*/
idBounds idRenderModelMDC::Bounds( const struct renderEntity_s *ent ) const {
	idBounds ret;
	ret.Clear();

	if ( ent == NULL || mdc == NULL ) {
		// just give it the editor bounds
		ret.AddPoint( idVec3( -10, -10, -10 ) );
		ret.AddPoint( idVec3( 10, 10, 10 ) );
		return ret;
	}

	int frame = (int)ent->shaderParms[SHADERPARM_MD3_FRAME];
	if ( frame < 0 ) {
		frame = 0;
	} else if ( frame >= mdc->numFrames ) {
		frame = mdc->numFrames - 1;
	}

	const md3Frame_t *frames = (const md3Frame_t *)( (const byte *)mdc + mdc->ofsFrames );
	const md3Frame_t *md3Frame = &frames[frame];

	ret.AddPoint( idVec3( md3Frame->bounds[0][0], md3Frame->bounds[0][1], md3Frame->bounds[0][2] ) );
	ret.AddPoint( idVec3( md3Frame->bounds[1][0], md3Frame->bounds[1][1], md3Frame->bounds[1][2] ) );

	return ret;
}
