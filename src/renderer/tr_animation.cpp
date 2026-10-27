/*
===========================================================================

Return to Castle Wolfenstein single player GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company. 

This file is part of the Return to Castle Wolfenstein single player GPL Source Code (RTCW SP Source Code).  

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


#include "tr_local.h"

/*

All bones should be an identity orientation to display the mesh exactly
as it is specified.

For all other frames, the bones represent the transformation from the
orientation of the bone in the base frame to the orientation in this
frame.

*/

//#define DBG_PROFILE_BONES

//-----------------------------------------------------------------------------
// Static Vars, ugly but easiest (and fastest) means of seperating RB_SurfaceAnim
// and R_CalcBones

static int             *triangles, *boneRefs;
static glIndex_t       *pIndexes;
static int indexes;
static int baseIndex, baseVertex, oldIndexes;
static skelVertex_t     *v;
static skelBoneFrame_t bones[SKEL_MAX_BONES], oldBones[SKEL_MAX_BONES];
static char validBones[SKEL_MAX_BONES];
static char newBones[ SKEL_MAX_BONES ];
static skelBoneFrame_t  *bonePtr, *bone;
static skelBoneInfo_t   *boneInfo, *thisBoneInfo;
static skelFrame_t      *frame, *torsoFrame;
static skelFrame_t      *oldFrame, *oldTorsoFrame;
static vec3_t torsoParentOffset, torsoAxis[3], tmpAxis[3];
static float           *tempVert, *tempNormal;
static vec3_t vec;
static int render_count;
static vec4_t m1[4], m2[4];
//static  vec4_t m3[4], m4[4], tmp1[4], tmp2[4]; // TTimo: unused
static vec3_t t;

static int totalrv, totalrt, totalv, totalt;    //----(SA)

//-----------------------------------------------------------------------------

static int R_CullModel( skelHeader_t *header, trRefEntity_t *ent ) {
	vec3_t bounds[2];
	skelFrame_t  *oldFrame, *newFrame;
	int i, frameSize;
	qboolean cullSphere;
	float radScale;

	cullSphere = qtrue;

	frameSize = (int) ( sizeof( skelFrame_t ) - sizeof( skelPose_t ) + header->numBones * sizeof( skelPose_t ) );

	// compute frame pointers
	newFrame = ( skelFrame_t * )( ( byte * ) header + header->ofsFrames + ent->e.frame * frameSize );
	oldFrame = ( skelFrame_t * )( ( byte * ) header + header->ofsFrames + ent->e.oldframe * frameSize );

	radScale = 1.0f;

	if ( ent->e.nonNormalizedAxes ) {
		cullSphere = qfalse;    // by defalut, cull bounding sphere ONLY if this is not an upscaled entity

		// but allow the radius to be scaled if specified
//		if(ent->e.reFlags & REFLAG_SCALEDSPHERECULL) {
//			cullSphere = qtrue;
//			radScale = ent->e.radius;
//		}
	}

	if ( cullSphere ) {
		if ( ent->e.frame == ent->e.oldframe ) {
			switch ( R_CullLocalPointAndRadius( newFrame->localOrigin, newFrame->radius * radScale ) )
			{
			case CULL_OUT:
				tr.pc.c_sphere_cull_md3_out++;
				return CULL_OUT;

			case CULL_IN:
				tr.pc.c_sphere_cull_md3_in++;
				return CULL_IN;

			case CULL_CLIP:
				tr.pc.c_sphere_cull_md3_clip++;
				break;
			}
		} else
		{
			int sphereCull, sphereCullB;

			sphereCull  = R_CullLocalPointAndRadius( newFrame->localOrigin, newFrame->radius * radScale );
			if ( newFrame == oldFrame ) {
				sphereCullB = sphereCull;
			} else {
				sphereCullB = R_CullLocalPointAndRadius( oldFrame->localOrigin, oldFrame->radius * radScale );
			}

			if ( sphereCull == sphereCullB ) {
				if ( sphereCull == CULL_OUT ) {
					tr.pc.c_sphere_cull_md3_out++;
					return CULL_OUT;
				} else if ( sphereCull == CULL_IN )   {
					tr.pc.c_sphere_cull_md3_in++;
					return CULL_IN;
				} else
				{
					tr.pc.c_sphere_cull_md3_clip++;
				}
			}
		}
	}

	// calculate a bounding box in the current coordinate system
	for ( i = 0 ; i < 3 ; i++ ) {
		bounds[0][i] = oldFrame->bounds[0][i] < newFrame->bounds[0][i] ? oldFrame->bounds[0][i] : newFrame->bounds[0][i];
		bounds[1][i] = oldFrame->bounds[1][i] > newFrame->bounds[1][i] ? oldFrame->bounds[1][i] : newFrame->bounds[1][i];

		bounds[0][i] *= radScale;   //----(SA)	added
		bounds[1][i] *= radScale;   //----(SA)	added
	}

	switch ( R_CullLocalBox( bounds ) )
	{
	case CULL_IN:
		tr.pc.c_box_cull_md3_in++;
		return CULL_IN;
	case CULL_CLIP:
		tr.pc.c_box_cull_md3_clip++;
		return CULL_CLIP;
	case CULL_OUT:
	default:
		tr.pc.c_box_cull_md3_out++;
		return CULL_OUT;
	}
}

