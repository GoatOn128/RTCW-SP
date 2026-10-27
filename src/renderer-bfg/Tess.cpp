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
#include "Tess.h"
#include "Shadow.h"
#include "CVarSystem.h"
#include "ImageManager.h"

/*

  The tesselator and the stage iterator, ported from
  src/renderer/tr_shade.c of this code base. This entire file is back
  end: it applies the parsed material stages to the surface data in
  the tess struct.

  Nothing drives this yet: the module has no live GL context and no
  surface functions until the backend draw phase wires the draw
  loop. Deferred with their own phases, as documented at the call
  sites: the dynamic light projection (ProjectDlightTexture), the fog
  pass (RB_FogPass) and the per-iterator GL fog (SetIteratorFog,
  R_FogOn/R_FogOff), and the ATI pn_triangles tesselation, which the
  engine gated on a hardware extension this renderer does not carry.
  The compiled vertex array lock of the engine is not carried over
  either, so r_primitives 0 defaults to the strip path like the
  engine does without the lock.

*/

// engine tr_init.c defaults
static idCVar r_primitives( "r_primitives", "0", CVAR_RENDERER | CVAR_ARCHIVE, "use trifan, strips or elements" );
static idCVar r_logFile( "r_logFile", "0", CVAR_RENDERER | CVAR_CHEAT, "number of frames to log GL calls" );
static idCVar r_lightmap( "r_lightmap", "0", CVAR_RENDERER | CVAR_CHEAT, "render only lightmaps" );
static idCVar r_showtris( "r_showtris", "0", CVAR_RENDERER | CVAR_CHEAT, "draw triangle outlines" );
static idCVar r_shownormals( "r_shownormals", "0", CVAR_RENDERER | CVAR_CHEAT, "draw vertex normals" );
static idCVar r_offsetFactor( "r_offsetfactor", "-1", CVAR_RENDERER | CVAR_CHEAT, "polygon offset factor" );
static idCVar r_offsetUnits( "r_offsetunits", "-2", CVAR_RENDERER | CVAR_CHEAT, "polygon offset units" );
static idCVar r_debugSort( "r_debugSort", "0", CVAR_RENDERER | CVAR_CHEAT, "stop rendering after this sort value" );
static idCVar r_ignoreFastPath( "r_ignoreFastPath", "1", CVAR_RENDERER | CVAR_ARCHIVE, "ignore the optimized stage iterators" );

// the tesselator of the engine, filled by the surface functions
shaderCommands_t tess;

// the array enable strategy of the engine: when the surface draws in
// a single pass, the color and texture arrays can be set up once
// before the pass loop
static bool setArraysOnce;

/*
=================
R_InitTess

The tess setup of R_Init in src/renderer/tr_init.c.
=================
*/
void R_InitTess( void ) {
	memset( &tess, 0, sizeof( tess ) );
	memset( tess.constantColor255, 255, sizeof( tess.constantColor255 ) );
}

/*
=================
R_ComputeStageIteratorFunc

The fast path selection of ComputeStageIteratorFunc in
src/renderer/tr_shader.c, working on the material instead of the
engine's global shader. The sky iterator of the engine lands with
the sky phase.
=================
*/
void R_ComputeStageIteratorFunc( idMaterial *shader ) {
	shader->optimalStageIteratorFunc = RB_StageIteratorGeneric;

	//
	// see if this should go into the sky path
	//
	if ( shader->IsSky() ) {
		// the sky stage iterator lands with the sky phase, sky
		// materials draw through the generic iterator until then
		return;
	}

	if ( r_ignoreFastPath.GetInteger() ) {
		return;
	}

	//
	// see if this can go into the vertex lit fast path
	//
	if ( shader->GetNumStages() == 1 ) {
		const shaderStage_t *st = shader->GetStage( 0 );

		if ( st->rgbGen == CGEN_LIGHTING_DIFFUSE ) {
			if ( st->alphaGen == AGEN_IDENTITY ) {
				if ( st->bundle[0].tcGen == TCGEN_TEXTURE ) {
					if ( !shader->polygonOffset ) {
						if ( !shader->multitextureEnv ) {
							if ( !shader->GetNumDeforms() ) {
								shader->optimalStageIteratorFunc = RB_StageIteratorVertexLitTexture;
								return;
							}
						}
					}
				}
			}
		}
	}

	//
	// see if this can go into an optimized LM, multitextured path
	//
	if ( shader->GetNumStages() == 1 ) {
		const shaderStage_t *st = shader->GetStage( 0 );

		if ( ( st->rgbGen == CGEN_IDENTITY ) && ( st->alphaGen == AGEN_IDENTITY ) ) {
			if ( st->bundle[0].tcGen == TCGEN_TEXTURE &&
				 st->bundle[1].tcGen == TCGEN_LIGHTMAP ) {
				if ( !shader->polygonOffset ) {
					if ( !shader->GetNumDeforms() ) {
						if ( shader->multitextureEnv ) {
							shader->optimalStageIteratorFunc = RB_StageIteratorLightmappedMultitexture;
							return;
						}
					}
				}
			}
		}
	}
}

