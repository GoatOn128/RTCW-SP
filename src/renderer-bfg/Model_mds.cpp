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

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../idlib/precompiled.h"

#include "MaterialManager.h"
#include "Model_mds.h"

// from src/qcommon/q_shared.h of this code base
#define MDS_SHORT2ANGLE( x )    ( ( x ) * ( 360.0f / 65536.0f ) )

/*
===================
MDS_AngleVectors

Ported verbatim from AngleVectors in src/qcommon/q_math.c, with the
engine's angle indexes written out (YAW 0, PITCH 1, ROLL 2).
===================
*/
static void MDS_AngleVectors( const idVec3 &angles, float *forward, float *right, float *up ) {
	float angle;
	float sr, sp, sy, cr, cp, cy;

	angle = angles[0] * ( idMath::PI * 2.0f / 360.0f );
	sy = sin( angle );
	cy = cos( angle );
	angle = angles[1] * ( idMath::PI * 2.0f / 360.0f );
	sp = sin( angle );
	cp = cos( angle );
	angle = angles[2] * ( idMath::PI * 2.0f / 360.0f );
	sr = sin( angle );
	cr = cos( angle );

	if ( forward ) {
		forward[0] = cp * cy;
		forward[1] = cp * sy;
		forward[2] = -sp;
	}
	if ( right ) {
		right[0] = -sr * sp * cy + cr * sy;
		right[1] = -sr * sp * sy - cr * cy;
		right[2] = -sr * cp;
	}
	if ( up ) {
		up[0] = cr * sp * cy + sr * sy;
		up[1] = cr * sp * sy - sr * cy;
		up[2] = cr * cp;
	}
}

/*
===================
MDS_AnglesToAxis

Ported verbatim from AnglesToAxis in src/qcommon/q_math.c
===================
*/
static void MDS_AnglesToAxis( const idVec3 &angles, float axis[3][3] ) {
	float right[3];

	// angle vectors returns "right" instead of "y axis"
	MDS_AngleVectors( angles, axis[0], right, axis[2] );
	axis[1][0] = -right[0];
	axis[1][1] = -right[1];
	axis[1][2] = -right[2];
}

