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
but WITHOUT ANY WARRANTY; without the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RTCW SP Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied RTCW SP Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "precompiled.h"
#include "Material.h"
#include "ImageManager.h"
#include "CVarSystem.h"

/*

  The default and the texture-only material construction follow
  R_FindShader in src/renderer/tr_shader.c of this code base: a name
  without an explicit shader definition gets one of the fallback stage
  setups. The stage images load through the image manager, the engine
  loads the same image through R_FindImageFile; a texture that does
  not load defaults the material like the engine falls back to the
  default shader.

  The default material is not drawn, like the engine's default shader,
  so missing shader definitions stay visible as missing surfaces
  instead of rendering with a wrong texture.

*/

/*
=================
idMaterial::idMaterial
=================
*/
idMaterial::idMaterial() {
	Reset();
}

/*
=================
idMaterial::Reset
=================
*/
void idMaterial::Reset() {
	name.Clear();
	defaulted = false;
	explicitlyDefined = false;

	sort = SS_BAD;

	surfaceFlags = 0;
	contentFlags = 0;
	entityMergable = false;
	isSky = false;
	sky.cloudHeight = 0.0f;
	memset( sky.outerbox, 0, sizeof( sky.outerbox ) );
	memset( sky.innerbox, 0, sizeof( sky.innerbox ) );
	memset( &fogParms, 0, sizeof( fogParms ) );
	portalRange = 0.0f;

	cullType = CT_FRONT_SIDED;
	polygonOffset = false;
	noMipMaps = false;
	noPicMip = false;
	characterMip = false;
	noFog = false;
	clampTime = 0;
	multitextureEnv = 0;

	numDeforms = 0;
	for ( int i = 0; i < MAX_SHADER_DEFORMS; i++ ) {
		deforms[i] = deformStage_t();
	}

	numStages = 0;
	for ( int i = 0; i < MAX_SHADER_STAGES; i++ ) {
		stages[i] = shaderStage_t();
	}

	lightmapIndex = LIGHTMAP_NONE;
	coverage = MC_BAD;
}

/*
=================
idMaterial::InitDefault

The engine's default shader has no stages and is never drawn.
=================
*/
void idMaterial::InitDefault() {
	Reset();
	name = "_defaultMaterial";
	defaulted = true;
	numStages = 0;
	sort = SS_FOG;
	coverage = MC_BAD;
}