/*
=================
R_ComputeFogNum

=================
*/
static int R_ComputeFogNum( skelHeader_t *header, trRefEntity_t *ent ) {
	int i, j;
	fog_t           *fog;
	skelFrame_t      *skelFrame;
	vec3_t localOrigin;

	if ( tr.refdef.rdflags & RDF_NOWORLDMODEL ) {
		return 0;
	}

	// FIXME: non-normalized axis issues
	skelFrame = ( skelFrame_t * )( ( byte * ) header + header->ofsFrames + ( sizeof( skelFrame_t ) + sizeof( skelPose_t ) * ( header->numBones - 1 ) ) * ent->e.frame );
	VectorAdd( ent->e.origin, skelFrame->localOrigin, localOrigin );
	for ( i = 1 ; i < tr.world->numfogs ; i++ ) {
		fog = &tr.world->fogs[i];
		for ( j = 0 ; j < 3 ; j++ ) {
			if ( localOrigin[j] - skelFrame->radius >= fog->bounds[1][j] ) {
				break;
			}
			if ( localOrigin[j] + skelFrame->radius <= fog->bounds[0][j] ) {
				break;
			}
		}
		if ( j == 3 ) {
			return i;
		}
	}

	return 0;
}

/*
==============
R_AddAnimSurfaces
==============
*/
void R_AddAnimSurfaces( trRefEntity_t *ent ) {
	skelHeader_t     *header;
	skelSurface_t    *surface;
	shader_t        *shader = 0;
	int i, fogNum, cull;
	qboolean personalModel;

	// don't add third_person objects if not in a portal
	personalModel = ( ent->e.renderfx & RF_THIRD_PERSON ) && !tr.viewParms.isPortal;

	header = tr.currentModel->md5;
    int *frames[] = {&ent->e.frame, &ent->e.oldframe, &ent->e.torsoFrame, &ent->e.oldTorsoFrame};
    for(int i=0;i<4;++i) {
        if(ent->e.renderfx & RF_WRAP_FRAMES) *frames[i] %= header->numFrames;
        if(*frames[i]<0 || *frames[i]>=header->numFrames) *frames[i]=0;
    }


	//
	// cull the entire model if merged bounding box of both frames
	// is outside the view frustum.
	//
	cull = R_CullModel( header, ent );
	if ( cull == CULL_OUT ) {
		return;
	}

	//
	// set up lighting now that we know we aren't culled
	//
	if ( !personalModel || r_shadows->integer > 1 ) {
		R_SetupEntityLighting( &tr.refdef, ent );
	}

	//
	// see if we are in a fog volume
	//
	fogNum = R_ComputeFogNum( header, ent );

	surface = ( skelSurface_t * )( (byte *)header + header->ofsSurfaces );
	for ( i = 0 ; i < header->numSurfaces ; i++ ) {
		int j;

//----(SA)	blink will change to be an overlay rather than replacing the head texture.
//		think of it like batman's mask.  the polygons that have eye texture are duplicated
//		and the 'lids' rendered with polygonoffset over the top of the open eyes.  this gives
//		minimal overdraw/alpha blending/texture use without breaking the model and causing seams
		if ( !Q_stricmp( surface->name, "h_blink" ) ) {
			if ( !( ent->e.renderfx & RF_BLINK ) ) {
				surface = ( skelSurface_t * )( (byte *)surface + surface->ofsEnd );
				continue;
			}
		}
//----(SA)	end


		if ( ent->e.customShader ) {
			shader = R_GetShaderByHandle( ent->e.customShader );
		} else if ( ent->e.customSkin > 0 && ent->e.customSkin < tr.numSkins ) {
			skin_t *skin;

			skin = R_GetSkinByHandle( ent->e.customSkin );

			// match the surface name to something in the skin file
			shader = tr.defaultShader;
			for ( j = 0 ; j < skin->numSurfaces ; j++ ) {
				// the names have both been lowercased
				if ( !strcmp( skin->surfaces[j]->name, surface->name ) ) {
					shader = skin->surfaces[j]->shader;
					break;
				}
			}

			if ( shader == tr.defaultShader ) {
				ri.Printf( PRINT_DEVELOPER, "WARNING: no shader for surface %s in skin %s\n", surface->name, skin->name );
			} else if ( shader->defaultShader )     {
				ri.Printf( PRINT_DEVELOPER, "WARNING: shader %s in skin %s not found\n", shader->name, skin->name );
			}
		} else {
			shader = R_GetShaderByHandle( surface->shaderIndex );
		}

		// don't add third_person objects if not viewing through a portal
		if ( !personalModel ) {
			// GR - always tessellate these objects
			R_AddDrawSurf( (surfaceType_t *)surface, shader, fogNum, qfalse, ATI_TESS_TRUFORM );
		}

		surface = ( skelSurface_t * )( (byte *)surface + surface->ofsEnd );
	}
}

