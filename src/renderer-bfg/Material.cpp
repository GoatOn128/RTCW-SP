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

The stage defaulting and the sort order of FinishShader in
src/renderer/tr_shader.c. The multitexture collapse, the vertex
lighting collapse and the stage iterator function are not ported:
this renderer draws every stage as a separate pass.
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

		// the engine drops the detail stages when r_detailTextures is
		// off; the stage is kept here and the frontend skips it when
		// the cvar is off

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