/*
=================
idMaterial::InitTextureOnly

Creates the default shading commands for an image without an explicit
shader definition, following the fallback in R_FindShader.
=================
*/
void idMaterial::InitTextureOnly( const char *textureName, int lmIndex ) {
	Reset();
	name = textureName;
	lightmapIndex = lmIndex;

	// the lightmap bundles reference the lightmap of the surface, they
	// have no image of their own

	// the engine loads the raw image with a default .tga extension,
	// mipmapped everywhere but the 2D GUI flavor
	const bool mipRawImage = ( lightmapIndex != LIGHTMAP_2D );
	idStr fileName = textureName;
	fileName.DefaultFileExtension( ".tga" );
	idImage *texture = imageManager->ImageFromFile( fileName, mipRawImage, mipRawImage, false,
													mipRawImage ? GL_REPEAT : GL_CLAMP );

	// a texture that does not load defaults the material; the engine
	// hands back its default shader instead, this renderer keeps the
	// material cached under its name so the file is not reloaded
	if ( texture == NULL ) {
		idLib::Warning( "Material '%s' could not load its texture", textureName );
		defaulted = true;
		Finish();
		return;
	}

	if ( lightmapIndex == LIGHTMAP_NONE ) {
		// dynamic colors at vertexes
		stages[0].bundle[0].images[0] = texture;
		stages[0].bundle[0].numImages = 1;
		stages[0].active = true;
		stages[0].rgbGen = CGEN_LIGHTING_DIFFUSE;
		stages[0].stateBits = GLS_DEFAULT;
	} else if ( lightmapIndex == LIGHTMAP_BY_VERTEX ) {
		// explicit colors at vertexes
		stages[0].bundle[0].images[0] = texture;
		stages[0].bundle[0].numImages = 1;
		stages[0].active = true;
		stages[0].rgbGen = CGEN_EXACT_VERTEX;
		stages[0].alphaGen = AGEN_SKIP;
		stages[0].stateBits = GLS_DEFAULT;
	} else if ( lightmapIndex == LIGHTMAP_2D ) {
		// GUI elements
		stages[0].bundle[0].images[0] = texture;
		stages[0].bundle[0].numImages = 1;
		stages[0].active = true;
		stages[0].rgbGen = CGEN_VERTEX;
		stages[0].alphaGen = AGEN_VERTEX;
		stages[0].stateBits = GLS_DEPTHTEST_DISABLE |
							  GLS_SRCBLEND_SRC_ALPHA |
							  GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA;
	} else if ( lightmapIndex == LIGHTMAP_WHITEIMAGE ) {
		// fullbright level
		stages[0].bundle[0].images[0] = imageManager->WhiteImage();
		stages[0].bundle[0].numImages = 1;
		stages[0].active = true;
		stages[0].rgbGen = CGEN_IDENTITY_LIGHTING;
		stages[0].stateBits = GLS_DEFAULT;

		stages[1].bundle[0].images[0] = texture;
		stages[1].bundle[0].numImages = 1;
		stages[1].active = true;
		stages[1].rgbGen = CGEN_IDENTITY;
		stages[1].stateBits |= GLS_SRCBLEND_DST_COLOR | GLS_DSTBLEND_ZERO;
	} else {
		// two pass lightmap
		stages[0].bundle[0].isLightmap = true;
		stages[0].bundle[0].numImages = 0;
		stages[0].active = true;
		stages[0].rgbGen = CGEN_IDENTITY;     // lightmaps are scaled on creation
		// for identitylight
		stages[0].stateBits = GLS_DEFAULT;

		stages[1].bundle[0].images[0] = texture;
		stages[1].bundle[0].numImages = 1;
		stages[1].active = true;
		stages[1].rgbGen = CGEN_IDENTITY;
		stages[1].stateBits |= GLS_SRCBLEND_DST_COLOR | GLS_DSTBLEND_ZERO;
	}

	Finish();
}

