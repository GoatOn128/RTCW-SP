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
#include "Material_local.h"
#include "ImageManager.h"
#include "Image_local.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <dirent.h>
#endif

/*

  The shader script translation, ported from src/renderer/tr_shader.c
  of this code base. The keyword handling of ParseShader and ParseStage,
  the helpers (ParseWaveForm, ParseTexMod, ParseDeform, ParseSkyParms,
  ParseSort, ParseSurfaceParm with the infoParms table) and the shader
  file scan of ScanAndLoadShaderFiles keep the behavior of the engine
  parser, so the existing .shader scripts parse with their original
  meaning.

  The engine parser works on the combined text of all shader files and
  resolves a definition when a shader is first looked up; this port
  keeps the same text and the same lazy resolution. The COM_ParseExt
  calls of the original are idLexer calls here: COM_ParseExt(text,
  qtrue) reads as idLexer::ReadToken and COM_ParseExt(text, qfalse)
  reads as idLexer::ReadTokenOnLine. The idLexer splits a leading '-'
  into its own token, so negative numbers are reassembled in the float
  helper.

  Deferred with the client systems they belong to: the videoMap
  playback needs the client cinematic system (the BFG renderer plays
  Bink instead), so the stage keeps the video file name and no image,
  and the runtime consumers of the kept settings (the sun lighting,
  the lightgrid and the fog) are frontend phases. Everything the
  engine parses has a home: the fog, sun and lightgrid values sit on
  the material manager like they sit in the engine's tr structure,
  clampTime sits on the material, and allowcompress and nocompress
  drive the image compression control of the image manager like the
  engine's tr.allowCompress.

*/

// the parse functions are static, the global shader settings land on
// the local manager instance like they land on the engine's tr
static idMaterialManagerLocal *parserManager = NULL;

/*
=================
ParseFloatParm

Reads the next token on the line and returns its float value. The
idLexer splits a leading '-' into its own token, so the sign is
reattached here. Sets present to false when the line has no more
tokens, the atof calls of the engine parser return 0 for those.
=================
*/
static float ParseFloatParm( idLexer *src, bool *present ) {
	idToken token;

	*present = true;
	if ( !src->ReadTokenOnLine( &token ) ) {
		*present = false;
		return 0.0f;
	}
	if ( token == "-" ) {
		if ( !src->ReadTokenOnLine( &token ) ) {
			*present = false;
			return 0.0f;
		}
		return -atof( token.c_str() );
	}
	return atof( token.c_str() );
}

/*
=================
ParseStringParm

Reads the next token on the line into the string.
=================
*/
static bool ParseStringParm( idLexer *src, idStr &out ) {
	idToken token;

	if ( !src->ReadTokenOnLine( &token ) ) {
		return false;
	}
	out = token;
	return true;
}

/*
=================
ReadMapName

Reads a texture name. The idLexer splits the '$' of the shader special
tokens into its own token, so $lightmap, $whiteimage and $dlight are
reassembled here.
=================
*/
static bool ReadMapName( idLexer *src, idStr &out ) {
	idToken token;

	if ( !src->ReadTokenOnLine( &token ) ) {
		return false;
	}
	out = token;
	if ( out == "$" ) {
		if ( !src->ReadTokenOnLine( &token ) ) {
			return false;
		}
		out += token;
	}
	return true;
}

/*
===============
ParseVector
===============
*/
static bool ParseVector( idLexer *src, int count, float *v ) {
	idToken token;

	// FIXME: spaces are currently required after parens, should change parseext...
	if ( !src->ReadTokenOnLine( &token ) || token != "(" ) {
		idLib::Warning( "WARNING: missing parenthesis in shader\n" );
		return false;
	}

	for ( int i = 0; i < count; i++ ) {
		bool present = false;
		v[i] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing vector element in shader\n" );
			return false;
		}
	}

	if ( !src->ReadTokenOnLine( &token ) || token != ")" ) {
		idLib::Warning( "WARNING: missing parenthesis in shader\n" );
		return false;
	}

	return true;
}

/*
===============
NameToAFunc
===============
*/
static unsigned NameToAFunc( const char *funcname ) {
	if ( !idStr::Icmp( funcname, "GT0" ) ) {
		return GLS_ATEST_GT_0;
	} else if ( !idStr::Icmp( funcname, "LT128" ) ) {
		return GLS_ATEST_LT_80;
	} else if ( !idStr::Icmp( funcname, "GE128" ) ) {
		return GLS_ATEST_GE_80;
	}

	idLib::Warning( "WARNING: invalid alphaFunc name '%s'\n", funcname );
	return 0;
}

/*
===============
NameToSrcBlendMode
===============
*/
static int NameToSrcBlendMode( const char *name ) {
	if ( !idStr::Icmp( name, "GL_ONE" ) ) {
		return GLS_SRCBLEND_ONE;
	} else if ( !idStr::Icmp( name, "GL_ZERO" ) ) {
		return GLS_SRCBLEND_ZERO;
	} else if ( !idStr::Icmp( name, "GL_DST_COLOR" ) ) {
		return GLS_SRCBLEND_DST_COLOR;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_DST_COLOR" ) ) {
		return GLS_SRCBLEND_ONE_MINUS_DST_COLOR;
	} else if ( !idStr::Icmp( name, "GL_SRC_ALPHA" ) ) {
		return GLS_SRCBLEND_SRC_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_SRC_ALPHA" ) ) {
		return GLS_SRCBLEND_ONE_MINUS_SRC_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_DST_ALPHA" ) ) {
		return GLS_SRCBLEND_DST_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_DST_ALPHA" ) ) {
		return GLS_SRCBLEND_ONE_MINUS_DST_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_SRC_ALPHA_SATURATE" ) ) {
		return GLS_SRCBLEND_ALPHA_SATURATE;
	}

	idLib::Warning( "WARNING: unknown blend mode '%s', substituting GL_ONE\n", name );
	return GLS_SRCBLEND_ONE;
}

/*
===============
NameToDstBlendMode
===============
*/
static int NameToDstBlendMode( const char *name ) {
	if ( !idStr::Icmp( name, "GL_ONE" ) ) {
		return GLS_DSTBLEND_ONE;
	} else if ( !idStr::Icmp( name, "GL_ZERO" ) ) {
		return GLS_DSTBLEND_ZERO;
	} else if ( !idStr::Icmp( name, "GL_SRC_ALPHA" ) ) {
		return GLS_DSTBLEND_SRC_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_SRC_ALPHA" ) ) {
		return GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_DST_ALPHA" ) ) {
		return GLS_DSTBLEND_DST_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_DST_ALPHA" ) ) {
		return GLS_DSTBLEND_ONE_MINUS_DST_ALPHA;
	} else if ( !idStr::Icmp( name, "GL_SRC_COLOR" ) ) {
		return GLS_DSTBLEND_SRC_COLOR;
	} else if ( !idStr::Icmp( name, "GL_ONE_MINUS_SRC_COLOR" ) ) {
		return GLS_DSTBLEND_ONE_MINUS_SRC_COLOR;
	}

	idLib::Warning( "WARNING: unknown blend mode '%s', substituting GL_ONE\n", name );
	return GLS_DSTBLEND_ONE;
}

