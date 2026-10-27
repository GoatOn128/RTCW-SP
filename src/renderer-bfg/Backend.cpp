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

#include "precompiled.h"
#include "Backend.h"
#include "Material.h"
#include "CVarSystem.h"
#include "ImageManager.h"
#include "Image.h"

/*

  The backend state and the GL helpers, ported from
  src/renderer/tr_backend.c of this code base, with the function
  tables of R_Init in src/renderer/tr_init.c and the noise of
  src/renderer/tr_noise.c.

  Nothing calls the GL helpers yet: the module has no live GL
  context until the backend draw phase wires the tesselator and the
  view draw loop into the frame commands. GL_SetDefaultState omits
  the engine's GL_TextureMode pass over all images, because this
  image manager computes the filter per upload, and it omits the ATI
  pn_triangles setup, which the engine gated on hardware extensions
  this renderer does not carry.

*/

// engine tr_init.c: r_nobind = ri.Cvar_Get( "r_nobind", "0", CVAR_CHEAT );
// performance evaluation option
static idCVar r_nobind( "r_nobind", "0", CVAR_RENDERER | CVAR_CHEAT, "performance evaluation: bind the dlight image instead of the shader images" );

// the engine spells the degree conversion of q_shared.h; idlib's
// math/Math.h already carries the DEG2RAD macro, so it is used here

// the dormant backend globals
backEndState_t backEnd;
glstate_t glState;
glconfig_t glConfig;

// the engine's tr.worldEntity until the front end global lands
trRefEntity_t worldEntity;

// the wave form tables of the engine's trGlobals_t
float sinTable[FUNCTABLE_SIZE];
float triangleTable[FUNCTABLE_SIZE];
float squareTable[FUNCTABLE_SIZE];
float sawToothTable[FUNCTABLE_SIZE];
float inverseSawToothTable[FUNCTABLE_SIZE];

/*
=================
R_InitTables

The function table loop of R_Init in src/renderer/tr_init.c.
=================
*/
void R_InitTables( void ) {
	int i;

	for ( i = 0; i < FUNCTABLE_SIZE; i++ )
	{
		sinTable[i]        = sin( DEG2RAD( i * 360.0f / ( ( float ) ( FUNCTABLE_SIZE - 1 ) ) ) );
		squareTable[i]     = ( i < FUNCTABLE_SIZE / 2 ) ? 1.0f : -1.0f;
		sawToothTable[i]   = ( float )i / FUNCTABLE_SIZE;
		inverseSawToothTable[i] = 1.0f - sawToothTable[i];

		if ( i < FUNCTABLE_SIZE / 2 ) {
			if ( i < FUNCTABLE_SIZE / 4 ) {
				triangleTable[i] = ( float )i / ( FUNCTABLE_SIZE / 4 );
			} else
			{
				triangleTable[i] = 1.0f - triangleTable[i - FUNCTABLE_SIZE / 4];
			}
		} else
		{
			triangleTable[i] = -triangleTable[i - FUNCTABLE_SIZE / 2];
		}
	}
}

/*
=================
The noise of src/renderer/tr_noise.c, verbatim
=================
*/
#define NOISE_SIZE 256
#define NOISE_MASK ( NOISE_SIZE - 1 )

#define VAL( a ) s_noise_perm[ ( a ) & ( NOISE_MASK )]
#define INDEX( x, y, z, t ) VAL( x + VAL( y + VAL( z + VAL( t ) ) ) )

static float s_noise_table[NOISE_SIZE];
static int s_noise_perm[NOISE_SIZE];

#define LERP( a, b, w ) ( a * ( 1.0f - w ) + b * w )

static float GetNoiseValue( int x, int y, int z, int t ) {
	int index = INDEX( ( int )x, ( int )y, ( int )z, ( int )t );

	return s_noise_table[index];
}