/*
=================
idMaterial::Finish

The stage defaulting, the sort order and the stage collapses of
FinishShader in src/renderer/tr_shader.c, plus the coverage of the
drawn stages. The stage iterator function of the engine is not
ported: the backend picks its draw path from the stages when it
lands.
=================
*/
void idMaterial::Finish() {
	bool hasLightmapStage = false;

	// set sky stuff appropriate
	if ( isSky ) {
		sort = SS_ENVIRONMENT;
	}

	// set polygon offset
	if ( polygonOffset && !sort ) {
		sort = SS_DECAL;
	}

	// set appropriate stage information
	int numActiveStages = 0;
	for ( int stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
		shaderStage_t *pStage = &stages[stage];

		if ( !pStage->active ) {
			break;
		}

		// check for a missing texture; the lightmap bundles bind the
		// surface lightmap at draw time and the videoMap stages keep
		// the video file name until the cinematic playback lands
		if ( !pStage->bundle[0].isLightmap && !pStage->bundle[0].isVideoMap && pStage->bundle[0].images[0] == NULL ) {
			idLib::Warning( "Material %s has a stage with no image", name.c_str() );
			pStage->active = false;
			continue;
		}

		// ditch this stage if it's detail and detail textures are
		// disabled, the engine removes the stage here too
		if ( pStage->isDetail && !r_detailTextures.GetBool() ) {
			if ( stage < ( MAX_SHADER_STAGES - 1 ) ) {
				memmove( pStage, pStage + 1, sizeof( *pStage ) * ( MAX_SHADER_STAGES - stage - 1 ) );
				// kill the last stage, since it's now a duplicate
				for ( int i = MAX_SHADER_STAGES - 1; i > stage; i-- ) {
					if ( stages[i].active ) {
						memset( &stages[i], 0, sizeof( *pStage ) );
						break;
					}
				}
				stage--;    // the next stage is now the current stage, so check it again
			} else {
				memset( pStage, 0, sizeof( *pStage ) );
			}
			continue;
		}

		// default texture coordinate generation
		if ( pStage->bundle[0].isLightmap ) {
			if ( pStage->bundle[0].tcGen == TCGEN_BAD ) {
				pStage->bundle[0].tcGen = TCGEN_LIGHTMAP;
			}
			hasLightmapStage = true;
		} else {
			if ( pStage->bundle[0].tcGen == TCGEN_BAD ) {
				pStage->bundle[0].tcGen = TCGEN_TEXTURE;
			}
		}

		// determine sort order and fog color adjustment
		if ( ( pStage->stateBits & ( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS ) ) &&
			 ( stages[0].stateBits & ( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS ) ) ) {
			int blendSrcBits = pStage->stateBits & GLS_SRCBLEND_BITS;
			int blendDstBits = pStage->stateBits & GLS_DSTBLEND_BITS;

			// fog color adjustment only works for blend modes that have a contribution
			// that aproaches 0 as the modulate values aproach 0 --
			// GL_ONE, GL_ONE
			// GL_ZERO, GL_ONE_MINUS_SRC_COLOR
			// GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA

			// modulate, additive
			if ( ( ( blendSrcBits == GLS_SRCBLEND_ONE ) && ( blendDstBits == GLS_DSTBLEND_ONE ) ) ||
				 ( ( blendSrcBits == GLS_SRCBLEND_ZERO ) && ( blendDstBits == GLS_DSTBLEND_ONE_MINUS_SRC_COLOR ) ) ) {
				pStage->adjustColorsForFog = ACFF_MODULATE_RGB;
			}
			// strict blend
			else if ( ( blendSrcBits == GLS_SRCBLEND_SRC_ALPHA ) && ( blendDstBits == GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA ) ) {
				pStage->adjustColorsForFog = ACFF_MODULATE_ALPHA;
			}
			// premultiplied alpha
			else if ( ( blendSrcBits == GLS_SRCBLEND_ONE ) && ( blendDstBits == GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA ) ) {
				pStage->adjustColorsForFog = ACFF_MODULATE_RGBA;
			} else {
				// we can't adjust this one correctly, so it won't be exactly correct in fog
			}

			// don't screw with sort order if this is a portal or environment
			if ( !sort ) {
				// see through item, like a grill or grate
				if ( pStage->stateBits & GLS_DEPTHMASK_TRUE ) {
					sort = SS_SEE_THROUGH;
				} else {
					sort = SS_BLEND0;
				}
			}
		}

		numActiveStages++;
	}

	// there are times when you will need to manually apply a sort to
	// opaque alpha tested shaders that have later blend passes
	if ( !sort ) {
		sort = SS_OPAQUE;
	}

	// if we are in r_vertexLight mode, never use a lightmap texture;
	// the engine also collapses for the Permedia2 hardware type,
	// which has no equivalent here
	if ( numActiveStages > 1 && r_vertexLight.GetBool() && !r_uiFullScreen.GetBool() ) {
		VertexLightingCollapse();
		numActiveStages = 1;
		hasLightmapStage = false;
	}

	// look for multitexture potential
	if ( numActiveStages > 1 && CollapseMultitexture() ) {
		numActiveStages--;
	}

	if ( lightmapIndex >= 0 && !hasLightmapStage ) {
		idLib::Warning( "Material '%s' has lightmap but no lightmap stage", name.c_str() );
		lightmapIndex = LIGHTMAP_NONE;
	}

	numStages = numActiveStages;

	// fogonly shaders don't have any normal passes
	if ( numStages == 0 ) {
		sort = SS_FOG;
	}

	// compute the coverage of the drawn stages
	coverage = MC_BAD;
	if ( numStages > 0 ) {
		coverage = MC_OPAQUE;
		for ( int stage = 0; stage < numStages; stage++ ) {
			const shaderStage_t *pStage = &stages[stage];
			if ( pStage->stateBits & ( GLS_SRCBLEND_BITS | GLS_DSTBLEND_BITS ) ) {
				coverage = MC_TRANSLUCENT;
				break;
			}
			if ( pStage->stateBits & GLS_ATEST_BITS ) {
				coverage = MC_PERFORATED;
			}
		}
	} else if ( isSky ) {
		// the sky is drawn as the environment box, the stages only carry
		// the box textures
		coverage = MC_TRANSLUCENT;
	}
}