/*
===================
MDS_LocalAngleVector

Ported from LocalAngleVector in src/renderer/tr_animation.c, used for
the bone offset direction
===================
*/
static void MDS_LocalAngleVector( const idVec3 &angles, idVec3 &forward ) {
	const float yawAngle = angles[0] * ( idMath::PI * 2.0f / 360.0f );
	const float pitchAngle = angles[1] * ( idMath::PI * 2.0f / 360.0f );

	const float sy = sin( yawAngle );
	const float cy = cos( yawAngle );
	const float sp = sin( pitchAngle );
	const float cp = cos( pitchAngle );

	forward.x = cp * cy;
	forward.y = cp * sy;
	forward.z = -sp;
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
	if ( length < (int)sizeof( mdsHeader_t ) ) {
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
MDS_ComputeBonePoses

Computes the bone poses of the frame 0 bind pose, following R_CalcBone
in src/renderer/tr_animation.c. The torso blending of the engine is a
no-op at the bind pose, because the torso frame is the frame itself.

The bones must be stored parent first, which every valid mds file is.
===================
*/
static bool MDS_ComputeBonePoses( const mdsHeader_t *mds, const mdsFrame_t *frame,
								  const mdsBoneInfo_t *boneInfo, mdsBonePose_t *bones ) {
	for ( int i = 0; i < mds->numBones; i++ ) {
		const mdsBoneInfo_t *bi = &boneInfo[i];
		if ( bi->parent >= i ) {
			// a bone may only reference an earlier bone as its parent
			return false;
		}

		mdsBonePose_t *bone = &bones[i];

		// rotation
		idVec3 angles;
		angles.x = MDS_SHORT2ANGLE( frame->bones[i].angles[0] );
		angles.y = MDS_SHORT2ANGLE( frame->bones[i].angles[1] );
		angles.z = MDS_SHORT2ANGLE( frame->bones[i].angles[2] );
		MDS_AnglesToAxis( angles, bone->matrix );

		// translation
		if ( bi->parent >= 0 ) {
			// head from the parent towards this bone by parentDist
			idVec3 ofsAngles;
			ofsAngles.x = MDS_SHORT2ANGLE( frame->bones[i].ofsAngles[0] );
			ofsAngles.y = MDS_SHORT2ANGLE( frame->bones[i].ofsAngles[1] );
			ofsAngles.z = 0.0f;
			idVec3 vec;
			MDS_LocalAngleVector( ofsAngles, vec );
			bone->translation = bones[bi->parent].translation + vec * bi->parentDist;
		} else {
			// just use the frame position
			bone->translation = idVec3( frame->parentOffset[0], frame->parentOffset[1], frame->parentOffset[2] );
		}
	}
	return true;
}

/*
===================
idRenderModelMDS::idRenderModelMDS
===================
*/
idRenderModelMDS::idRenderModelMDS() {
	mds = NULL;
}

/*
===================
idRenderModelMDS::~idRenderModelMDS
===================
*/
idRenderModelMDS::~idRenderModelMDS() {
	free( mds );
	mds = NULL;
}

/*
=================
idRenderModelMDS::InitFromFile

Loads the skeletal model and bakes the frame 0 bind pose into static
surfaces, so the frontend can draw it without the skeletal animation.
The bone transforms follow R_CalcBone and the vertex skinning follows
RB_SurfaceAnim in the src/renderer code of this code base.
=================
*/
void idRenderModelMDS::InitFromFile( const char *fileName ) {
	InitEmpty( fileName );

	// throw out any previous load of the file
	free( mds );
	mds = NULL;

	int fileLength = 0;
	byte *buffer = ReadModelFile( fileName, &fileLength );
	if ( buffer == NULL ) {
		idLib::Warning( "idRenderModelMDS::InitFromFile: %s not found or unreadable", fileName );
		MakeDefaultModel();
		return;
	}

	mds = (mdsHeader_t *)buffer;

	bool ok = mds->version == MDS_VERSION;
	if ( !ok ) {
		idLib::Warning( "idRenderModelMDS::InitFromFile: %s has wrong version (%i should be %i)",
						fileName, mds->version, MDS_VERSION );
	} else if ( mds->numFrames < 1 || mds->numBones < 1 || mds->numBones > MDS_MAX_BONES
				|| mds->numSurfaces < 0 || mds->numSurfaces > MDS_MAX_SURFACES
				|| mds->ofsEnd > fileLength ) {
		ok = false;
	}

	mdsBonePose_t *bones = NULL;

	if ( ok ) {
		// the frames carry numBones compressed bones each
		const int frameSize = (int)sizeof( mdsFrame_t ) - (int)sizeof( mdsBoneFrameCompressed_t )
							  + mds->numBones * (int)sizeof( mdsBoneFrameCompressed_t );
		if ( mds->ofsFrames + frameSize > mds->ofsEnd
			 || mds->ofsBones + mds->numBones * (int)sizeof( mdsBoneInfo_t ) > mds->ofsEnd ) {
			ok = false;
		} else {
			const mdsFrame_t *frame = (const mdsFrame_t *)( (const byte *)mds + mds->ofsFrames );
			const mdsBoneInfo_t *boneInfo = (const mdsBoneInfo_t *)( (const byte *)mds + mds->ofsBones );

			bones = new mdsBonePose_t[mds->numBones];
			if ( !MDS_ComputeBonePoses( mds, frame, boneInfo, bones ) ) {
				idLib::Warning( "idRenderModelMDS::InitFromFile: %s has an invalid bone hierarchy", fileName );
				ok = false;
			}
		}
	}

	if ( ok ) {
		const mdsSurface_t *surf = (const mdsSurface_t *)( (const byte *)mds + mds->ofsSurfaces );
		for ( int i = 0; i < mds->numSurfaces && ok; i++ ) {
			const byte *surfStart = (const byte *)surf;

			if ( surf->ofsEnd < (int)sizeof( mdsSurface_t )
				 || surfStart + surf->ofsEnd > (const byte *)mds + mds->ofsEnd
				 || surf->numVerts < 0 || surf->numVerts > MDS_MAX_VERTS
				 || surf->numTriangles < 0 || surf->numTriangles > MDS_MAX_TRIANGLES ) {
				ok = false;
				break;
			}

			modelSurface_t modelSurf;
			modelSurf.id = i;
			// the shader name is stored inline on the on-disk surface and
			// is not guaranteed to be null terminated; an mds surface
			// carries no lightmap, so the name lookup has no lightmap
			// index
			char shaderName[65];
			strncpy( shaderName, surf->shader, 64 );
			shaderName[64] = '\0';
			modelSurf.shader = materialManager->FindMaterial( shaderName );
			modelSurf.geometry = AllocSurfaceTriangles( surf->numVerts, surf->numTriangles * 3 );

			srfTriangles_t *tri = modelSurf.geometry;

			// deform the vertexes by the bind pose bones
			const mdsVertex_t *v = (const mdsVertex_t *)( surfStart + surf->ofsVerts );
			const byte *vertsEnd = surfStart + surf->ofsEnd;
			for ( int j = 0; j < surf->numVerts; j++ ) {
				const byte *vertStart = (const byte *)v;
				// the vertex is variable sized, it ends after its weights
				const byte *vertEnd = vertStart + sizeof( mdsVertex_t ) + ( v->numWeights - 1 ) * (int)sizeof( mdsWeight_t );
				if ( v->numWeights < 1 || v->numWeights > 128 || vertEnd > vertsEnd ) {
					ok = false;
					break;
				}

				idDrawVert *outvert = &tri->verts[tri->numVerts++];

				idVec3 pos( 0.0f, 0.0f, 0.0f );
				for ( int k = 0; k < v->numWeights; k++ ) {
					const mdsWeight_t *w = &v->weights[k];
					if ( w->boneIndex < 0 || w->boneIndex >= mds->numBones ) {
						ok = false;
						break;
					}
					const mdsBonePose_t *bone = &bones[w->boneIndex];
					const idVec3 offset( w->offset[0], w->offset[1], w->offset[2] );

					idVec3 transformed;
					for ( int r = 0; r < 3; r++ ) {
						transformed[r] = bone->matrix[r][0] * offset[0]
										 + bone->matrix[r][1] * offset[1]
										 + bone->matrix[r][2] * offset[2];
					}
					transformed += bone->translation;
					pos += transformed * w->boneWeight;
				}
				if ( !ok ) {
					break;
				}

				outvert->Clear();
				outvert->SetNativeOrderColor( 0xFFFFFFFF );
				outvert->xyz = pos;
				outvert->SetTexCoord( v->texCoords[0], v->texCoords[1] );

				// the normal goes through the bone of the first weight,
				// like RB_SurfaceAnim does
				const mdsBonePose_t *normalBone = &bones[v->weights[0].boneIndex];
				idVec3 normal;
				for ( int r = 0; r < 3; r++ ) {
					normal[r] = normalBone->matrix[r][0] * v->normal[0]
								+ normalBone->matrix[r][1] * v->normal[1]
								+ normalBone->matrix[r][2] * v->normal[2];
				}
				outvert->SetNormal( normal );

				// the next vertex follows the weights
				v = (const mdsVertex_t *)vertEnd;
			}

			if ( ok ) {
				const mdsTriangle_t *triangles = (const mdsTriangle_t *)( surfStart + surf->ofsTriangles );
				for ( int j = 0; j < surf->numTriangles; j++ ) {
					for ( int k = 0; k < 3; k++ ) {
						if ( triangles[j].indexes[k] < 0 || triangles[j].indexes[k] >= surf->numVerts ) {
							ok = false;
							break;
						}
					}
					if ( !ok ) {
						break;
					}
					tri->indexes[j * 3 + 0] = triangles[j].indexes[0];
					tri->indexes[j * 3 + 1] = triangles[j].indexes[1];
					tri->indexes[j * 3 + 2] = triangles[j].indexes[2];
				}
			}

			if ( ok ) {
				tri->numIndexes = surf->numTriangles * 3;
				AddSurface( modelSurf );
				// find the next surface
				surf = (const mdsSurface_t *)( surfStart + surf->ofsEnd );
			} else {
				// free the partially built surface
				FreeSurfaceTriangles( modelSurf.geometry );
			}
		}
	}

	delete[] bones;

	if ( !ok ) {
		idLib::Warning( "idRenderModelMDS::InitFromFile: %s is not a valid mds file", fileName );
		free( mds );
		mds = NULL;
		MakeDefaultModel();
		return;
	}

	// the surface bounds and the model bounds come from the bind pose
	FinishSurfaces();

	// the mds tags and the LOD collapse maps are not ported yet: nothing
	// consumes them until the game side is hooked up with the engine
	// integration phase
}

/*
=================
idRenderModelMDS::IsDynamicModel
=================
*/
dynamicModel_t idRenderModelMDS::IsDynamicModel() const {
	// the skeletal animation is not hooked up yet, the load bakes the
	// bind pose, so the model behaves like a static model until the
	// engine integration drives the frames
	return DM_STATIC;
}

/*
=============
idRenderModelMDS::InstantiateDynamicModel

Static models are drawn directly, the frontend never instantiates them.
=============
*/
idRenderModel *idRenderModelMDS::InstantiateDynamicModel( const struct renderEntity_s *ent, const viewDef_t *view,
														  idRenderModel *cachedModel ) {
	return this;
}