__inline void LocalMatrixTransformVector( vec3_t in, vec3_t mat[ 3 ], vec3_t out ) {
	out[ 0 ] = in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ];
	out[ 1 ] = in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ];
	out[ 2 ] = in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ];
}

__inline void LocalMatrixTransformVectorTranslate( vec3_t in, vec3_t mat[ 3 ], vec3_t tr, vec3_t out ) {
	out[ 0 ] = in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] + tr[ 0 ];
	out[ 1 ] = in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] + tr[ 1 ];
	out[ 2 ] = in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] + tr[ 2 ];
}

__inline void LocalScaledMatrixTransformVector( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t out ) {
	out[ 0 ] = ( 1.0f - s ) * in[ 0 ] + s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] );
	out[ 1 ] = ( 1.0f - s ) * in[ 1 ] + s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] );
	out[ 2 ] = ( 1.0f - s ) * in[ 2 ] + s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] );
}

__inline void LocalScaledMatrixTransformVectorTranslate( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t tr, vec3_t out ) {
	out[ 0 ] = ( 1.0f - s ) * in[ 0 ] + s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] + tr[ 0 ] );
	out[ 1 ] = ( 1.0f - s ) * in[ 1 ] + s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] + tr[ 1 ] );
	out[ 2 ] = ( 1.0f - s ) * in[ 2 ] + s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] + tr[ 2 ] );
}

__inline void LocalScaledMatrixTransformVectorFullTranslate( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t tr, vec3_t out ) {
	out[ 0 ] = ( 1.0f - s ) * in[ 0 ] + s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] ) + tr[ 0 ];
	out[ 1 ] = ( 1.0f - s ) * in[ 1 ] + s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] ) + tr[ 1 ];
	out[ 2 ] = ( 1.0f - s ) * in[ 2 ] + s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] ) + tr[ 2 ];
}

__inline void LocalAddScaledMatrixTransformVectorFullTranslate( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t tr, vec3_t out ) {
	out[ 0 ] += s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] ) + tr[ 0 ];
	out[ 1 ] += s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] ) + tr[ 1 ];
	out[ 2 ] += s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] ) + tr[ 2 ];
}

__inline void LocalAddScaledMatrixTransformVectorTranslate( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t tr, vec3_t out ) {
	out[ 0 ] += s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] + tr[ 0 ] );
	out[ 1 ] += s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] + tr[ 1 ] );
	out[ 2 ] += s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] + tr[ 2 ] );
}

__inline void LocalAddScaledMatrixTransformVector( vec3_t in, float s, vec3_t mat[ 3 ], vec3_t out ) {
	out[ 0 ] += s * ( in[ 0 ] * mat[ 0 ][ 0 ] + in[ 1 ] * mat[ 0 ][ 1 ] + in[ 2 ] * mat[ 0 ][ 2 ] );
	out[ 1 ] += s * ( in[ 0 ] * mat[ 1 ][ 0 ] + in[ 1 ] * mat[ 1 ][ 1 ] + in[ 2 ] * mat[ 1 ][ 2 ] );
	out[ 2 ] += s * ( in[ 0 ] * mat[ 2 ][ 0 ] + in[ 1 ] * mat[ 2 ][ 1 ] + in[ 2 ] * mat[ 2 ][ 2 ] );
}

static float LAVangle;
//static float		sr; // TTimo: unused
static float sp, sy;
//static float    cr; // TTimo: unused
static float cp, cy;