// the multitexture collapse table of the engine: the blend state of
// the two stages and the resulting multitexture environment and
// blend, from src/renderer/tr_shader.c
typedef struct {
	int blendA;
	int blendB;

	int multitextureEnv;
	int multitextureBlend;
} collapse_t;

static collapse_t collapse[] = {
	{ 0, GLS_DSTBLEND_SRC_COLOR | GLS_SRCBLEND_ZERO,
	  GL_MODULATE, 0 },

	{ 0, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR,
	  GL_MODULATE, 0 },

	{ GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR,
	  GL_MODULATE, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR },

	{ GLS_DSTBLEND_SRC_COLOR | GLS_SRCBLEND_ZERO, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR,
	  GL_MODULATE, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR },

	{ GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR, GLS_DSTBLEND_SRC_COLOR | GLS_SRCBLEND_ZERO,
	  GL_MODULATE, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR },

	{ GLS_DSTBLEND_SRC_COLOR | GLS_SRCBLEND_ZERO, GLS_DSTBLEND_SRC_COLOR | GLS_SRCBLEND_ZERO,
	  GL_MODULATE, GLS_DSTBLEND_ZERO | GLS_SRCBLEND_DST_COLOR },

	{ 0, GLS_DSTBLEND_ONE | GLS_SRCBLEND_ONE,
	  GL_ADD, 0 },

	{ GLS_DSTBLEND_ONE | GLS_SRCBLEND_ONE, GLS_DSTBLEND_ONE | GLS_SRCBLEND_ONE,
	  GL_ADD, GLS_DSTBLEND_ONE | GLS_SRCBLEND_ONE },

	{ -1 }
};

/*
=================
idMaterial::VertexLightingCollapse

If vertex lighting is enabled, only render a single pass, trying to
guess which is the correct one to best approximate what it is
supposed to look like.
=================
*/
void idMaterial::VertexLightingCollapse() {
	// if we aren't opaque, just use the first pass
	if ( sort == SS_OPAQUE ) {
		// pick the best texture for the single pass
		shaderStage_t *bestStage = &stages[0];
		int bestImageRank = -999999;

		for ( int stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
			shaderStage_t *pStage = &stages[stage];

			if ( !pStage->active ) {
				break;
			}

			int rank = 0;

			if ( pStage->bundle[0].isLightmap ) {
				rank -= 100;
			}
			if ( pStage->bundle[0].tcGen != TCGEN_TEXTURE ) {
				rank -= 5;
			}
			if ( pStage->bundle[0].numTexMods ) {
				rank -= 5;
			}
			if ( pStage->rgbGen != CGEN_IDENTITY && pStage->rgbGen != CGEN_IDENTITY_LIGHTING ) {
				rank -= 3;
			}

			if ( rank > bestImageRank ) {
				bestImageRank = rank;
				bestStage = pStage;
			}
		}

		stages[0].bundle[0] = bestStage->bundle[0];
		stages[0].stateBits &= ~( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS );
		stages[0].stateBits |= GLS_DEPTHMASK_TRUE;
		if ( lightmapIndex == LIGHTMAP_NONE ) {
			stages[0].rgbGen = CGEN_LIGHTING_DIFFUSE;
		} else {
			stages[0].rgbGen = CGEN_EXACT_VERTEX;
		}
		stages[0].alphaGen = AGEN_SKIP;
	} else {
		// don't use a lightmap (tesla coils)
		if ( stages[0].bundle[0].isLightmap ) {
			stages[0] = stages[1];
		}

		// if we were in a cross-fade cgen, hack it to normal
		if ( stages[0].rgbGen == CGEN_ONE_MINUS_ENTITY || stages[1].rgbGen == CGEN_ONE_MINUS_ENTITY ) {
			stages[0].rgbGen = CGEN_IDENTITY_LIGHTING;
		}
		if ( ( stages[0].rgbGen == CGEN_WAVEFORM && stages[0].rgbWave.func == GF_SAWTOOTH )
			 && ( stages[1].rgbGen == CGEN_WAVEFORM && stages[1].rgbWave.func == GF_INVERSE_SAWTOOTH ) ) {
			stages[0].rgbGen = CGEN_IDENTITY_LIGHTING;
		}
		if ( ( stages[0].rgbGen == CGEN_WAVEFORM && stages[0].rgbWave.func == GF_INVERSE_SAWTOOTH )
			 && ( stages[1].rgbGen == CGEN_WAVEFORM && stages[1].rgbWave.func == GF_SAWTOOTH ) ) {
			stages[0].rgbGen = CGEN_IDENTITY_LIGHTING;
		}
	}

	for ( int stage = 1; stage < MAX_SHADER_STAGES; stage++ ) {
		shaderStage_t *pStage = &stages[stage];

		if ( !pStage->active ) {
			break;
		}

		memset( pStage, 0, sizeof( *pStage ) );
	}
}