void R_NoiseInit( void ) {
	int i;

	srand( 1001 );

	for ( i = 0; i < NOISE_SIZE; i++ )
	{
		s_noise_table[i] = ( float )( ( ( rand() / ( float )RAND_MAX ) * 2.0 - 1.0 ) );
		s_noise_perm[i] = ( unsigned char )( rand() / ( float )RAND_MAX * 255 );
	}
}

float R_NoiseGet4f( float x, float y, float z, float t ) {
	int i;
	int ix, iy, iz, it;
	float fx, fy, fz, ft;
	float front[4];
	float back[4];
	float fvalue, bvalue, value[2], finalvalue;

	ix = ( int )floor( x );
	fx = x - ix;
	iy = ( int )floor( y );
	fy = y - iy;
	iz = ( int )floor( z );
	fz = z - iz;
	it = ( int )floor( t );
	ft = t - it;

	for ( i = 0; i < 2; i++ )
	{
		front[0] = GetNoiseValue( ix, iy, iz, it + i );
		front[1] = GetNoiseValue( ix + 1, iy, iz, it + i );
		front[2] = GetNoiseValue( ix, iy + 1, iz, it + i );
		front[3] = GetNoiseValue( ix + 1, iy + 1, iz, it + i );

		back[0] = GetNoiseValue( ix, iy, iz + 1, it + i );
		back[1] = GetNoiseValue( ix + 1, iy, iz + 1, it + i );
		back[2] = GetNoiseValue( ix, iy + 1, iz + 1, it + i );
		back[3] = GetNoiseValue( ix + 1, iy + 1, iz + 1, it + i );

		fvalue = LERP( LERP( front[0], front[1], fx ), LERP( front[2], front[3], fx ), fy );
		bvalue = LERP( LERP( back[0], back[1], fx ), LERP( back[2], back[3], fx ), fy );

		value[i] = LERP( fvalue, bvalue, fz );
	}

	finalvalue = LERP( value[0], value[1], ft );

	return finalvalue;
}

/*
=================
GL_Bind

The engine tracks the frame each image was used in for the texture
usage statistics; the image manager of this module does not track
that yet, so the frame bookkeeping drops out until it does.
=================
*/
void GL_Bind( idImage *image ) {
	GLuint texnum;

	if ( !image ) {
		idLib::Warning( "GL_Bind: NULL image" );
		texnum = imageManager->DefaultImage()->TexNum();
	} else {
		texnum = image->TexNum();
	}

	if ( r_nobind.GetInteger() && imageManager->DlightImage() ) {       // performance evaluation option
		texnum = imageManager->DlightImage()->TexNum();
	}

	if ( glState.currenttextures[glState.currenttmu] != ( int )texnum ) {
		glState.currenttextures[glState.currenttmu] = texnum;
		glBindTexture( GL_TEXTURE_2D, texnum );
	}
}

/*
=================
GL_SelectTexture

The engine logs the GL calls when r_logFile is on; the log comment
drops out with it.
=================
*/
void GL_SelectTexture( int unit ) {
	if ( glState.currenttmu == unit ) {
		return;
	}

	if ( unit == 0 ) {
		glActiveTexture( GL_TEXTURE0 );
		glClientActiveTexture( GL_TEXTURE0 );
	} else if ( unit == 1 ) {
		glActiveTexture( GL_TEXTURE1 );
		glClientActiveTexture( GL_TEXTURE1 );
	} else {
		idLib::Error( "GL_SelectTexture: unit = %i", unit );
	}

	glState.currenttmu = unit;
}

/*
=================
GL_Cull

The cullType values are the cullType_t of Material.h.
=================
*/
void GL_Cull( int cullType ) {
	if ( glState.faceCulling == cullType ) {
		return;
	}

	glState.faceCulling = cullType;

	if ( cullType == CT_TWO_SIDED ) {
		glDisable( GL_CULL_FACE );
	} else
	{
		glEnable( GL_CULL_FACE );

		if ( cullType == CT_BACK_SIDED ) {
			if ( backEnd.viewParms.isMirror ) {
				glCullFace( GL_FRONT );
			} else
			{
				glCullFace( GL_BACK );
			}
		} else
		{
			if ( backEnd.viewParms.isMirror ) {
				glCullFace( GL_BACK );
			} else
			{
				glCullFace( GL_FRONT );
			}
		}
	}
}