/*
===============
NameToGenFunc
===============
*/
static genFunc_t NameToGenFunc( const char *funcname ) {
	if ( !idStr::Icmp( funcname, "sin" ) ) {
		return GF_SIN;
	} else if ( !idStr::Icmp( funcname, "square" ) ) {
		return GF_SQUARE;
	} else if ( !idStr::Icmp( funcname, "triangle" ) ) {
		return GF_TRIANGLE;
	} else if ( !idStr::Icmp( funcname, "sawtooth" ) ) {
		return GF_SAWTOOTH;
	} else if ( !idStr::Icmp( funcname, "inversesawtooth" ) ) {
		return GF_INVERSE_SAWTOOTH;
	} else if ( !idStr::Icmp( funcname, "noise" ) ) {
		return GF_NOISE;
	}

	idLib::Warning( "WARNING: invalid genfunc name '%s'\n", funcname );
	return GF_SIN;
}

/*
===================
ParseWaveForm
===================
*/
static void ParseWaveForm( idLexer *src, waveForm_t *wave ) {
	idToken token;
	bool present = false;

	if ( !src->ReadTokenOnLine( &token ) ) {
		idLib::Warning( "WARNING: missing waveform parm in shader\n" );
		return;
	}
	wave->func = NameToGenFunc( token );

	// BASE, AMP, PHASE, FREQ
	wave->base = ParseFloatParm( src, &present );
	if ( !present ) {
		idLib::Warning( "WARNING: missing waveform parm in shader\n" );
		return;
	}
	wave->amplitude = ParseFloatParm( src, &present );
	if ( !present ) {
		idLib::Warning( "WARNING: missing waveform parm in shader\n" );
		return;
	}
	wave->phase = ParseFloatParm( src, &present );
	if ( !present ) {
		idLib::Warning( "WARNING: missing waveform parm in shader\n" );
		return;
	}
	wave->frequency = ParseFloatParm( src, &present );
	if ( !present ) {
		idLib::Warning( "WARNING: missing waveform parm in shader\n" );
		return;
	}
}

/*
===================
ParseTexMod

The engine buffers the tcMod parameters into a string and parses them
back out; this port reads the parameters straight from the line, which
parses the same scripts.
===================
*/
static void ParseTexMod( idLexer *src, shaderStage_t *stage ) {
	idToken token;
	texModInfo_t *tmi;
	bool present = false;

	if ( stage->bundle[0].numTexMods == TR_MAX_TEXMODS ) {
		idLib::Warning( "WARNING: too many tcMod stages in shader\n" );
		return;
	}

	tmi = &stage->bundle[0].texMods[stage->bundle[0].numTexMods];
	stage->bundle[0].numTexMods++;

	if ( !src->ReadTokenOnLine( &token ) ) {
		idLib::Warning( "WARNING: missing tcMod parm in shader\n" );
		return;
	}

	//
	// swap
	//
	if ( !token.Icmp( "swap" ) ) { // swap S/T coords (rotate 90d)
		tmi->type = TMOD_SWAP;
	}
	//
	// turb
	//
	else if ( !token.Icmp( "turb" ) ) {
		tmi->wave.base = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing tcMod turb parms in shader\n" );
			return;
		}
		tmi->wave.amplitude = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing tcMod turb in shader\n" );
			return;
		}
		tmi->wave.phase = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing tcMod turb in shader\n" );
			return;
		}
		tmi->wave.frequency = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing tcMod turb in shader\n" );
			return;
		}

		tmi->type = TMOD_TURBULENT;
	}
	//
	// scale
	//
	else if ( !token.Icmp( "scale" ) ) {
		tmi->scale[0] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing scale parms in shader\n" );
			return;
		}

		tmi->scale[1] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing scale parms in shader\n" );
			return;
		}
		tmi->type = TMOD_SCALE;
	}
	//
	// scroll
	//
	else if ( !token.Icmp( "scroll" ) ) {
		tmi->scroll[0] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing scale scroll parms in shader\n" );
			return;
		}
		tmi->scroll[1] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing scale scroll parms in shader\n" );
			return;
		}
		tmi->type = TMOD_SCROLL;
	}
	//
	// stretch
	//
	else if ( !token.Icmp( "stretch" ) ) {
		if ( !src->ReadTokenOnLine( &token ) ) {
			idLib::Warning( "WARNING: missing stretch parms in shader\n" );
			return;
		}
		tmi->wave.func = NameToGenFunc( token );

		tmi->wave.base = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing stretch parms in shader\n" );
			return;
		}
		tmi->wave.amplitude = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing stretch parms in shader\n" );
			return;
		}
		tmi->wave.phase = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing stretch parms in shader\n" );
			return;
		}
		tmi->wave.frequency = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing stretch parms in shader\n" );
			return;
		}

		tmi->type = TMOD_STRETCH;
	}
	//
	// transform
	//
	else if ( !token.Icmp( "transform" ) ) {
		tmi->matrix[0][0] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}
		tmi->matrix[0][1] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}
		tmi->matrix[1][0] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}
		tmi->matrix[1][1] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}
		tmi->translate[0] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}
		tmi->translate[1] = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing transform parms in shader\n" );
			return;
		}

		tmi->type = TMOD_TRANSFORM;
	}
	//
	// rotate
	//
	else if ( !token.Icmp( "rotate" ) ) {
		tmi->rotateSpeed = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing tcMod rotate parms in shader\n" );
			return;
		}
		tmi->type = TMOD_ROTATE;
	}
	//
	// entityTranslate
	//
	else if ( !token.Icmp( "entityTranslate" ) ) {
		tmi->type = TMOD_ENTITY_TRANSLATE;
	} else
	{
		idLib::Warning( "WARNING: unknown tcMod '%s' in shader\n", token.c_str() );
	}
}