/*
================
R_ArrayElement

The engine hands qglArrayElement straight to the strip path; the
glad declaration carries the platform calling convention, so this
wrapper hands it over with a plain function pointer type.
================
*/
static void R_ArrayElement( GLint index ) {
	glArrayElement( index );
}

/*
================
R_ArrayElementDiscrete

This is just for OpenGL conformance testing, it should never be the fastest
================
*/
static void R_ArrayElementDiscrete( GLint index ) {
	glColor4ubv( tess.svars.colors[index] );
	if ( glState.currenttmu ) {
		glMultiTexCoord2f( GL_TEXTURE0, tess.svars.texcoords[0][index][0], tess.svars.texcoords[0][index][1] );
		glMultiTexCoord2f( GL_TEXTURE1, tess.svars.texcoords[1][index][0], tess.svars.texcoords[1][index][1] );
	} else {
		glTexCoord2fv( tess.svars.texcoords[0][index] );
	}
	glVertex3fv( tess.xyz[index] );
}

/*
===================
R_DrawStripElements

===================
*/
static int c_vertexes;          // for seeing how long our average strips are
static int c_begins;

static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void ( *element )( GLint ) ) {
	int i;
	int last[3] = { -1, -1, -1 };
	bool even;

	c_begins++;

	if ( numIndexes <= 0 ) {
		return;
	}

	glBegin( GL_TRIANGLE_STRIP );

	// prime the strip
	element( indexes[0] );
	element( indexes[1] );
	element( indexes[2] );
	c_vertexes += 3;

	last[0] = indexes[0];
	last[1] = indexes[1];
	last[2] = indexes[2];

	even = false;

	for ( i = 3; i < numIndexes; i += 3 )
	{
		// odd numbered triangle in potential strip
		if ( !even ) {
			// check previous triangle to see if we're continuing a strip
			if ( ( indexes[i + 0] == last[2] ) && ( indexes[i + 1] == last[1] ) ) {
				element( indexes[i + 2] );
				c_vertexes++;
				assert( indexes[i + 2] < tess.numVertexes );
				even = true;
			}
			// otherwise we're done with this strip so finish it and start
			// a new one
			else
			{
				glEnd();

				glBegin( GL_TRIANGLE_STRIP );
				c_begins++;

				element( indexes[i + 0] );
				element( indexes[i + 1] );
				element( indexes[i + 2] );

				c_vertexes += 3;

				even = false;
			}
		} else
		{
			// check previous triangle to see if we're continuing a strip
			if ( ( last[2] == indexes[i + 1] ) && ( last[0] == indexes[i + 0] ) ) {
				element( indexes[i + 2] );
				c_vertexes++;

				even = false;
			}
			// otherwise we're done with this strip so finish it and start
			// a new one
			else
			{
				glEnd();

				glBegin( GL_TRIANGLE_STRIP );
				c_begins++;

				element( indexes[i + 0] );
				element( indexes[i + 1] );
				element( indexes[i + 2] );

				c_vertexes += 3;

				even = false;
			}
		}

		// cache the last three vertices
		last[0] = indexes[i + 0];
		last[1] = indexes[i + 1];
		last[2] = indexes[i + 2];
	}

	glEnd();
}

/*
==================
R_DrawElements

Optionally performs our own glDrawElements that looks for strip conditions
instead of using the single glDrawElements call that may be inefficient
without compiled vertex arrays.
==================
*/
static void R_DrawElements( int numIndexes, const glIndex_t *indexes ) {
	int primitives;

	primitives = r_primitives.GetInteger();

	// default is to use triangles if compiled vertex arrays are present;
	// the compiled vertex array lock is not carried over, so without a
	// choice the strips win like they do in the engine without the lock
	if ( primitives == 0 ) {
		primitives = 1;
	}

	if ( primitives == 2 ) {
		glDrawElements( GL_TRIANGLES,
						numIndexes,
						GL_INDEX_TYPE,
						indexes );
		return;
	}

	if ( primitives == 1 ) {
		R_DrawStripElements( numIndexes, indexes, R_ArrayElement );
		return;
	}

	if ( primitives == 3 ) {
		R_DrawStripElements( numIndexes, indexes, R_ArrayElementDiscrete );
		return;
	}

	// anything else will cause no drawing
}