__inline void LocalAngleVector( vec3_t angles, vec3_t forward ) {
	LAVangle = angles[YAW] * ( M_PI * 2 / 360 );
	sy = sin( LAVangle );
	cy = cos( LAVangle );
	LAVangle = angles[PITCH] * ( M_PI * 2 / 360 );
	sp = sin( LAVangle );
	cp = cos( LAVangle );

	forward[0] = cp * cy;
	forward[1] = cp * sy;
	forward[2] = -sp;
}

__inline void LocalVectorMA( vec3_t org, float dist, vec3_t vec, vec3_t out ) {
	out[0] = org[0] + dist * vec[0];
	out[1] = org[1] + dist * vec[1];
	out[2] = org[2] + dist * vec[2];
}

#define ANGLES_SHORT_TO_FLOAT( pf, sh )     { *( pf++ ) = SHORT2ANGLE( *( sh++ ) ); *( pf++ ) = SHORT2ANGLE( *( sh++ ) ); *( pf++ ) = SHORT2ANGLE( *( sh++ ) ); }

__inline void SLerp_Normal( vec3_t from, vec3_t to, float tt, vec3_t out ) {
	float ft = 1.0 - tt;

	out[0] = from[0] * ft + to[0] * tt;
	out[1] = from[1] * ft + to[1] * tt;
	out[2] = from[2] * ft + to[2] * tt;

	VectorNormalize( out );
}

/*
===============================================================================

4x4 Matrices

===============================================================================
*/

__inline void Matrix4Multiply( const vec4_t a[4], const vec4_t b[4], vec4_t dst[4] ) {
	dst[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0] + a[0][3] * b[3][0];
	dst[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1] + a[0][3] * b[3][1];
	dst[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2] + a[0][3] * b[3][2];
	dst[0][3] = a[0][0] * b[0][3] + a[0][1] * b[1][3] + a[0][2] * b[2][3] + a[0][3] * b[3][3];

	dst[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0] + a[1][3] * b[3][0];
	dst[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1] + a[1][3] * b[3][1];
	dst[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2] + a[1][3] * b[3][2];
	dst[1][3] = a[1][0] * b[0][3] + a[1][1] * b[1][3] + a[1][2] * b[2][3] + a[1][3] * b[3][3];

	dst[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0] + a[2][3] * b[3][0];
	dst[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1] + a[2][3] * b[3][1];
	dst[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2] + a[2][3] * b[3][2];
	dst[2][3] = a[2][0] * b[0][3] + a[2][1] * b[1][3] + a[2][2] * b[2][3] + a[2][3] * b[3][3];

	dst[3][0] = a[3][0] * b[0][0] + a[3][1] * b[1][0] + a[3][2] * b[2][0] + a[3][3] * b[3][0];
	dst[3][1] = a[3][0] * b[0][1] + a[3][1] * b[1][1] + a[3][2] * b[2][1] + a[3][3] * b[3][1];
	dst[3][2] = a[3][0] * b[0][2] + a[3][1] * b[1][2] + a[3][2] * b[2][2] + a[3][3] * b[3][2];
	dst[3][3] = a[3][0] * b[0][3] + a[3][1] * b[1][3] + a[3][2] * b[2][3] + a[3][3] * b[3][3];
}

// TTimo: const vec_t ** would require explicit casts for ANSI C conformance
// see unix/const-arg.c in Wolf MP source
__inline void Matrix4MultiplyInto3x3AndTranslation( /*const*/ vec4_t a[4], /*const*/ vec4_t b[4], vec3_t dst[3], vec3_t t ) {
	dst[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0] + a[0][3] * b[3][0];
	dst[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1] + a[0][3] * b[3][1];
	dst[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2] + a[0][3] * b[3][2];
	t[0]      = a[0][0] * b[0][3] + a[0][1] * b[1][3] + a[0][2] * b[2][3] + a[0][3] * b[3][3];

	dst[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0] + a[1][3] * b[3][0];
	dst[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1] + a[1][3] * b[3][1];
	dst[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2] + a[1][3] * b[3][2];
	t[1]      = a[1][0] * b[0][3] + a[1][1] * b[1][3] + a[1][2] * b[2][3] + a[1][3] * b[3][3];

	dst[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0] + a[2][3] * b[3][0];
	dst[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1] + a[2][3] * b[3][1];
	dst[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2] + a[2][3] * b[3][2];
	t[2]      = a[2][0] * b[0][3] + a[2][1] * b[1][3] + a[2][2] * b[2][3] + a[2][3] * b[3][3];
}

__inline void Matrix4Transpose( const vec4_t matrix[4], vec4_t transpose[4] ) {
	int i, j;
	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 4; j++ ) {
			transpose[i][j] = matrix[j][i];
		}
	}
}