/*
=================
idMaterial::CollapseMultitexture

Attempt to combine two stages into a single multitexture stage.
FIXME: I think modulated add + modulated add collapses incorrectly
=================
*/
bool idMaterial::CollapseMultitexture() {
	// make sure both stages are active
	if ( !stages[0].active || !stages[1].active ) {
		return false;
	}

	int abits = stages[0].stateBits;
	int bbits = stages[1].stateBits;

	// make sure that both stages have identical state other than blend modes
	if ( ( abits & ~( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS | GLS_DEPTHMASK_TRUE ) ) !=
		 ( bbits & ~( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS | GLS_DEPTHMASK_TRUE ) ) ) {
		return false;
	}

	abits &= ( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS );
	bbits &= ( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS );

	// search for a valid multitexture blend function
	int i;
	for ( i = 0; collapse[i].blendA != -1 ; i++ ) {
		if ( abits == collapse[i].blendA
			 && bbits == collapse[i].blendB ) {
			break;
		}
	}

	// nothing found
	if ( collapse[i].blendA == -1 ) {
		return false;
	}

	// make sure waveforms have identical parameters
	if ( ( stages[0].rgbGen != stages[1].rgbGen ) ||
		 ( stages[0].alphaGen != stages[1].alphaGen ) ) {
		return false;
	}

	// an add collapse can only have identity colors
	if ( collapse[i].multitextureEnv == GL_ADD && stages[0].rgbGen != CGEN_IDENTITY ) {
		return false;
	}

	if ( stages[0].rgbGen == CGEN_WAVEFORM ) {
		if ( memcmp( &stages[0].rgbWave, &stages[1].rgbWave, sizeof( stages[0].rgbWave ) ) ) {
			return false;
		}
	}
	if ( stages[0].alphaGen == AGEN_WAVEFORM ) {
		if ( memcmp( &stages[0].alphaWave, &stages[1].alphaWave, sizeof( stages[0].alphaWave ) ) ) {
			return false;
		}
	}

	// make sure that lightmaps are in bundle 1
	if ( stages[0].bundle[0].isLightmap ) {
		textureBundle_t tmpBundle = stages[0].bundle[0];
		stages[0].bundle[0] = stages[1].bundle[0];
		stages[0].bundle[1] = tmpBundle;
	} else {
		stages[0].bundle[1] = stages[1].bundle[0];
	}

	// set the new blend state bits
	multitextureEnv = collapse[i].multitextureEnv;
	stages[0].stateBits &= ~( GLS_DSTBLEND_BITS | GLS_SRCBLEND_BITS );
	stages[0].stateBits |= collapse[i].multitextureBlend;

	// move down subsequent shaders
	memmove( &stages[1], &stages[2], sizeof( stages[0] ) * ( MAX_SHADER_STAGES - 2 ) );
	memset( &stages[MAX_SHADER_STAGES - 1], 0, sizeof( stages[0] ) );

	return true;
}