/*
=================
GL_TexEnv
=================
*/
void GL_TexEnv( int env ) {
	if ( env == glState.texEnv[glState.currenttmu] ) {
		return;
	}

	glState.texEnv[glState.currenttmu] = env;

	switch ( env )
	{
	case GL_MODULATE:
		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );
		break;
	case GL_REPLACE:
		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE );
		break;
	case GL_DECAL:
		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL );
		break;
	case GL_ADD:
		glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_ADD );
		break;
	default:
		idLib::Error( "GL_TexEnv: invalid env '%d' passed\n", env );
		break;
	}
}

/*
=================
GL_State

This routine is responsible for setting the most commonly changed
state in Q3.
=================
*/
void GL_State( unsigned long stateBits ) {
	unsigned long diff = stateBits ^ glState.glStateBits;

	if ( !diff ) {
		return;
	}

	//
	// check depthFunc bits
	//
	if ( diff & GLS_DEPTHFUNC_EQUAL ) {
		if ( stateBits & GLS_DEPTHFUNC_EQUAL ) {
			glDepthFunc( GL_EQUAL );
		} else
		{
			glDepthFunc( GL_LEQUAL );
		}
	}

	//
	// check blend bits
	//
	if ( diff & ( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS ) ) {
		GLenum srcFactor, dstFactor;

		if ( stateBits & ( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS ) ) {
			switch ( stateBits & GLS_SRCBLEND_BITS )
			{
			case GLS_SRCBLEND_ZERO:
				srcFactor = GL_ZERO;
				break;
			case GLS_SRCBLEND_ONE:
				srcFactor = GL_ONE;
				break;
			case GLS_SRCBLEND_DST_COLOR:
				srcFactor = GL_DST_COLOR;
				break;
			case GLS_SRCBLEND_ONE_MINUS_DST_COLOR:
				srcFactor = GL_ONE_MINUS_DST_COLOR;
				break;
			case GLS_SRCBLEND_SRC_ALPHA:
				srcFactor = GL_SRC_ALPHA;
				break;
			case GLS_SRCBLEND_ONE_MINUS_SRC_ALPHA:
				srcFactor = GL_ONE_MINUS_SRC_ALPHA;
				break;
			case GLS_SRCBLEND_DST_ALPHA:
				srcFactor = GL_DST_ALPHA;
				break;
			case GLS_SRCBLEND_ONE_MINUS_DST_ALPHA:
				srcFactor = GL_ONE_MINUS_DST_ALPHA;
				break;
			case GLS_SRCBLEND_ALPHA_SATURATE:
				srcFactor = GL_SRC_ALPHA_SATURATE;
				break;
			default:
				srcFactor = GL_ONE;     // to get warning to shut up
				idLib::Error( "GL_State: invalid src blend state bits\n" );
				break;
			}

			switch ( stateBits & GLS_DSTBLEND_BITS )
			{
			case GLS_DSTBLEND_ZERO:
				dstFactor = GL_ZERO;
				break;
			case GLS_DSTBLEND_ONE:
				dstFactor = GL_ONE;
				break;
			case GLS_DSTBLEND_SRC_COLOR:
				dstFactor = GL_SRC_COLOR;
				break;
			case GLS_DSTBLEND_ONE_MINUS_SRC_COLOR:
				dstFactor = GL_ONE_MINUS_SRC_COLOR;
				break;
			case GLS_DSTBLEND_SRC_ALPHA:
				dstFactor = GL_SRC_ALPHA;
				break;
			case GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA:
				dstFactor = GL_ONE_MINUS_SRC_ALPHA;
				break;
			case GLS_DSTBLEND_DST_ALPHA:
				dstFactor = GL_DST_ALPHA;
				break;
			case GLS_DSTBLEND_ONE_MINUS_DST_ALPHA:
				dstFactor = GL_ONE_MINUS_DST_ALPHA;
				break;
			default:
				dstFactor = GL_ONE;     // to get warning to shut up
				idLib::Error( "GL_State: invalid dst blend state bits\n" );
				break;
			}

			glEnable( GL_BLEND );
			glBlendFunc( srcFactor, dstFactor );
		} else
		{
			glDisable( GL_BLEND );
		}
	}

	//
	// check depthmask
	//
	if ( diff & GLS_DEPTHMASK_TRUE ) {
		if ( stateBits & GLS_DEPTHMASK_TRUE ) {
			glDepthMask( GL_TRUE );
		} else
		{
			glDepthMask( GL_FALSE );
		}
	}

	//
	// fill/line mode
	//
	if ( diff & GLS_POLYMODE_LINE ) {
		if ( stateBits & GLS_POLYMODE_LINE ) {
			glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
		} else
		{
			glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
		}
	}

	//
	// depthtest
	//
	if ( diff & GLS_DEPTHTEST_DISABLE ) {
		if ( stateBits & GLS_DEPTHTEST_DISABLE ) {
			glDisable( GL_DEPTH_TEST );
		} else
		{
			glEnable( GL_DEPTH_TEST );
		}
	}

	//
	// alpha test
	//
	if ( diff & GLS_ATEST_BITS ) {
		switch ( stateBits & GLS_ATEST_BITS )
		{
		case 0:
			glDisable( GL_ALPHA_TEST );
			break;
		case GLS_ATEST_GT_0:
			glEnable( GL_ALPHA_TEST );
			glAlphaFunc( GL_GREATER, 0.0f );
			break;
		case GLS_ATEST_LT_80:
			glEnable( GL_ALPHA_TEST );
			glAlphaFunc( GL_LESS, 0.5f );
			break;
		case GLS_ATEST_GE_80:
			glEnable( GL_ALPHA_TEST );
			glAlphaFunc( GL_GEQUAL, 0.5f );
			break;
		default:
			assert( 0 );
			break;
		}
	}

	glState.glStateBits = stateBits;
}