/*
===================
ParseStage

Fills the given stage of the material from the current lexer position.
===================
*/
static bool ParseStage( idLexer *src, idMaterial *shader, shaderStage_t *stage ) {
	int depthMaskBits = GLS_DEPTHMASK_TRUE, blendSrcBits = 0, blendDstBits = 0, atestBits = 0, depthFuncBits = 0;
	bool depthMaskExplicit = false;

	stage->active = true;

	while ( 1 )
	{
		idToken token;
		if ( !src->ReadToken( &token ) ) {
			idLib::Warning( "WARNING: no matching '}' found\n" );
			return false;
		}

		if ( token == "}" ) {
			break;
		}
		//
		// check special case for map16/map32/mapcomp/mapnocomp (compression enabled)
		// modern hardware runs with more than 16 bit color and with
		// texture compression available, so the map32 and mapcomp
		// variants apply and the others are ignored
		if ( !token.Icmp( "map16" ) ) {     // only use this texture if 16 bit color depth
			// ignore the map
			src->ReadTokenOnLine( &token );
			continue;
		} else if ( !token.Icmp( "map32" ) ) {     // only use this texture if more than 16 bit color depth
			token = "map";      // use this map
		} else if ( !token.Icmp( "mapcomp" ) ) {  // only use this texture if compression is enabled
			token = "map";      // use this map
		} else if ( !token.Icmp( "mapnocomp" ) ) { // only use this texture if compression is not available or disabled
			// ignore the map
			src->ReadTokenOnLine( &token );
			continue;
		} else if ( !token.Icmp( "animmapcomp" ) ) {      // only use this texture if compression is enabled
			token = "animmap";        // use this map
		} else if ( !token.Icmp( "animmapnocomp" ) ) {    // only use this texture if compression is not available or disabled
			// ignore the map
			while ( src->ReadTokenOnLine( &token ) ) {
			}
			continue;
		}
		//
		// map <name>
		//
		if ( !token.Icmp( "map" ) ) {
			idStr mapName;

			if ( !ReadMapName( src, mapName ) ) {
				idLib::Warning( "WARNING: missing parameter for 'map' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}

			//----(SA) fixes startup error and allows polygon shadows to work again
			if ( !mapName.Icmp( "$whiteimage" ) || !mapName.Icmp( "*white" ) ) {
				//----(SA) end
				stage->bundle[0].images[0] = imageManager->WhiteImage();
				stage->bundle[0].numImages = 1;
				continue;
			}
			//----(SA) added
			else if ( !mapName.Icmp( "$dlight" ) ) {
				stage->bundle[0].images[0] = imageManager->DlightImage();
				stage->bundle[0].numImages = 1;
				continue;
			}
			//----(SA) end
			else if ( !mapName.Icmp( "$lightmap" ) ) {
				stage->bundle[0].isLightmap = true;
				// the surface lightmap binds at draw time, a negative
				// lightmap index falls back to the white image
				continue;
			} else
			{
				idImage *image = imageManager->ImageFromFile( mapName.c_str(), !shader->noMipMaps,
															  !shader->noPicMip, shader->characterMip, GL_REPEAT );
				if ( image == NULL ) {
					idLib::Warning( "WARNING: R_FindImageFile could not find '%s' in shader '%s'\n", mapName.c_str(), shader->GetName() );
					return false;
				}
				stage->bundle[0].images[0] = image;
				stage->bundle[0].numImages = 1;
			}
		}
		//
		// clampmap <name>
		//
		// the image loads with GL_CLAMP, the engine loads a clampmap
		// through the same path as a map with the clamp wrap mode
		else if ( !token.Icmp( "clampmap" ) ) {
			idStr mapName;

			if ( !ReadMapName( src, mapName ) ) {
				idLib::Warning( "WARNING: missing parameter for 'clampmap' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}

			idImage *image = imageManager->ImageFromFile( mapName.c_str(), !shader->noMipMaps,
														  !shader->noPicMip, shader->characterMip, GL_CLAMP );
			if ( image == NULL ) {
				idLib::Warning( "WARNING: R_FindImageFile could not find '%s' in shader '%s'\n", mapName.c_str(), shader->GetName() );
				return false;
			}
			stage->bundle[0].images[0] = image;
			stage->bundle[0].numImages = 1;
		}
		//
		// animMap <frequency> <image1> .... <imageN>
		//
		else if ( !token.Icmp( "animMap" ) ) {
			bool present = false;
			stage->bundle[0].imageAnimationSpeed = ParseFloatParm( src, &present );
			if ( !present ) {
				idLib::Warning( "WARNING: missing parameter for 'animMmap' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}

			// parse up to MAX_IMAGE_ANIMATIONS animations
			while ( 1 ) {
				idStr mapName;

				if ( !ParseStringParm( src, mapName ) ) {
					break;
				}
				int num = stage->bundle[0].numImages;
				if ( num < MAX_IMAGE_ANIMATIONS ) {
					idImage *image = imageManager->ImageFromFile( mapName.c_str(), !shader->noMipMaps,
																  !shader->noPicMip, shader->characterMip, GL_REPEAT );
					if ( image == NULL ) {
						idLib::Warning( "WARNING: R_FindImageFile could not find '%s' in shader '%s'\n", mapName.c_str(), shader->GetName() );
						return false;
					}
					stage->bundle[0].images[num] = image;
					stage->bundle[0].numImages++;
				}
			}
		} else if ( !token.Icmp( "videoMap" ) ) {
			idStr videoName;

			// the cinematic playback needs the client cinematic system
			// (the BFG renderer plays Bink instead), so the stage keeps
			// the video file name and no image until it lands
			if ( !ParseStringParm( src, videoName ) ) {
				idLib::Warning( "WARNING: missing parameter for 'videoMmap' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}
			stage->bundle[0].isVideoMap = true;
			stage->bundle[0].videoMapName = videoName;
		}
		//
		// alphafunc <func>
		//
		else if ( !token.Icmp( "alphaFunc" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parameter for 'alphaFunc' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}

			atestBits = NameToAFunc( token.c_str() );
		}
		//
		// depthFunc <func>
		//
		else if ( !token.Icmp( "depthfunc" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parameter for 'depthfunc' keyword in shader '%s'\n", shader->GetName() );
				return false;
			}

			if ( !token.Icmp( "lequal" ) ) {
				depthFuncBits = 0;
			} else if ( !token.Icmp( "equal" ) ) {
				depthFuncBits = GLS_DEPTHFUNC_EQUAL;
			} else
			{
				idLib::Warning( "WARNING: unknown depthfunc '%s' in shader '%s'\n", token.c_str(), shader->GetName() );
				continue;
			}
		}
		//
		// detail
		//
		else if ( !token.Icmp( "detail" ) ) {
			stage->isDetail = true;
		}
		//
		// fog
		//
		else if ( !token.Icmp( "fog" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parm for fog in shader '%s'\n", shader->GetName() );
				continue;
			}
			if ( !token.Icmp( "on" ) ) {
				stage->isFogged = true;
			} else {
				stage->isFogged = false;
			}
		}
		//
		// blendfunc <srcFactor> <dstFactor>
		// or blendfunc <add|filter|blend>
		//
		else if ( !token.Icmp( "blendfunc" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parm for blendFunc in shader '%s'\n", shader->GetName() );
				continue;
			}
			// check for "simple" blends first
			if ( !token.Icmp( "add" ) ) {
				blendSrcBits = GLS_SRCBLEND_ONE;
				blendDstBits = GLS_DSTBLEND_ONE;
			} else if ( !token.Icmp( "filter" ) ) {
				blendSrcBits = GLS_SRCBLEND_DST_COLOR;
				blendDstBits = GLS_DSTBLEND_ZERO;
			} else if ( !token.Icmp( "blend" ) ) {
				blendSrcBits = GLS_SRCBLEND_SRC_ALPHA;
				blendDstBits = GLS_DSTBLEND_ONE_MINUS_SRC_ALPHA;
			} else {
				// complex double blends
				blendSrcBits = NameToSrcBlendMode( token.c_str() );

				if ( !src->ReadTokenOnLine( &token ) ) {
					idLib::Warning( "WARNING: missing parm for blendFunc in shader '%s'\n", shader->GetName() );
					continue;
				}
				blendDstBits = NameToDstBlendMode( token.c_str() );
			}

			// clear depth mask for blended surfaces
			if ( !depthMaskExplicit ) {
				depthMaskBits = 0;
			}
		}
		//
		// rgbGen
		//
		else if ( !token.Icmp( "rgbGen" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parameters for rgbGen in shader '%s'\n", shader->GetName() );
				continue;
			}

			if ( !token.Icmp( "wave" ) ) {
				ParseWaveForm( src, &stage->rgbWave );
				stage->rgbGen = CGEN_WAVEFORM;
			} else if ( !token.Icmp( "const" ) ) {
				float color[3];

				ParseVector( src, 3, color );
				stage->constantColor[0] = 255 * color[0];
				stage->constantColor[1] = 255 * color[1];
				stage->constantColor[2] = 255 * color[2];

				stage->rgbGen = CGEN_CONST;
			} else if ( !token.Icmp( "identity" ) ) {
				stage->rgbGen = CGEN_IDENTITY;
			} else if ( !token.Icmp( "identityLighting" ) ) {
				stage->rgbGen = CGEN_IDENTITY_LIGHTING;
			} else if ( !token.Icmp( "entity" ) ) {
				stage->rgbGen = CGEN_ENTITY;
			} else if ( !token.Icmp( "oneMinusEntity" ) ) {
				stage->rgbGen = CGEN_ONE_MINUS_ENTITY;
			} else if ( !token.Icmp( "vertex" ) ) {
				stage->rgbGen = CGEN_VERTEX;
				if ( stage->alphaGen == AGEN_IDENTITY ) {
					stage->alphaGen = AGEN_VERTEX;
				}
			} else if ( !token.Icmp( "exactVertex" ) ) {
				stage->rgbGen = CGEN_EXACT_VERTEX;
			} else if ( !token.Icmp( "lightingDiffuse" ) ) {
				stage->rgbGen = CGEN_LIGHTING_DIFFUSE;
			} else if ( !token.Icmp( "oneMinusVertex" ) ) {
				stage->rgbGen = CGEN_ONE_MINUS_VERTEX;
			} else
			{
				idLib::Warning( "WARNING: unknown rgbGen parameter '%s' in shader '%s'\n", token.c_str(), shader->GetName() );
				continue;
			}
		}
		//
		// alphaGen
		//
		else if ( !token.Icmp( "alphaGen" ) ) {
			bool present = false;

			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing parameters for alphaGen in shader '%s'\n", shader->GetName() );
				continue;
			}

			if ( !token.Icmp( "wave" ) ) {
				ParseWaveForm( src, &stage->alphaWave );
				stage->alphaGen = AGEN_WAVEFORM;
			} else if ( !token.Icmp( "const" ) ) {
				stage->constantColor[3] = 255 * ParseFloatParm( src, &present );
				stage->alphaGen = AGEN_CONST;
			} else if ( !token.Icmp( "identity" ) ) {
				stage->alphaGen = AGEN_IDENTITY;
			} else if ( !token.Icmp( "entity" ) ) {
				stage->alphaGen = AGEN_ENTITY;
			} else if ( !token.Icmp( "oneMinusEntity" ) ) {
				stage->alphaGen = AGEN_ONE_MINUS_ENTITY;
			}
			// Ridah
			else if ( !token.Icmp( "normalzfade" ) ) {
				stage->alphaGen = AGEN_NORMALZFADE;
				float value = ParseFloatParm( src, &present );
				if ( present ) {
					stage->constantColor[3] = 255 * value;
				} else {
					stage->constantColor[3] = 255;
				}

				value = ParseFloatParm( src, &present );
				if ( present ) {
					stage->zFadeBounds[0] = value;      // lower range
					value = ParseFloatParm( src, &present );
					stage->zFadeBounds[1] = value;      // upper range
				} else {
					stage->zFadeBounds[0] = -1.0;        // lower range
					stage->zFadeBounds[1] = 1.0;         // upper range
				}

			}
			// done.
			else if ( !token.Icmp( "vertex" ) ) {
				stage->alphaGen = AGEN_VERTEX;
			} else if ( !token.Icmp( "lightingSpecular" ) ) {
				stage->alphaGen = AGEN_LIGHTING_SPECULAR;
			} else if ( !token.Icmp( "oneMinusVertex" ) ) {
				stage->alphaGen = AGEN_ONE_MINUS_VERTEX;
			} else if ( !token.Icmp( "portal" ) ) {
				stage->alphaGen = AGEN_PORTAL;
				float value = ParseFloatParm( src, &present );
				if ( !present ) {
					shader->portalRange = 256;
					idLib::Warning( "WARNING: missing range parameter for alphaGen portal in shader '%s', defaulting to 256\n", shader->GetName() );
				} else
				{
					shader->portalRange = value;
				}
			} else
			{
				idLib::Warning( "WARNING: unknown alphaGen parameter '%s' in shader '%s'\n", token.c_str(), shader->GetName() );
				continue;
			}
		}
		//
		// tcGen <function>
		//
		else if ( !token.Icmp( "texgen" ) || !token.Icmp( "tcGen" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing texgen parm in shader '%s'\n", shader->GetName() );
				continue;
			}

			if ( !token.Icmp( "environment" ) ) {
				stage->bundle[0].tcGen = TCGEN_ENVIRONMENT_MAPPED;
			} else if ( !token.Icmp( "firerisenv" ) ) {
				stage->bundle[0].tcGen = TCGEN_FIRERISEENV_MAPPED;
			} else if ( !token.Icmp( "lightmap" ) ) {
				stage->bundle[0].tcGen = TCGEN_LIGHTMAP;
			} else if ( !token.Icmp( "texture" ) || !token.Icmp( "base" ) ) {
				stage->bundle[0].tcGen = TCGEN_TEXTURE;
			} else if ( !token.Icmp( "vector" ) ) {
				ParseVector( src, 3, stage->bundle[0].tcGenVectors[0] );
				ParseVector( src, 3, stage->bundle[0].tcGenVectors[1] );

				stage->bundle[0].tcGen = TCGEN_VECTOR;
			} else
			{
				idLib::Warning( "WARNING: unknown texgen parm in shader '%s'\n", shader->GetName() );
			}
		}
		//
		// tcMod <type> <...>
		//
		else if ( !token.Icmp( "tcMod" ) ) {
			ParseTexMod( src, stage );

			continue;
		}
		//
		// depthmask
		//
		else if ( !token.Icmp( "depthwrite" ) ) {
			depthMaskBits = GLS_DEPTHMASK_TRUE;
			depthMaskExplicit = true;

			continue;
		} else
		{
			idLib::Warning( "WARNING: unknown parameter '%s' in shader '%s'\n", token.c_str(), shader->GetName() );
			return false;
		}
	}

	//
	// if cgen isn't explicitly specified, use either identity or identitylighting
	//
	if ( stage->rgbGen == CGEN_BAD ) {
		if ( blendSrcBits == 0 ||
			 blendSrcBits == GLS_SRCBLEND_ONE ||
			 blendSrcBits == GLS_SRCBLEND_SRC_ALPHA ) {
			stage->rgbGen = CGEN_IDENTITY_LIGHTING;
		} else {
			stage->rgbGen = CGEN_IDENTITY;
		}
	}


	//
	// implicitly assume that a GL_ONE GL_ZERO blend mask disables blending
	//
	if ( ( blendSrcBits == GLS_SRCBLEND_ONE ) &&
		 ( blendDstBits == GLS_DSTBLEND_ZERO ) ) {
		blendDstBits = blendSrcBits = 0;
		depthMaskBits = GLS_DEPTHMASK_TRUE;
	}

	// decide which agens we can skip
	// kept as shipped: CGEN_IDENTITY matches AGEN_ENTITY numerically
	if ( ( int )stage->alphaGen == CGEN_IDENTITY ) {
		if ( stage->rgbGen == CGEN_IDENTITY
			 || stage->rgbGen == CGEN_LIGHTING_DIFFUSE ) {
			stage->alphaGen = AGEN_SKIP;
		}
	}

	//
	// compute state bits
	//
	stage->stateBits = depthMaskBits |
					   blendSrcBits | blendDstBits |
					   atestBits |
					   depthFuncBits;

	return true;
}

/*
===============
ParseDeform

deformVertexes wave <spread> <waveform> <base> <amplitude> <phase> <frequency>
deformVertexes normal <frequency> <amplitude>
deformVertexes move <vector> <waveform> <base> <amplitude> <phase> <frequency>
deformVertexes bulge <bulgeWidth> <bulgeHeight> <bulgeSpeed>
deformVertexes projectionShadow
deformVertexes autoSprite
deformVertexes autoSprite2
deformVertexes text[0-7]
===============
*/
static void ParseDeform( idLexer *src, idMaterial *shader ) {
	idToken token;
	deformStage_t *ds;
	bool present = false;

	if ( !src->ReadTokenOnLine( &token ) ) {
		idLib::Warning( "WARNING: missing deform parm in shader '%s'\n", shader->GetName() );
		return;
	}

	if ( shader->numDeforms == MAX_SHADER_DEFORMS ) {
		idLib::Warning( "WARNING: MAX_SHADER_DEFORMS in '%s'\n", shader->GetName() );
		return;
	}

	ds = &shader->deforms[shader->numDeforms];
	shader->numDeforms++;

	if ( !token.Icmp( "projectionShadow" ) ) {
		ds->deformation = DEFORM_PROJECTION_SHADOW;
		return;
	}

	if ( !token.Icmp( "autosprite" ) ) {
		ds->deformation = DEFORM_AUTOSPRITE;
		return;
	}

	if ( !token.Icmp( "autosprite2" ) ) {
		ds->deformation = DEFORM_AUTOSPRITE2;
		return;
	}

	if ( !token.Icmpn( "text", 4 ) ) {
		int n;

		n = token[4] - '0';
		if ( n < 0 || n > 7 ) {
			n = 0;
		}
		ds->deformation = ( deform_t )( DEFORM_TEXT0 + n );
		return;
	}

	if ( !token.Icmp( "bulge" ) ) {
		ds->bulgeWidth = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes bulge parm in shader '%s'\n", shader->GetName() );
			return;
		}

		ds->bulgeHeight = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes bulge parm in shader '%s'\n", shader->GetName() );
			return;
		}

		ds->bulgeSpeed = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes bulge parm in shader '%s'\n", shader->GetName() );
			return;
		}

		ds->deformation = DEFORM_BULGE;
		return;
	}

	if ( !token.Icmp( "wave" ) ) {
		float spread = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes parm in shader '%s'\n", shader->GetName() );
			return;
		}

		if ( spread != 0 ) {
			ds->deformationSpread = 1.0f / spread;
		} else
		{
			ds->deformationSpread = 100.0f;
			idLib::Warning( "WARNING: illegal div value of 0 in deformVertexes command for shader '%s'\n", shader->GetName() );
		}

		ParseWaveForm( src, &ds->deformationWave );
		ds->deformation = DEFORM_WAVE;
		return;
	}

	if ( !token.Icmp( "normal" ) ) {
		ds->deformationWave.amplitude = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes parm in shader '%s'\n", shader->GetName() );
			return;
		}

		ds->deformationWave.frequency = ParseFloatParm( src, &present );
		if ( !present ) {
			idLib::Warning( "WARNING: missing deformVertexes parm in shader '%s'\n", shader->GetName() );
			return;
		}

		ds->deformation = DEFORM_NORMALS;
		return;
	}

	if ( !token.Icmp( "move" ) ) {
		int i;

		for ( i = 0; i < 3; i++ ) {
			ds->moveVector[i] = ParseFloatParm( src, &present );
			if ( !present ) {
				idLib::Warning( "WARNING: missing deformVertexes parm in shader '%s'\n", shader->GetName() );
				return;
			}
		}

		ParseWaveForm( src, &ds->deformationWave );
		ds->deformation = DEFORM_MOVE;
		return;
	}

	idLib::Warning( "WARNING: unknown deformVertexes subtype '%s' found in shader '%s'\n", token.c_str(), shader->GetName() );
}

/*
===============
ParseSkyParms

skyParms <outerbox> <cloudheight> <innerbox>

The engine loads the six box images right here with the _rt, _bk, _lf,
_ft, _up and _dn suffixes; a box side that does not load falls back to
the default image.
===============
*/
static void ParseSkyParms( idLexer *src, idMaterial *shader ) {
	idStr token;
	static const char *suf[6] = { "rt", "bk", "lf", "ft", "up", "dn" };

	// outerbox
	if ( !ParseStringParm( src, token ) ) {
		idLib::Warning( "WARNING: 'skyParms' missing parameter in shader '%s'\n", shader->GetName() );
		return;
	}
	if ( token != "-" ) {
		for ( int i = 0; i < 6; i++ ) {
			idStr pathname = token;
			pathname += "_";
			pathname += suf[i];
			pathname += ".tga";
			idImage *image = imageManager->ImageFromFile( pathname.c_str(), true, true, false, GL_CLAMP );
			if ( image == NULL ) {
				image = imageManager->DefaultImage();
			}
			shader->sky.outerbox[i] = image;
		}
	}

	// cloudheight
	if ( !ParseStringParm( src, token ) ) {
		idLib::Warning( "WARNING: 'skyParms' missing parameter in shader '%s'\n", shader->GetName() );
		return;
	}
	shader->sky.cloudHeight = atof( token.c_str() );
	if ( !shader->sky.cloudHeight ) {
		shader->sky.cloudHeight = 512;
	}
	// the engine initializes the sky texture coordinates here, the
	// frontend does that at draw time

	// innerbox
	if ( !ParseStringParm( src, token ) ) {
		idLib::Warning( "WARNING: 'skyParms' missing parameter in shader '%s'\n", shader->GetName() );
		return;
	}
	if ( token != "-" ) {
		for ( int i = 0; i < 6; i++ ) {
			idStr pathname = token;
			pathname += "_";
			pathname += suf[i];
			pathname += ".tga";
			idImage *image = imageManager->ImageFromFile( pathname.c_str(), true, true, false, GL_CLAMP );
			if ( image == NULL ) {
				image = imageManager->DefaultImage();
			}
			shader->sky.innerbox[i] = image;
		}
	}

	shader->isSky = true;
}

/*
=================
ParseSort
=================
*/
static void ParseSort( idLexer *src, idMaterial *shader ) {
	idToken token;

	if ( !src->ReadTokenOnLine( &token ) ) {
		idLib::Warning( "WARNING: missing sort parameter in shader '%s'\n", shader->GetName() );
		return;
	}

	if ( !token.Icmp( "portal" ) ) {
		shader->sort = SS_PORTAL;
	} else if ( !token.Icmp( "sky" ) ) {
		shader->sort = SS_ENVIRONMENT;
	} else if ( !token.Icmp( "opaque" ) ) {
		shader->sort = SS_OPAQUE;
	} else if ( !token.Icmp( "decal" ) ) {
		shader->sort = SS_DECAL;
	} else if ( !token.Icmp( "seeThrough" ) ) {
		shader->sort = SS_SEE_THROUGH;
	} else if ( !token.Icmp( "banner" ) ) {
		shader->sort = SS_BANNER;
	} else if ( !token.Icmp( "additive" ) ) {
		shader->sort = SS_BLEND1;
	} else if ( !token.Icmp( "nearest" ) ) {
		shader->sort = SS_NEAREST;
	} else if ( !token.Icmp( "underwater" ) ) {
		shader->sort = SS_UNDERWATER;
	} else {
		// the engine stores the numeric sorts in the same field
		shader->sort = ( int )atof( token.c_str() );
	}
}

// this table is also present in q3map

typedef struct {
	const char *name;
	int clearSolid, surfaceFlags, contents;
} infoParm_t;

static infoParm_t infoParms[] = {
	// server relevant contents

//----(SA) modified
	{"clipmissile",  1,  0, CONTENTS_MISSILECLIP},        // impact only specific weapons (rl, gl)
//----(SA) end

// RF, AI sight
	{"ai_nosight",   1,  0,  CONTENTS_AI_NOSIGHT},
	{"clipshot", 1,  0,  CONTENTS_CLIPSHOT},          // stops bullets
// RF, end

	{"water",        1,  0,  CONTENTS_WATER },
	{"slag",     1,  0,  CONTENTS_SLIME },        // uses the CONTENTS_SLIME flag, but the shader reference is changed to 'slag'
	// to idendify that this doesn't work the same as 'slime' did.
	// (slime hurts instantly, slag doesn't)
//	{"slime",		1,	0,	CONTENTS_SLIME },		// mildly damaging
	{"lava",     1,  0,  CONTENTS_LAVA },         // very damaging
	{"playerclip",   1,  0,  CONTENTS_PLAYERCLIP },
	{"monsterclip",  1,  0,  CONTENTS_MONSTERCLIP },
	{"nodrop",       1,  0,  (int)CONTENTS_NODROP },  // don't drop items or leave bodies (death fog, lava, etc)
	{"nonsolid", 1,  SURF_NONSOLID,  0},                      // clears the solid flag

	// utility relevant attributes
	{"origin",       1,  0,  CONTENTS_ORIGIN },      // center of rotating brushes
	{"trans",        0,  0,  CONTENTS_TRANSLUCENT }, // don't eat contained surfaces
	{"detail",       0,  0,  CONTENTS_DETAIL },       // don't include in structural bsp
	{"structural",   0,  0,  CONTENTS_STRUCTURAL },  // force into structural bsp even if trnas
	{"areaportal",   1,  0,  CONTENTS_AREAPORTAL },  // divides areas
	{"clusterportal", 1, 0,  CONTENTS_CLUSTERPORTAL },    // for bots
	{"donotenter",  1,  0,  CONTENTS_DONOTENTER },       // for bots

	// Rafael - nopass
	{"donotenterlarge", 1, 0,    CONTENTS_DONOTENTER_LARGE }, // for larger bots

	{"fog",          1,  0,  CONTENTS_FOG},          // carves surfaces entering
	{"sky",          0,  SURF_SKY,       0 },        // emit light from an environment map
	{"lightfilter",  0,  SURF_LIGHTFILTER, 0 },      // filter light going through it
	{"alphashadow",  0,  SURF_ALPHASHADOW, 0 },      // test light on a per-pixel basis
	{"hint",     0,  SURF_HINT,      0 },        // use as a primary splitter

	// server attributes
	{"slick",            0,  SURF_SLICK,     0 },
	{"noimpact",     0,  SURF_NOIMPACT,  0 },        // don't make impact explosions or marks
	{"nomarks",          0,  SURF_NOMARKS,   0 },        // don't make impact marks, but still explode
	{"ladder",           0,  SURF_LADDER,    0 },
	{"nodamage",     0,  SURF_NODAMAGE,  0 },

	{"monsterslick", 0,  SURF_MONSTERSLICK,  0},     // surf only slick for monsters

//	{"flesh",		0,	SURF_FLESH,		0 },
	{"glass",        0,  SURF_GLASS,     0 },    //----(SA) added
	{"ceramic",      0,  SURF_CERAMIC,   0 },    //----(SA) added

	// steps
	{"metal",        0,  SURF_METAL,     0 },
	{"metalsteps",   0,  SURF_METAL,     0 },    // retain bw compatibility with Q3A metal shaders... (SA)
	{"nosteps",      0,  SURF_NOSTEPS,   0 },
	{"woodsteps",    0,  SURF_WOOD,      0 },
	{"grasssteps",   0,  SURF_GRASS,     0 },
	{"gravelsteps",  0,  SURF_GRAVEL,    0 },
	{"carpetsteps",  0,  SURF_CARPET,    0 },
	{"snowsteps",    0,  SURF_SNOW,      0 },
	{"roofsteps",    0,  SURF_ROOF,      0 },    // tile roof

	{"rubble", 0, SURF_RUBBLE, 0 },

	// drawsurf attributes
	{"nodraw",       0,  SURF_NODRAW,    0 },    // don't generate a drawsurface (or a lightmap)
	{"pointlight",   0,  SURF_POINTLIGHT, 0 },   // sample lighting at vertexes
	{"nolightmap",   0,  SURF_NOLIGHTMAP, 0 },       // don't generate a lightmap
	{"nodlight", 0, SURF_NODLIGHT, 0 },     // don't ever add dynamic lights

	{"monsterslicknorth",    0, SURF_MONSLICK_N, 0},
	{"monsterslickeast", 0, SURF_MONSLICK_E, 0},
	{"monsterslicksouth",    0, SURF_MONSLICK_S, 0},
	{"monsterslickwest", 0, SURF_MONSLICK_W, 0}

};

/*
===============
ParseSurfaceParm

surfaceparm <name>
===============
*/
static void ParseSurfaceParm( idLexer *src, idMaterial *shader ) {
	idToken token;
	int numInfoParms = sizeof( infoParms ) / sizeof( infoParms[0] );
	int i;

	if ( !src->ReadTokenOnLine( &token ) ) {
		return;
	}
	for ( i = 0; i < numInfoParms; i++ ) {
		if ( !token.Icmp( infoParms[i].name ) ) {
			shader->surfaceFlags |= infoParms[i].surfaceFlags;
			shader->contentFlags |= infoParms[i].contents;
#if 0
			if ( infoParms[i].clearSolid ) {
				si->contents &= ~CONTENTS_SOLID;
			}
#endif
			break;
		}
	}
}

/*
=================
ParseShader

The current lexer position is at the explicit text definition of the
shader (behind the name token, at the opening brace). Parse it into
the material.
=================
*/
static bool ParseShader( idLexer *src, idMaterial *shader ) {
	int s = 0;

	idToken token;
	if ( !src->ReadToken( &token ) || token != "{" ) {
		idLib::Warning( "WARNING: expecting '{', found '%s' instead in shader '%s'\n", token.c_str(), shader->GetName() );
		return false;
	}

	while ( 1 )
	{
		if ( !src->ReadToken( &token ) ) {
			idLib::Warning( "WARNING: no concluding '}' in shader %s\n", shader->GetName() );
			return false;
		}

		// end of shader definition
		if ( token == "}" ) {
			break;
		}
		// stage definition
		else if ( token == "{" ) {
			// the engine has no bound check here; a malformed shader
			// with too many stages would overflow its stage array
			if ( s == MAX_SHADER_STAGES ) {
				idLib::Warning( "WARNING: too many stages in shader '%s'\n", shader->GetName() );
				return false;
			}
			if ( !ParseStage( src, shader, &shader->stages[s] ) ) {
				return false;
			}
			shader->stages[s].active = true;
			s++;
			continue;
		}
		// skip stuff that only the QuakeEdRadient needs
		else if ( !token.Icmpn( "qer", 3 ) ) {
			src->SkipRestOfLine();
			continue;
		}
		// sun parms
		else if ( !token.Icmp( "q3map_sun" ) ) {
			// the sun lighting is a light phase concern, the parsed
			// parameters are kept like the engine keeps tr.sunLight and
			// tr.sunDirection
			bool present;

			float r = ParseFloatParm( src, &present );
			float g = ParseFloatParm( src, &present );
			float b = ParseFloatParm( src, &present );

			float length = sqrtf( r * r + g * g + b * b );
			if ( length > 0.0f ) {
				r /= length;
				g /= length;
				b /= length;
			}

			// the sun intensity scales the normalized color
			float intensity = ParseFloatParm( src, &present );
			r *= intensity;
			g *= intensity;
			b *= intensity;

			// the sun direction comes as azimuth and elevation in degrees
			float a = ParseFloatParm( src, &present );
			a = a / 180 * idMath::PI;
			float elevation = ParseFloatParm( src, &present );
			elevation = elevation / 180 * idMath::PI;

			parserManager->sunLight[0] = r;
			parserManager->sunLight[1] = g;
			parserManager->sunLight[2] = b;
			parserManager->sunDirection[0] = cosf( a ) * cosf( elevation );
			parserManager->sunDirection[1] = sinf( a ) * cosf( elevation );
			parserManager->sunDirection[2] = sinf( elevation );
			continue;
		} else if ( !token.Icmp( "deformVertexes" ) ) {
			ParseDeform( src, shader );
			continue;
		} else if ( !token.Icmp( "tesssize" ) ) {
			src->SkipRestOfLine();
			continue;
		} else if ( !token.Icmp( "clampTime" ) ) {
			// the state shader time clamping is a frontend concern, the
			// engine keeps the value on the shader
			if ( src->ReadTokenOnLine( &token ) ) {
				shader->clampTime = atof( token.c_str() );
			}
		}
		// skip stuff that only the q3map needs
		else if ( !token.Icmpn( "q3map", 5 ) ) {
			src->SkipRestOfLine();
			continue;
		}
		// skip stuff that only q3map or the server needs
		else if ( !token.Icmp( "surfaceParm" ) ) {
			ParseSurfaceParm( src, shader );
			continue;
		}
		// no mip maps
		else if ( !token.Icmp( "nomipmaps" ) ) {
			shader->noMipMaps = true;
			shader->noPicMip = true;
			continue;
		}
		// no picmip adjustment
		else if ( !token.Icmp( "nopicmip" ) ) {
			shader->noPicMip = true;
			continue;
		}
		// character picmip adjustment
		else if ( !token.Icmp( "picmip2" ) ) {
			shader->characterMip = true;
			continue;
		}
		// polygonOffset
		else if ( !token.Icmp( "polygonOffset" ) ) {
			shader->polygonOffset = true;
			continue;
		}
		// entityMergable, allowing sprite surfaces from multiple entities
		// to be merged into one batch.  This is a savings for smoke
		// puffs and blood, but can't be used for anything where the
		// shader calcs (not the surface function) reference the entity color or scroll
		else if ( !token.Icmp( "entityMergable" ) ) {
			shader->entityMergable = true;
			continue;
		}
		// fogParms
		else if ( !token.Icmp( "fogParms" ) ) {
			if ( !ParseVector( src, 3, shader->fogParms.color ) ) {
				return false;
			}

			bool present = false;
			shader->fogParms.depthForOpaque = ParseFloatParm( src, &present );
			if ( !present ) {
				idLib::Warning( "WARNING: missing parm for 'fogParms' keyword in shader '%s'\n", shader->GetName() );
				continue;
			}

			// skip any old gradient directions
			src->SkipRestOfLine();
			continue;
		}
		// portal
		else if ( !token.Icmp( "portal" ) ) {
			shader->sort = SS_PORTAL;
			continue;
		}
		// skyparms <cloudheight> <outerbox> <innerbox>
		else if ( !token.Icmp( "skyparms" ) ) {
			ParseSkyParms( src, shader );
			continue;
		}
		// skyfogvars <(r,g,b)> <dist>
		else if ( !token.Icmp( "skyfogvars" ) ) {
			// the runtime fog is a frontend concern, the parsed values
			// are kept like the engine hands them to R_SetFog
			float fogColor[3];
			if ( !ParseVector( src, 3, fogColor ) ) {
				return false;
			}
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing density value for sky fog\n" );
				continue;
			}
			const float density = atof( token.c_str() );
			if ( density > 1 ) {
				idLib::Warning( "WARNING: last value for skyfogvars is 'density' which needs to be 0.0-1.0\n" );
				continue;
			}
			parserManager->skyFogColor[0] = fogColor[0];
			parserManager->skyFogColor[1] = fogColor[1];
			parserManager->skyFogColor[2] = fogColor[2];
			parserManager->skyFogDensity = density;
			parserManager->skyFogDefined = true;
			continue;
		} else if ( !token.Icmp( "sunshader" ) ) {
			// the sun shader draws the sun disc, a light phase concern;
			// the name is kept like the engine keeps tr.sunShaderName
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing shader name for 'sunshader'\n" );
				continue;
			}
			parserManager->sunShaderName = token;
		}
//----(SA) added
		else if ( !token.Icmp( "lightgridmulamb" ) ) { // ambient multiplier for lightgrid
			// the lightgrid runtime is a frontend concern, the parsed
			// value is kept like the engine keeps tr.lightGridMulAmbient
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing value for 'lightgrid ambient multiplier'\n" );
				continue;
			}
			const float value = atof( token.c_str() );
			if ( value > 0 ) {
				parserManager->lightGridMulAmbient = value;
			}
		} else if ( !token.Icmp( "lightgridmuldir" ) ) {        // directional multiplier for lightgrid
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing value for 'lightgrid directional multiplier'\n" );
				continue;
			}
			const float value = atof( token.c_str() );
			if ( value > 0 ) {
				parserManager->lightGridMulDirected = value;
			}
		}