/*
=================
R_BindAnimatedImage

The videoMap playback needs the client cinematic system, which lands
with the client integration, so a videoMap stage returns like the
engine returns after its cinematic upload.
=================
*/
static void R_BindAnimatedImage( const textureBundle_t *bundle ) {
	int index;

	if ( bundle->isVideoMap ) {
		// the cinematic upload lands with the client integration
		return;
	}

	if ( bundle->numImages <= 1 ) {
		if ( bundle->isLightmap && ( backEnd.refdef.rdflags & RDF_SNOOPERVIEW ) ) {
			GL_Bind( imageManager->WhiteImage() );
		} else {
			GL_Bind( bundle->images[0] );
		}
		return;
	}

	// it is necessary to do this messy calc to make sure animations line up
	// exactly with waveforms of the same frequency
	index = myftol( tess.shaderTime * bundle->imageAnimationSpeed * FUNCTABLE_SIZE );
	index >>= FUNCTABLE_SIZE2;

	if ( index < 0 ) {
		index = 0;  // may happen with shader time offsets
	}
	index %= bundle->numImages;

	if ( bundle->isLightmap && ( backEnd.refdef.rdflags & RDF_SNOOPERVIEW ) ) {
		GL_Bind( imageManager->WhiteImage() );
	} else {
		GL_Bind( bundle->images[index] );
	}
}

/*
================
DrawTris

Draws triangle outlines for debugging
================
*/
static void DrawTris( shaderCommands_t *input ) {
	GL_Bind( imageManager->WhiteImage() );
	glColor3f( 1, 1, 1 );

	GL_State( GLS_POLYMODE_LINE | GLS_DEPTHMASK_TRUE );

	if ( r_showtris.GetInteger() == 1 ) {
		glDepthRange( 0, 0 );
	}

	glDisableClientState( GL_COLOR_ARRAY );
	glDisableClientState( GL_TEXTURE_COORD_ARRAY );

	glVertexPointer( 3, GL_FLOAT, 16, input->xyz );  // padded for SIMD

	R_DrawElements( input->numIndexes, input->indexes );

	glDepthRange( 0, 1 );
}

/*
================
DrawNormals

Draws vertex normals for debugging
================
*/
static void DrawNormals( shaderCommands_t *input ) {
	int i;
	vec3_t temp;

	GL_Bind( imageManager->WhiteImage() );
	glColor3f( 1, 1, 1 );

	if ( r_shownormals.GetInteger() == 1 ) {
		glDepthRange( 0, 0 );    // never occluded
	}
	GL_State( GLS_POLYMODE_LINE | GLS_DEPTHMASK_TRUE );

	glBegin( GL_LINES );
	for ( i = 0 ; i < input->numVertexes ; i++ ) {
		glVertex3fv( input->xyz[i] );
		VectorMA( input->xyz[i], 2, input->normal[i], temp );
		glVertex3fv( temp );
	}
	glEnd();
	glDepthRange( 0, 1 );
}

/*
==============
RB_BeginSurface

We must set some things up before beginning any tesselation,
because a surface may be forced to perform a RB_End due
to overflow.
==============
*/
void RB_BeginSurface( const idMaterial *shader, int fogNum ) {
	// the engine remaps a remapped shader here, the shader remapping
	// lands with the material remap phase

	tess.numIndexes = 0;
	tess.numVertexes = 0;
	tess.shader = shader;
	tess.fogNum = fogNum;
	tess.dlightBits = 0;        // will be OR'd in by surface functions
	tess.numPasses = shader->GetNumStages();
	for ( int i = 0; i < tess.numPasses; i++ ) {
		tess.xstages[i] = shader->GetStage( i );
	}
	tess.currentStageIteratorFunc = shader->optimalStageIteratorFunc;

	// the engine subtracts the time offset of a remapped shader
	// here, the remapping lands with the material remap phase
	tess.shaderTime = backEnd.refdef.floatTime;
	if ( shader->clampTime && tess.shaderTime >= shader->clampTime ) {
		tess.shaderTime = shader->clampTime;
	}
}

/*
===================
DrawMultitextured

output = t0 * t1 or t0 + t1

t0 = most upstream according to spec
t1 = most downstream according to spec
===================
*/
static void DrawMultitextured( shaderCommands_t *input, int stage ) {
	const shaderStage_t *pStage;

	pStage = tess.xstages[stage];

	// the per-stage GL fog toggling of the engine (R_FogOn/R_FogOff
	// over shader->noFog and stage->isFogged) lands with the fog phase

	GL_State( pStage->stateBits );

	// this is an ugly hack to work around a GeForce driver
	// bug with multitexture and clip planes
	if ( backEnd.viewParms.isPortal ) {
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
	}

	//
	// base
	//
	GL_SelectTexture( 0 );
	glTexCoordPointer( 2, GL_FLOAT, 0, input->svars.texcoords[0] );
	R_BindAnimatedImage( &pStage->bundle[0] );

	//
	// lightmap/secondary pass
	//
	GL_SelectTexture( 1 );
	glEnable( GL_TEXTURE_2D );
	glEnableClientState( GL_TEXTURE_COORD_ARRAY );

	if ( r_lightmap.GetInteger() ) {
		GL_TexEnv( GL_REPLACE );
	} else {
		GL_TexEnv( tess.shader->multitextureEnv );
	}

	glTexCoordPointer( 2, GL_FLOAT, 0, input->svars.texcoords[1] );

	R_BindAnimatedImage( &pStage->bundle[1] );

	R_DrawElements( input->numIndexes, input->indexes );

	//
	// disable texturing on TEXTURE1, then select TEXTURE0
	//
	glDisable( GL_TEXTURE_2D );

	GL_SelectTexture( 0 );
}