/*
=================
GL_SetDefaultState

The engine passes the r_textureMode filter over every image here
through GL_TextureMode; this image manager computes the filter per
upload, so that pass and the cvar drop out. The ATI pn_triangles
setup also drops out, this renderer does not carry the extension.
=================
*/
void GL_SetDefaultState( void ) {
	glClearDepth( 1.0f );

	glCullFace( GL_FRONT );

	glColor4f( 1, 1, 1, 1 );

	// initialize downstream texture unit if we're running
	// in a multitexture environment
	GL_SelectTexture( 1 );
	GL_TexEnv( GL_MODULATE );
	glDisable( GL_TEXTURE_2D );
	GL_SelectTexture( 0 );

	glEnable( GL_TEXTURE_2D );
	GL_TexEnv( GL_MODULATE );

	glShadeModel( GL_SMOOTH );

	glDepthFunc( GL_LEQUAL );

	// the vertex array is always enabled, but the color and texture
	// arrays are enabled and disabled around the compiled vertex array call
	glEnableClientState( GL_VERTEX_ARRAY );

	//
	// make sure our GL state vector is set correctly
	//
	glState.glStateBits = GLS_DEPTHTEST_DISABLE | GLS_DEPTHMASK_TRUE;

	glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	glDepthMask( GL_TRUE );
	glDisable( GL_DEPTH_TEST );
	glEnable( GL_SCISSOR_TEST );
	glDisable( GL_CULL_FACE );
	glDisable( GL_BLEND );
}