__inline void Matrix4FromAxis( const vec3_t axis[3], vec4_t dst[4] ) {
	int i, j;
	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			dst[i][j] = axis[i][j];
		}
		dst[3][i] = 0;
		dst[i][3] = 0;
	}
	dst[3][3] = 1;
}

__inline void Matrix4FromScaledAxis( const vec3_t axis[3], const float scale, vec4_t dst[4] ) {
	int i, j;

	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			dst[i][j] = scale * axis[i][j];
			if ( i == j ) {
				dst[i][j] += 1.0f - scale;
			}
		}
		dst[3][i] = 0;
		dst[i][3] = 0;
	}
	dst[3][3] = 1;
}

__inline void Matrix4FromTranslation( const vec3_t t, vec4_t dst[4] ) {
	int i, j;

	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			if ( i == j ) {
				dst[i][j] = 1;
			} else {
				dst[i][j] = 0;
			}
		}
		dst[i][3] = t[i];
		dst[3][i] = 0;
	}
	dst[3][3] = 1;
}

// can put an axis rotation followed by a translation directly into one matrix
// TTimo: const vec_t ** would require explicit casts for ANSI C conformance
// see unix/const-arg.c in Wolf MP source
__inline void Matrix4FromAxisPlusTranslation( /*const*/ vec3_t axis[3], const vec3_t t, vec4_t dst[4] ) {
	int i, j;
	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			dst[i][j] = axis[i][j];
		}
		dst[3][i] = 0;
		dst[i][3] = t[i];
	}
	dst[3][3] = 1;
}

// can put a scaled axis rotation followed by a translation directly into one matrix
// TTimo: const vec_t ** would require explicit casts for ANSI C conformance
// see unix/const-arg.c in Wolf MP source
__inline void Matrix4FromScaledAxisPlusTranslation( /*const*/ vec3_t axis[3], const float scale, const vec3_t t, vec4_t dst[4] ) {
	int i, j;

	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			dst[i][j] = scale * axis[i][j];
			if ( i == j ) {
				dst[i][j] += 1.0f - scale;
			}
		}
		dst[3][i] = 0;
		dst[i][3] = t[i];
	}
	dst[3][3] = 1;
}

__inline void Matrix4FromScale( const float scale, vec4_t dst[4] ) {
	int i, j;

	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 4; j++ ) {
			if ( i == j ) {
				dst[i][j] = scale;
			} else {
				dst[i][j] = 0;
			}
		}
	}
	dst[3][3] = 1;
}

__inline void Matrix4TransformVector( const vec4_t m[4], const vec3_t src, vec3_t dst ) {
	dst[0] = m[0][0] * src[0] + m[0][1] * src[1] + m[0][2] * src[2] + m[0][3];
	dst[1] = m[1][0] * src[0] + m[1][1] * src[1] + m[1][2] * src[2] + m[1][3];
	dst[2] = m[2][0] * src[0] + m[2][1] * src[1] + m[2][2] * src[2] + m[2][3];
}

/*
===============================================================================

3x3 Matrices

===============================================================================
*/

__inline void Matrix3Transpose( const vec3_t matrix[3], vec3_t transpose[3] ) {
	int i, j;
	for ( i = 0; i < 3; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			transpose[i][j] = matrix[j][i];
		}
	}
}


/*
==============
R_CalcBone
==============
*/
static skelFrame_t *MD5Frame(skelHeader_t *header, int index) {
    if (index < 0 || index >= header->numFrames) index = 0;
    int stride = sizeof(skelFrame_t) + (header->numBones-1)*sizeof(skelPose_t);
    return (skelFrame_t *)((byte *)header + header->ofsFrames + index*stride);
}

// Blend displacement directions separately from lengths, keeping limbs from
// shrinking during frame interpolation or independent torso animation.
static void BlendOffset(const vec3_t a, const vec3_t b, float fraction, vec3_t out) {
    vec3_t na, nb;
    VectorCopy(a, na); VectorCopy(b, nb);
    float la=VectorNormalize(na), lb=VectorNormalize(nb);
    for(int k=0;k<3;++k) out[k]=(1-fraction)*na[k]+fraction*nb[k];
    float length=VectorNormalize(out);
    if(length>0) VectorScale(out, (1-fraction)*la+fraction*lb, out);
}