/*
===============
ComputeColors
===============
*/
static void ComputeColors( const shaderStage_t *pStage ) {
	int i;

	//
	// rgbGen
	//
	switch ( pStage->rgbGen )
	{
	case CGEN_IDENTITY:
		memset( tess.svars.colors, 0xff, tess.numVertexes * 4 );
		break;
	default:
	case CGEN_IDENTITY_LIGHTING:
		memset( tess.svars.colors, imageManager->IdentityLightByte(), tess.numVertexes * 4 );
		break;
	case CGEN_LIGHTING_DIFFUSE:
		RB_CalcDiffuseColor( ( unsigned char * ) tess.svars.colors );
		break;
	case CGEN_EXACT_VERTEX:
		memcpy( tess.svars.colors, tess.vertexColors, tess.numVertexes * sizeof( tess.vertexColors[0] ) );
		break;
	case CGEN_CONST:
		for ( i = 0; i < tess.numVertexes; i++ ) {
			*( int * )tess.svars.colors[i] = *( int * )pStage->constantColor;
		}
		break;
	case CGEN_VERTEX:
		if ( imageManager->IdentityLight() == 1 ) {
			memcpy( tess.svars.colors, tess.vertexColors, tess.numVertexes * sizeof( tess.vertexColors[0] ) );
		} else
		{
			for ( i = 0; i < tess.numVertexes; i++ )
			{
				tess.svars.colors[i][0] = tess.vertexColors[i][0] * imageManager->IdentityLight();
				tess.svars.colors[i][1] = tess.vertexColors[i][1] * imageManager->IdentityLight();
				tess.svars.colors[i][2] = tess.vertexColors[i][2] * imageManager->IdentityLight();
				tess.svars.colors[i][3] = tess.vertexColors[i][3];
			}
		}
		break;
	case CGEN_ONE_MINUS_VERTEX:
		if ( imageManager->IdentityLight() == 1 ) {
			for ( i = 0; i < tess.numVertexes; i++ )
			{
				tess.svars.colors[i][0] = 255 - tess.vertexColors[i][0];
				tess.svars.colors[i][1] = 255 - tess.vertexColors[i][1];
				tess.svars.colors[i][2] = 255 - tess.vertexColors[i][2];
			}
		} else
		{
			for ( i = 0; i < tess.numVertexes; i++ )
			{
				tess.svars.colors[i][0] = ( 255 - tess.vertexColors[i][0] ) * imageManager->IdentityLight();
				tess.svars.colors[i][1] = ( 255 - tess.vertexColors[i][1] ) * imageManager->IdentityLight();
				tess.svars.colors[i][2] = ( 255 - tess.vertexColors[i][2] ) * imageManager->IdentityLight();
			}
		}
		break;
	case CGEN_FOG:
		// the fog color of the world lands with the fog phase, the
		// engine writes the packed fog color here
		break;
	case CGEN_WAVEFORM:
		RB_CalcWaveColor( &pStage->rgbWave, ( unsigned char * ) tess.svars.colors );
		break;
	case CGEN_ENTITY:
		RB_CalcColorFromEntity( ( unsigned char * ) tess.svars.colors );
		break;
	case CGEN_ONE_MINUS_ENTITY:
		RB_CalcColorFromOneMinusEntity( ( unsigned char * ) tess.svars.colors );
		break;
	}

	//
	// alphaGen
	//
	switch ( pStage->alphaGen )
	{
	case AGEN_SKIP:
		break;
	case AGEN_IDENTITY:
		if ( pStage->rgbGen != CGEN_IDENTITY ) {
			if ( ( pStage->rgbGen == CGEN_VERTEX && imageManager->IdentityLight() != 1 ) ||
				 pStage->rgbGen != CGEN_VERTEX ) {
				for ( i = 0; i < tess.numVertexes; i++ ) {
					tess.svars.colors[i][3] = 0xff;
				}
			}
		}
		break;
	case AGEN_CONST:
		if ( pStage->rgbGen != CGEN_CONST ) {
			for ( i = 0; i < tess.numVertexes; i++ ) {
				tess.svars.colors[i][3] = pStage->constantColor[3];
			}
		}
		break;
	case AGEN_WAVEFORM:
		RB_CalcWaveAlpha( &pStage->alphaWave, ( unsigned char * ) tess.svars.colors );
		break;
	case AGEN_LIGHTING_SPECULAR:
		RB_CalcSpecularAlpha( ( unsigned char * ) tess.svars.colors );
		break;
	case AGEN_ENTITY:
		RB_CalcAlphaFromEntity( ( unsigned char * ) tess.svars.colors );
		break;
	case AGEN_ONE_MINUS_ENTITY:
		RB_CalcAlphaFromOneMinusEntity( ( unsigned char * ) tess.svars.colors );
		break;
	// Ridah
	case AGEN_NORMALZFADE:
	{
		float alpha, range, lowest, highest, dot;
		vec3_t worldUp;
		bool zombieEffect = false;

		if ( VectorCompare( backEnd.currentEntity->e.fireRiseDir, originVec3 ) ) {
			VectorSet( backEnd.currentEntity->e.fireRiseDir, 0, 0, 1 );
		}

		if ( backEnd.currentEntity->e.hModel ) {     // world surfaces dont have an axis
			VectorRotate( backEnd.currentEntity->e.fireRiseDir, backEnd.currentEntity->e.axis, worldUp );
		} else {
			VectorCopy( backEnd.currentEntity->e.fireRiseDir, worldUp );
		}

		lowest = pStage->zFadeBounds[0];
		if ( lowest == -1000 ) {    // use entity alpha
			lowest = backEnd.currentEntity->e.shaderTime;
			zombieEffect = true;
		}
		highest = pStage->zFadeBounds[1];
		if ( highest == -1000 ) {   // use entity alpha
			highest = backEnd.currentEntity->e.shaderTime;
			zombieEffect = true;
		}
		range = highest - lowest;
		for ( i = 0; i < tess.numVertexes; i++ ) {
			dot = DotProduct( tess.normal[i], worldUp );

			// special handling for Zombie fade effect
			if ( zombieEffect ) {
				alpha = ( float )backEnd.currentEntity->e.shaderRGBA[3] * ( dot + 1.0 ) / 2.0;
				alpha += ( 2.0 * ( float )backEnd.currentEntity->e.shaderRGBA[3] ) * ( 1.0 - ( dot + 1.0 ) / 2.0 );
				if ( alpha > 255.0 ) {
					alpha = 255.0;
				} else if ( alpha < 0.0 ) {
					alpha = 0.0;
				}
				tess.svars.colors[i][3] = ( byte )( alpha );
				continue;
			}

			if ( dot < highest ) {
				if ( dot > lowest ) {
					if ( dot < lowest + range / 2 ) {
						alpha = ( ( float )pStage->constantColor[3] * ( ( dot - lowest ) / ( range / 2 ) ) );
					} else {
						alpha = ( ( float )pStage->constantColor[3] * ( 1.0 - ( ( dot - lowest - range / 2 ) / ( range / 2 ) ) ) );
					}
					if ( alpha > 255.0 ) {
						alpha = 255.0;
					} else if ( alpha < 0.0 ) {
						alpha = 0.0;
					}

					// finally, scale according to the entity's alpha
					if ( backEnd.currentEntity->e.hModel ) {
						alpha *= ( float )backEnd.currentEntity->e.shaderRGBA[3] / 255.0;
					}

					tess.svars.colors[i][3] = ( byte )( alpha );
				} else {
					tess.svars.colors[i][3] = 0;
				}
			} else {
				tess.svars.colors[i][3] = 0;
			}
		}
	}
	break;
	// done.
	case AGEN_VERTEX:
		if ( pStage->rgbGen != CGEN_VERTEX ) {
			for ( i = 0; i < tess.numVertexes; i++ ) {
				tess.svars.colors[i][3] = tess.vertexColors[i][3];
			}
		}
		break;
	case AGEN_ONE_MINUS_VERTEX:
		for ( i = 0; i < tess.numVertexes; i++ )
		{
			tess.svars.colors[i][3] = 255 - tess.vertexColors[i][3];
		}
		break;
	case AGEN_PORTAL:
	{
		unsigned char alpha;

		for ( i = 0; i < tess.numVertexes; i++ )
		{
			float len;
			vec3_t v;

			VectorSubtract( tess.xyz[i], backEnd.viewParms.orientation.origin, v );
			len = VectorLength( v );

			len /= tess.shader->portalRange;

			if ( len < 0 ) {
				alpha = 0;
			} else if ( len > 1 ) {
				alpha = 0xff;
			} else
			{
				alpha = len * 0xff;
			}

			tess.svars.colors[i][3] = alpha;
		}
	}
	break;
	}

	//
	// fog adjustment for colors to fade out as fog increases: the
	// modulate-by-fog calculators land with the fog phase, so the
	// adjustColorsForFog setting of the stages has no effect yet
	//
}