//----(SA) end
		else if ( !token.Icmp( "waterfogvars" ) ) {
			// the runtime fog is a frontend concern; the engine builds
			// a fog string and hands it to the r_waterFogColor cvar,
			// this port keeps the string on the material manager
			float watercolor[3];
			if ( !ParseVector( src, 3, watercolor ) ) {
				return false;
			}
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing density/distance value for water fog\n" );
				continue;
			}
			const float fogvar = atof( token.c_str() );

			if ( fogvar == 0 ) {
				// '0' means "use the map values for everything except
				// the fog color", the engine leaves this case open too
			} else if ( fogvar > 1 ) {       // distance "linear" fog
				parserManager->waterFogString.Format( "0 %d 1.1 %f %f %f 200", ( int )fogvar,
													  watercolor[0], watercolor[1], watercolor[2] );
			} else {                        // density "exp" fog
				parserManager->waterFogString.Format( "0 5 %f %f %f %f 200", fogvar,
													  watercolor[0], watercolor[1], watercolor[2] );
			}
			continue;
		}
		// fogvars
		else if ( !token.Icmp( "fogvars" ) ) {
			// the runtime fog is a frontend concern; the engine builds
			// a fog string and hands it to the r_mapFogColor cvar,
			// this port keeps the string on the material manager
			float fogColor[3];
			if ( !ParseVector( src, 3, fogColor ) ) {
				return false;
			}
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing density value for the fog\n" );
				continue;
			}

			// fogFar > 1 means the shader sets the farclip, < 1 the density
			const float fogDensity = atof( token.c_str() );
			const int fogFar = ( fogDensity >= 1 ) ? ( int )fogDensity : 5;

			parserManager->mapFogString.Format( "0 %d %f %f %f %f 0", fogFar,
												fogDensity, fogColor[0], fogColor[1], fogColor[2] );
			continue;
		}
		// done.
		// Ridah, allow disable fog for some shaders
		else if ( !token.Icmp( "nofog" ) ) {
			shader->noFog = true;
			continue;
		}
		// done.
		// RF, allow each shader to permit compression if available
		else if ( !token.Icmp( "allowcompress" ) ) {
			// the shader compression control of the engine's
			// tr.allowCompress, the image manager carries it
			imageManager->SetAllowCompress( 1 );
			continue;
		} else if ( !token.Icmp( "nocompress" ) ) {
			imageManager->SetAllowCompress( -1 );
			continue;
		}
		// done.
		// light <value> determines flaring in q3map, not needed here
		else if ( !token.Icmp( "light" ) ) {
			src->ReadTokenOnLine( &token );
			continue;
		}
		// cull <face>
		else if ( !token.Icmp( "cull" ) ) {
			if ( !src->ReadTokenOnLine( &token ) ) {
				idLib::Warning( "WARNING: missing cull parms in shader '%s'\n", shader->GetName() );
				continue;
			}

			if ( !token.Icmp( "none" ) || !token.Icmp( "twosided" ) || !token.Icmp( "disable" ) ) {
				shader->cullType = CT_TWO_SIDED;
			} else if ( !token.Icmp( "back" ) || !token.Icmp( "backside" ) || !token.Icmp( "backsided" ) ) {
				shader->cullType = CT_BACK_SIDED;
			} else
			{
				idLib::Warning( "WARNING: invalid cull parm '%s' in shader '%s'\n", token.c_str(), shader->GetName() );
			}
			continue;
		}
		// sort
		else if ( !token.Icmp( "sort" ) ) {
			ParseSort( src, shader );
			continue;
		} else
		{
			idLib::Warning( "WARNING: unknown general shader parameter '%s' in '%s'\n", token.c_str(), shader->GetName() );
			return false;
		}
	}

	//
	// ignore shaders that don't have any stages, unless it is a sky or fog
	//
	if ( s == 0 && !shader->isSky && !( shader->contentFlags & CONTENTS_FOG ) ) {
		return false;
	}

	shader->explicitlyDefined = true;

	return true;
}