void R_CalcBones(skelHeader_t *header, const refEntity_t *refent, int *boneList, int numBones) {
    static const skelHeader_t *cachedHeader = NULL;
    static refEntity_t cachedEntity;
    static int cachedRenderFrame = -1;
    int i;
    float torsoWeight;
    frame=MD5Frame(header,refent->frame);
    oldFrame=MD5Frame(header,refent->oldframe);
    torsoFrame=MD5Frame(header,refent->torsoFrame);
    oldTorsoFrame=MD5Frame(header,refent->oldTorsoFrame);
    // Foot-tag sampling uses identical frames to measure animation movement.
    // As in the original skeletal renderer, ignore interpolation in that case.
    const float backlerp = frame == oldFrame ? 0.0f : refent->backlerp;
    const float torsoBacklerp = torsoFrame == oldTorsoFrame ? 0.0f : refent->torsoBacklerp;
    if(cachedHeader==header && cachedRenderFrame==tr.frameCount &&
       !memcmp(&cachedEntity,refent,sizeof(*refent))) return;
    boneInfo=(skelBoneInfo_t *)((byte *)header+header->ofsBones);
    Matrix3Transpose(refent->torsoAxis,torsoAxis);
    // Calculate every joint in hierarchy order. Attachment queries and surfaces
    // share exactly the same pose, independent of the order they are submitted.
    for(i=0;i<header->numBones;++i) {
        vec4_t legs, torso, rotation;
        R_MD5BlendQuat(frame->bones[i].rotation,oldFrame->bones[i].rotation,backlerp,legs);
        R_MD5BlendQuat(torsoFrame->bones[i].rotation,oldTorsoFrame->bones[i].rotation,torsoBacklerp,torso);
        float weight=boneInfo[i].torsoWeight;
        R_MD5BlendQuat(legs,torso,weight,rotation);
        R_MD5QuatMatrix(rotation,bones[i].matrix);
        int parent=boneInfo[i].parent;
        if(parent<0) {
            for(int k=0;k<3;++k)
                bones[i].translation[k]=(1-backlerp)*frame->bones[i].translation[k]+backlerp*oldFrame->bones[i].translation[k];
        } else {
            vec3_t a,b,c,d,legOffset,torsoOffset,offset;
            VectorSubtract(frame->bones[i].translation,frame->bones[parent].translation,a);
            VectorSubtract(oldFrame->bones[i].translation,oldFrame->bones[parent].translation,b);
            VectorSubtract(torsoFrame->bones[i].translation,torsoFrame->bones[parent].translation,c);
            VectorSubtract(oldTorsoFrame->bones[i].translation,oldTorsoFrame->bones[parent].translation,d);
            BlendOffset(a,b,backlerp,legOffset);
            BlendOffset(c,d,torsoBacklerp,torsoOffset);
            BlendOffset(legOffset,torsoOffset,weight,offset);
            VectorAdd(bones[parent].translation,offset,bones[i].translation);
        }
        validBones[i]=newBones[i]=1;
    }
    VectorCopy(bones[header->torsoParent].translation,torsoParentOffset);
    int allBones[SKEL_MAX_BONES];
    for(i=0;i<header->numBones;++i) allBones[i]=i;
    boneList=allBones;
    numBones=header->numBones;

	// adjust for torso rotations
	torsoWeight = 0;
	boneRefs = boneList;
	for ( i = 0; i < numBones; i++, boneRefs++ ) {

		thisBoneInfo = &boneInfo[ *boneRefs ];
		bonePtr = &bones[ *boneRefs ];
		// add torso rotation
		if ( thisBoneInfo->torsoWeight > 0 ) {

			if ( !newBones[ *boneRefs ] ) {
				// just copy it back from the previous calc
				bones[ *boneRefs ] = oldBones[ *boneRefs ];
				continue;
			}

			if ( !( thisBoneInfo->flags & BONEFLAG_TAG ) ) {

				// 1st multiply with the bone->matrix
				// 2nd translation for rotation relative to bone around torso parent offset
				VectorSubtract( bonePtr->translation, torsoParentOffset, t );
				Matrix4FromAxisPlusTranslation( bonePtr->matrix, t, m1 );
				// 3rd scaled rotation
				// 4th translate back to torso parent offset
				// use previously created matrix if available for the same weight
				if ( torsoWeight != thisBoneInfo->torsoWeight ) {
					Matrix4FromScaledAxisPlusTranslation( torsoAxis, thisBoneInfo->torsoWeight, torsoParentOffset, m2 );
					torsoWeight = thisBoneInfo->torsoWeight;
				}
				// multiply matrices to create one matrix to do all calculations
				Matrix4MultiplyInto3x3AndTranslation( m2, m1, bonePtr->matrix, bonePtr->translation );

			} else {    // tag's require special handling

				// rotate each of the axis by the torsoAngles
				LocalScaledMatrixTransformVector( bonePtr->matrix[0], thisBoneInfo->torsoWeight, torsoAxis, tmpAxis[0] );
				LocalScaledMatrixTransformVector( bonePtr->matrix[1], thisBoneInfo->torsoWeight, torsoAxis, tmpAxis[1] );
				LocalScaledMatrixTransformVector( bonePtr->matrix[2], thisBoneInfo->torsoWeight, torsoAxis, tmpAxis[2] );
				memcpy( bonePtr->matrix, tmpAxis, sizeof( tmpAxis ) );

				// rotate the translation around the torsoParent
				VectorSubtract( bonePtr->translation, torsoParentOffset, t );
				LocalScaledMatrixTransformVector( t, thisBoneInfo->torsoWeight, torsoAxis, bonePtr->translation );
				VectorAdd( bonePtr->translation, torsoParentOffset, bonePtr->translation );

			}
		}
	}

	// backup the final bones
	memcpy( oldBones, bones, sizeof( bones[0] ) * header->numBones );
    cachedHeader=header;
    cachedEntity=*refent;
    cachedRenderFrame=tr.frameCount;
}