/*
===============
ComputeTexCoords
===============
*/
static void ComputeTexCoords( const shaderStage_t *pStage ) {
	int i;
	int b;

	for ( b = 0; b < NUM_TEXTURE_BUNDLES; b++ ) {
		int tm;

		//
		// generate the texture coordinates
		//
		switch ( pStage->bundle[b].tcGen )
		{
		case TCGEN_IDENTITY:
			memset( tess.svars.texcoords[b], 0, sizeof( float ) * 2 * tess.numVertexes );
			break;
		case TCGEN_TEXTURE:
			for ( i = 0 ; i < tess.numVertexes ; i++ ) {
				tess.svars.texcoords[b][i][0] = tess.texCoords[i][0][0];
				tess.svars.texcoords[b][i][1] = tess.texCoords[i][0][1];
			}
			break;
		case TCGEN_LIGHTMAP:
			for ( i = 0 ; i < tess.numVertexes ; i++ ) {
				tess.svars.texcoords[b][i][0] = tess.texCoords[i][1][0];
				tess.svars.texcoords[b][i][1] = tess.texCoords[i][1][1];
			}
			break;
		case TCGEN_VECTOR:
			for ( i = 0 ; i < tess.numVertexes ; i++ ) {
				tess.svars.texcoords[b][i][0] = DotProduct( tess.xyz[i], pStage->bundle[b].tcGenVectors[0] );
				tess.svars.texcoords[b][i][1] = DotProduct( tess.xyz[i], pStage->bundle[b].tcGenVectors[1] );
			}
			break;
		case TCGEN_FOG:
			// the fog texture coordinates land with the fog phase
			break;
		case TCGEN_ENVIRONMENT_MAPPED:
			RB_CalcEnvironmentTexCoords( ( float * ) tess.svars.texcoords[b] );
			break;
		case TCGEN_FIRERISEENV_MAPPED:
			RB_CalcFireRiseEnvTexCoords( ( float * ) tess.svars.texcoords[b] );
			break;
		case TCGEN_BAD:
			return;
		}

		//
		// alter texture coordinates
		//
		for ( tm = 0; tm < pStage->bundle[b].numTexMods ; tm++ ) {
			switch ( pStage->bundle[b].texMods[tm].type )
			{
			case TMOD_NONE:
				tm = TR_MAX_TEXMODS;         // break out of for loop
				break;

			case TMOD_SWAP:
				RB_CalcSwapTexCoords( ( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_TURBULENT:
				RB_CalcTurbulentTexCoords( &pStage->bundle[b].texMods[tm].wave,
										   ( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_ENTITY_TRANSLATE:
				RB_CalcScrollTexCoords( backEnd.currentEntity->e.shaderTexCoord,
										( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_SCROLL:
				RB_CalcScrollTexCoords( pStage->bundle[b].texMods[tm].scroll,
										( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_SCALE:
				RB_CalcScaleTexCoords( pStage->bundle[b].texMods[tm].scale,
									   ( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_STRETCH:
				RB_CalcStretchTexCoords( &pStage->bundle[b].texMods[tm].wave,
										 ( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_TRANSFORM:
				RB_CalcTransformTexCoords( &pStage->bundle[b].texMods[tm],
										   ( float * ) tess.svars.texcoords[b] );
				break;

			case TMOD_ROTATE:
				RB_CalcRotateTexCoords( pStage->bundle[b].texMods[tm].rotateSpeed,
										( float * ) tess.svars.texcoords[b] );
				break;

			default:
				idLib::Error( "ERROR: unknown texmod '%d' in shader '%s'\n",
							  pStage->bundle[b].texMods[tm].type, tess.shader->GetName() );
				break;
			}
		}
	}
}

/*
** RB_IterateStagesGeneric
*/
static void RB_IterateStagesGeneric( shaderCommands_t *input ) {
	int stage;

	for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ )
	{
		const shaderStage_t *pStage = tess.xstages[stage];

		if ( !pStage ) {
			break;
		}

		ComputeColors( pStage );
		ComputeTexCoords( pStage );

		if ( !setArraysOnce ) {
			glEnableClientState( GL_COLOR_ARRAY );
			glColorPointer( 4, GL_UNSIGNED_BYTE, 0, input->svars.colors );
		}

		//
		// do multitexture
		//
		if ( pStage->bundle[1].images[0] != NULL ) {
			DrawMultitextured( input, stage );
		} else
		{
			int fadeStart, fadeEnd;

			if ( !setArraysOnce ) {
				glTexCoordPointer( 2, GL_FLOAT, 0, input->svars.texcoords[0] );
			}

			//
			// set state
			//
			// the engine checks bundle[0].vertexLightmap here to bind
			// the white image when the map was compiled for vertex
			// lighting; this parser has no vertex lightmap bundle, so
			// the check drops out
			R_BindAnimatedImage( &pStage->bundle[0] );

			// the per-stage GL fog toggling over shader->noFog and
			// stage->isFogged lands with the fog phase

			//----(SA)	fading model stuff
			fadeStart = backEnd.currentEntity->e.fadeStartTime;

			if ( fadeStart ) {
				fadeEnd = backEnd.currentEntity->e.fadeEndTime;
				if ( fadeStart > backEnd.refdef.time ) {      // has not started to fade yet
					GL_State( pStage->stateBits );
				} else
				{
					int i;
					unsigned int tempState;
					float alphaval;

					if ( fadeEnd < backEnd.refdef.time ) {    // entity faded out completely
						continue;
					}

					alphaval = ( float )( fadeEnd - backEnd.refdef.time ) / ( float )( fadeEnd - fadeStart );

					tempState = pStage->stateBits;
					// remove the current blend, and don't write to Z buffer
					tempState &= ~( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS | GLS_DEPTHMASK_TRUE );
					// set the blend to src_alpha, dst_one_minus_src_alpha
					tempState |= ( GLS_SRCBLEND_SRC_ALPHA | GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA );
					GL_State( tempState );
					GL_Cull( CT_FRONT_SIDED );
					// modulate the alpha component of each vertex in the render list
					for ( i = 0; i < tess.numVertexes; i++ ) {
						tess.svars.colors[i][0] *= alphaval;
						tess.svars.colors[i][1] *= alphaval;
						tess.svars.colors[i][2] *= alphaval;
						tess.svars.colors[i][3] *= alphaval;
					}
				}
			} else {
				GL_State( pStage->stateBits );
			}
			//----(SA)	end

			//
			// draw
			//
			R_DrawElements( input->numIndexes, input->indexes );
		}
		// allow skipping out to show just lightmaps during development
		if ( r_lightmap.GetInteger() && ( pStage->bundle[0].isLightmap || pStage->bundle[1].isLightmap ) ) {
			break;
		}
	}
}

/*
** RB_StageIteratorGeneric
*/
void RB_StageIteratorGeneric( void ) {
	shaderCommands_t *input;

	input = &tess;

	RB_DeformTessGeometry();

	// the GL fog setup of the iterator (SetIteratorFog) lands with
	// the fog phase

	//
	// set face culling appropriately
	//
	GL_Cull( input->shader->GetCullType() );

	// set polygon offset if necessary
	if ( input->shader->polygonOffset ) {
		glEnable( GL_POLYGON_OFFSET_FILL );
		glPolygonOffset( r_offsetFactor.GetFloat(), r_offsetUnits.GetFloat() );
	}

	//
	// if there is only a single pass then we can enable color
	// and texture arrays before we compile, otherwise we need
	// to avoid compiling those arrays since they will change
	// during multipass rendering
	//
	if ( tess.numPasses > 1 || input->shader->multitextureEnv ) {
		setArraysOnce = false;
		glDisableClientState( GL_COLOR_ARRAY );
		glDisableClientState( GL_TEXTURE_COORD_ARRAY );
	} else
	{
		setArraysOnce = true;

		glEnableClientState( GL_COLOR_ARRAY );
		glColorPointer( 4, GL_UNSIGNED_BYTE, 0, tess.svars.colors );

		glEnableClientState( GL_TEXTURE_COORD_ARRAY );
		glTexCoordPointer( 2, GL_FLOAT, 0, tess.svars.texcoords[0] );
	}

	//
	// lock XYZ
	//
	glVertexPointer( 3, GL_FLOAT, 16, input->xyz );     // padded for SIMD

	//
	// enable color and texcoord arrays after the lock if necessary
	//
	if ( !setArraysOnce ) {
		glEnableClientState( GL_TEXTURE_COORD_ARRAY );
		glEnableClientState( GL_COLOR_ARRAY );
	}

	//
	// call shader function
	//
	RB_IterateStagesGeneric( input );

	//
	// now do any dynamic lighting needed
	//
	// the dynamic light projection (ProjectDlightTexture) lands with
	// the dynamic light phase

	//
	// now do fog
	//
	// the fog pass (RB_FogPass) lands with the fog phase

	//
	// reset polygon offset
	//
	if ( input->shader->polygonOffset ) {
		glDisable( GL_POLYGON_OFFSET_FILL );
	}
}

/*
** RB_StageIteratorVertexLitTexture
*/
void RB_StageIteratorVertexLitTexture( void ) {
	shaderCommands_t *input;

	input = &tess;

	//
	// compute colors
	//
	RB_CalcDiffuseColor( ( unsigned char * ) tess.svars.colors );

	// the GL fog setup of the iterator lands with the fog phase

	//
	// set face culling appropriately
	//
	GL_Cull( input->shader->GetCullType() );

	//
	// set arrays and lock
	//
	glEnableClientState( GL_COLOR_ARRAY );
	glEnableClientState( GL_TEXTURE_COORD_ARRAY );

	glColorPointer( 4, GL_UNSIGNED_BYTE, 0, tess.svars.colors );
	glTexCoordPointer( 2, GL_FLOAT, 16, tess.texCoords[0][0] );
	glVertexPointer( 3, GL_FLOAT, 16, input->xyz );

	//
	// call special shade routine
	//
	R_BindAnimatedImage( &tess.xstages[0]->bundle[0] );
	GL_State( tess.xstages[0]->stateBits );
	R_DrawElements( input->numIndexes, input->indexes );

	//
	// now do any dynamic lighting needed
	//
	// the dynamic light projection lands with the dynamic light phase

	//
	// now do fog
	//
	// the fog pass lands with the fog phase
}

/*
** RB_StageIteratorLightmappedMultitexture
*/
void RB_StageIteratorLightmappedMultitexture( void ) {
	shaderCommands_t *input;

	input = &tess;

	// the GL fog setup of the iterator lands with the fog phase

	//
	// set face culling appropriately
	//
	GL_Cull( input->shader->GetCullType() );

	//
	// set color, pointers, and lock
	//
	GL_State( GLS_DEFAULT );
	glVertexPointer( 3, GL_FLOAT, 16, input->xyz );

	glEnableClientState( GL_COLOR_ARRAY );
	glColorPointer( 4, GL_UNSIGNED_BYTE, 0, tess.constantColor255 );

	//
	// select base stage
	//
	GL_SelectTexture( 0 );

	glEnableClientState( GL_TEXTURE_COORD_ARRAY );
	R_BindAnimatedImage( &tess.xstages[0]->bundle[0] );
	glTexCoordPointer( 2, GL_FLOAT, 16, tess.texCoords[0][0] );

	//
	// configure second stage
	//
	GL_SelectTexture( 1 );
	glEnable( GL_TEXTURE_2D );
	if ( r_lightmap.GetInteger() ) {
		GL_TexEnv( GL_REPLACE );
	} else {
		GL_TexEnv( GL_MODULATE );
	}

	//----(SA)	modified for snooper
	if ( tess.xstages[0]->bundle[1].isLightmap && ( backEnd.refdef.rdflags & RDF_SNOOPERVIEW ) ) {
		GL_Bind( imageManager->WhiteImage() );
	} else {
		R_BindAnimatedImage( &tess.xstages[0]->bundle[1] );
	}

	glEnableClientState( GL_TEXTURE_COORD_ARRAY );
	glTexCoordPointer( 2, GL_FLOAT, 16, tess.texCoords[0][1] );

	R_DrawElements( input->numIndexes, input->indexes );

	//
	// disable texturing on TEXTURE1, then select TEXTURE0
	//
	glDisable( GL_TEXTURE_2D );
	glDisableClientState( GL_TEXTURE_COORD_ARRAY );

	GL_SelectTexture( 0 );

	//
	// now do any dynamic lighting needed
	//
	// the dynamic light projection lands with the dynamic light phase

	//
	// now do fog
	//
	// the fog pass lands with the fog phase
}

/*
** RB_EndSurface
*/
void RB_EndSurface( void ) {
	shaderCommands_t *input;

	input = &tess;

	if ( input->numIndexes == 0 ) {
		return;
	}

	if ( input->indexes[SHADER_MAX_INDEXES - 1] != 0 ) {
		idLib::Error( "RB_EndSurface() - SHADER_MAX_INDEXES hit" );
	}
	if ( input->xyz[SHADER_MAX_VERTEXES - 1][0] != 0 ) {
		idLib::Error( "RB_EndSurface() - SHADER_MAX_VERTEXES hit" );
	}

	// the engine sends the stencil shadow marker shader here to run
	// the shadow pass; the marker material lands with the scene phase,
	// until then nothing calls into the shadow pass through here

	// for debugging of sort order issues, stop rendering after a given sort value
	if ( r_debugSort.GetInteger() && r_debugSort.GetInteger() < input->shader->Sort() ) {
		return;
	}

	// the portal sky scene splitting of the engine (skyboxportal and
	// the RB_StageIteratorSky filter) lands with the sky phase

	//
	// update performance counters
	//
	backEnd.pc.c_shaders++;
	backEnd.pc.c_vertexes += tess.numVertexes;
	backEnd.pc.c_indexes += tess.numIndexes;
	backEnd.pc.c_totalIndexes += tess.numIndexes * tess.numPasses;

	//
	// call off to shader specific tess end function
	//
	( tess.currentStageIteratorFunc )();

	//
	// draw debugging stuff
	//
	if ( r_showtris.GetInteger() ) {
		DrawTris( input );
	}
	if ( r_shownormals.GetInteger() ) {
		DrawNormals( input );
	}

	// clear shader so we can tell we don't have any unclosed surfaces
	tess.numIndexes = 0;
}