/*
=================
idMaterialManagerLocal::LoadShaderFiles

Finds and loads all .shader files, combining them into a single large
text block that can be scanned for shader names, like the engine does.
=================
*/
void idMaterialManagerLocal::LoadShaderFiles() {
	idList<idStr> shaderFiles;

	// scan for shader files; the engine file system is not ported yet,
	// so the scan reads the scripts directory relative to the working
	// directory, like the other loaders of this module
#ifdef _WIN32
	WIN32_FIND_DATAA findData;
	HANDLE findHandle = FindFirstFileA( "scripts\\*.shader", &findData );
	if ( findHandle != INVALID_HANDLE_VALUE ) {
		do {
			shaderFiles.Append( findData.cFileName );
		} while ( FindNextFileA( findHandle, &findData ) );
		FindClose( findHandle );
	}
#else
	DIR *dir = opendir( "scripts" );
	if ( dir != NULL ) {
		struct dirent *entry;
		while ( ( entry = readdir( dir ) ) != NULL ) {
			idStr fileName = entry->d_name;
			idStr extension;
			fileName.ExtractFileExtension( extension );
			if ( extension.Icmp( "shader" ) != 0 ) {
				continue;
			}
			shaderFiles.Append( fileName );
		}
		closedir( dir );
	}
#endif

	if ( shaderFiles.Num() == 0 ) {
		idLib::Warning( "WARNING: no shader files found\n" );
		return;
	}

	// load the shader files into the combined text block
	shaderText.Clear();
	for ( int i = 0; i < shaderFiles.Num(); i++ ) {
		idStr filename = "scripts/";
		filename += shaderFiles[i];

		FILE *file = fopen( filename, "rb" );
		if ( file == NULL ) {
			idLib::Warning( "WARNING: couldn't load %s\n", filename.c_str() );
			continue;
		}

		fseek( file, 0, SEEK_END );
		const int length = ftell( file );
		fseek( file, 0, SEEK_SET );
		if ( length > 0 ) {
			char *buffer = new char[length + 1];
			const int readLength = ( int )fread( buffer, 1, length, file );
			if ( readLength == length ) {
				// a newline separator between the files, like the
				// engine puts between the combined buffers
				shaderText.Append( '\n' );
				shaderText.Append( buffer, length );
			}
			delete[] buffer;
		}
		fclose( file );
	}

	// index the definitions: for every shader name, the byte offset
	// right behind the name token, where the definition parse starts at
	// the opening brace. The engine walks a checksum table at lookup
	// time and skips non-matching entries; this index keeps the names
	// directly. A name that is defined more than once keeps its first
	// definition, the first match the text scan of the engine finds.
	shaderDefNames.Clear();
	shaderDefOffsets.Clear();
	shaderTextHash.Free();

	idLexer src;
	src.SetFlags( LEXFL_ALLOWPATHNAMES | LEXFL_NOERRORS | LEXFL_NOFATALERRORS );
	src.LoadMemory( shaderText.c_str(), shaderText.Length(), "<shader files>" );

	idToken token;
	while ( src.ReadToken( &token ) ) {
		idStr name = token;
		// the offset right behind the name token
		const int offset = src.GetFileOffset();

		idToken next;
		if ( !src.ReadToken( &next ) ) {
			break;
		}
		if ( next == "{" ) {
			// a definition; skip its body
			int key = shaderTextHash.GenerateKey( name, false );
			bool alreadyIndexed = false;
			for ( int i = shaderTextHash.First( key ); i != -1; i = shaderTextHash.Next( i ) ) {
				if ( !shaderDefNames[i].Icmp( name ) ) {
					alreadyIndexed = true;
					break;
				}
			}
			if ( !alreadyIndexed ) {
				shaderTextHash.Add( key, shaderDefNames.Append( name ) );
				shaderDefOffsets.Append( offset );
			}
			src.SkipBracedSection( false );
		} else {
			// a stray token outside a definition
			src.SkipRestOfLine();
		}
	}
}