#ifdef DBG_PROFILE_BONES
#define DBG_SHOWTIME    Com_Printf( "%i: %i, ", di++, ( dt = ri.Milliseconds() ) - ldt ); ldt = dt;
#else
#define DBG_SHOWTIME    ;
#endif

/*
==============
RB_SurfaceAnim
==============
*/
void RB_SurfaceAnim( skelSurface_t *surface ) {
	int i, j, k;
	refEntity_t *refent;
	int             *boneList;
	skelHeader_t     *header;

#ifdef DBG_PROFILE_BONES
	int di = 0, dt, ldt;

	dt = ri.Milliseconds();
	ldt = dt;
#endif

	refent = &backEnd.currentEntity->e;
	boneList = ( int * )( (byte *)surface + surface->ofsBoneReferences );
	header = ( skelHeader_t * )( (byte *)surface + surface->ofsHeader );

	R_CalcBones( header, (const refEntity_t *)refent, boneList, surface->numBoneReferences );

	DBG_SHOWTIME

    // Standard MD5 meshes render at full detail, including corpses.
    render_count = surface->numVerts;
    RB_CheckOverflow( render_count, surface->numTriangles * 3 );
    triangles = (int *)((byte *)surface + surface->ofsTriangles);
    indexes = surface->numTriangles * 3;
    baseIndex = tess.numIndexes;
    baseVertex = tess.numVertexes;
    oldIndexes = baseIndex;
    tess.numVertexes += render_count;
    for ( int index = 0; index < indexes; ++index ) {
        tess.indexes[tess.numIndexes++] = baseVertex + triangles[index];
    }

	//
	// deform the vertexes by the lerped bones
	//
	v = ( skelVertex_t * )( (byte *)surface + surface->ofsVerts );
	tempVert = ( float * )( tess.xyz + baseVertex );
	tempNormal = ( float * )( tess.normal + baseVertex );
	for ( j = 0; j < render_count; j++, tempVert += 4, tempNormal += 4 ) {
		skelWeight_t *w;

		VectorClear( tempVert );

		w = v->weights;
		for ( k = 0 ; k < v->numWeights ; k++, w++ ) {
			bone = &bones[w->boneIndex];
			LocalAddScaledMatrixTransformVectorTranslate( w->offset, w->boneWeight, bone->matrix, bone->translation, tempVert );
		}
		LocalMatrixTransformVector( v->normal, bones[v->weights[0].boneIndex].matrix, tempNormal );

		tess.texCoords[baseVertex + j][0][0] = v->texCoords[0];
		tess.texCoords[baseVertex + j][0][1] = v->texCoords[1];

		v = (skelVertex_t *)&v->weights[v->numWeights];
	}

	DBG_SHOWTIME

	if ( r_bonesDebug->integer ) {
		if ( r_bonesDebug->integer < 3 ) {
			// DEBUG: show the bones as a stick figure with axis at each bone
			boneRefs = ( int * )( (byte *)surface + surface->ofsBoneReferences );
			for ( i = 0; i < surface->numBoneReferences; i++, boneRefs++ ) {
				bonePtr = &bones[*boneRefs];

				GL_Bind( tr.whiteImage );
				qglLineWidth( 1 );
				qglBegin( GL_LINES );
				for ( j = 0; j < 3; j++ ) {
					VectorClear( vec );
					vec[j] = 1;
					qglColor3fv( vec );
					qglVertex3fv( bonePtr->translation );
					VectorMA( bonePtr->translation, 5, bonePtr->matrix[j], vec );
					qglVertex3fv( vec );
				}
				qglEnd();

				// connect to our parent if it's valid
				if ( boneInfo[*boneRefs].parent >= 0 && validBones[boneInfo[*boneRefs].parent] ) {
					qglLineWidth( 2 );
					qglBegin( GL_LINES );
					qglColor3f( .6,.6,.6 );
					qglVertex3fv( bonePtr->translation );
					qglVertex3fv( bones[boneInfo[*boneRefs].parent].translation );
					qglEnd();
				}

				qglLineWidth( 1 );
			}
		}

		if ( r_bonesDebug->integer == 3 || r_bonesDebug->integer == 4 ) {
			int render_indexes = ( tess.numIndexes - oldIndexes );

			// show mesh edges
			tempVert = ( float * )( tess.xyz + baseVertex );
			tempNormal = ( float * )( tess.normal + baseVertex );

			GL_Bind( tr.whiteImage );
			qglLineWidth( 1 );
			qglBegin( GL_LINES );
			qglColor3f( .0,.0,.8 );

			pIndexes = &tess.indexes[oldIndexes];
			for ( j = 0; j < render_indexes / 3; j++, pIndexes += 3 ) {
				qglVertex3fv( tempVert + 4 * pIndexes[0] );
				qglVertex3fv( tempVert + 4 * pIndexes[1] );

				qglVertex3fv( tempVert + 4 * pIndexes[1] );
				qglVertex3fv( tempVert + 4 * pIndexes[2] );

				qglVertex3fv( tempVert + 4 * pIndexes[2] );
				qglVertex3fv( tempVert + 4 * pIndexes[0] );
			}

			qglEnd();

//----(SA)	track debug stats
			if ( r_bonesDebug->integer == 4 ) {
				totalrv += render_count;
				totalrt += render_indexes / 3;
				totalv += surface->numVerts;
				totalt += surface->numTriangles;
			}
//----(SA)	end

			if ( r_bonesDebug->integer == 3 ) {
				ri.Printf( PRINT_ALL, "Lod %.2f  verts %4d/%4d  tris %4d/%4d  (%.2f%%)\n", 1.0f, render_count, surface->numVerts, render_indexes / 3, surface->numTriangles,
						   ( float )( 100.0 * render_indexes / 3 ) / (float) surface->numTriangles );
			}
		}
	}

	if ( r_bonesDebug->integer > 1 ) {
		// dont draw the actual surface
		tess.numIndexes = oldIndexes;
		tess.numVertexes = baseVertex;
		return;
	}

#ifdef DBG_PROFILE_BONES
	Com_Printf( "\n" );
#endif

}

/*
===============
R_RecursiveBoneListAdd
===============
*/
void R_RecursiveBoneListAdd( int bi, int *boneList, int *numBones, skelBoneInfo_t *boneInfoList ) {

	if ( boneInfoList[ bi ].parent >= 0 ) {

		R_RecursiveBoneListAdd( boneInfoList[ bi ].parent, boneList, numBones, boneInfoList );

	}

	boneList[ ( *numBones )++ ] = bi;

}

/*
===============
R_GetBoneTag
===============
*/
int R_GetBoneTag( orientation_t *outTag, skelHeader_t *skel, int startTagIndex, const refEntity_t *refent, const char *tagName ) {

	int i;
	skelTag_t    *pTag;
	skelBoneInfo_t *boneInfoList;
	int boneList[ SKEL_MAX_BONES ];
	int numBones;

	if ( startTagIndex < 0 || startTagIndex >= skel->numTags ) {
		memset( outTag, 0, sizeof( *outTag ) );
		return -1;
	}

	// find the correct tag

	pTag = ( skelTag_t * )( (byte *)skel + skel->ofsTags );

	pTag += startTagIndex;

	for ( i = startTagIndex; i < skel->numTags; i++, pTag++ ) {
		if ( !strcmp( pTag->name, tagName ) ) {
			break;
		}
	}

	if ( i >= skel->numTags ) {
		memset( outTag, 0, sizeof( *outTag ) );
		return -1;
	}

	// now build the list of bones we need to calc to get this tag's bone information

	boneInfoList = ( skelBoneInfo_t * )( (byte *)skel + skel->ofsBones );
	numBones = 0;

	R_RecursiveBoneListAdd( pTag->boneIndex, boneList, &numBones, boneInfoList );

	// calc the bones

	R_CalcBones( (skelHeader_t *)skel, refent, boneList, numBones );

	// now extract the orientation for the bone that represents our tag

	memcpy( outTag->axis, bones[ pTag->boneIndex ].matrix, sizeof( outTag->axis ) );
	VectorCopy( bones[ pTag->boneIndex ].translation, outTag->origin );

	return i;
}