/*
=================
idMaterialManagerLocal::FindShaderTextDef

Returns the byte offset into the shader text right behind the name
token of the definition, or -1 when the name has no definition.
=================
*/
int idMaterialManagerLocal::FindShaderTextDef( const char *name ) const {
	int key = shaderTextHash.GenerateKey( name, false );
	for ( int i = shaderTextHash.First( key ); i != -1; i = shaderTextHash.Next( i ) ) {
		if ( !shaderDefNames[i].Icmp( name ) ) {
			return shaderDefOffsets[i];
		}
	}
	return -1;
}

/*
=================
idMaterialManagerLocal::ParseShaderDef

Parses the definition at the given offset into the material and calls
Finish. Returns false when the definition is not valid; the caller
decides what the material becomes.
=================
*/
bool idMaterialManagerLocal::ParseShaderDef( int offset, idMaterial *material ) {
	// the static parse functions land the global settings on this
	// manager instance
	parserManager = this;

	idLexer src;
	src.SetFlags( LEXFL_ALLOWPATHNAMES | LEXFL_NOERRORS | LEXFL_NOFATALERRORS );
	src.LoadMemory( shaderText.c_str() + offset, shaderText.Length() - offset, "<shader files>" );

	if ( !ParseShader( &src, material ) ) {
		return false;
	}

	material->Finish();

	// the engine resets the shader compression control at the end of
	// FinishShader when the driver uses the strict compression mode,
	// so an allowcompress or nocompress never leaks into the next
	// definition
	if ( r_ext_compressed_textures.GetInteger() == 2 ) {
		imageManager->SetAllowCompress( 0 );
	}

	return true;
}
