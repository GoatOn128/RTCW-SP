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

// tr_font.c
//
// The font system renders TrueType fonts for use within the game. The old
// FreeType 2.x code was replaced with stb_truetype, the pre-rendered font
// path ( fonts/fontImage_%i.dat ) is unchanged and takes priority when it
// exists for a point size, so the shipped pre-rendered fonts keep working.
//
// When no data file exists for a point size the renderer now loads the
// TrueType font file straight out of the pk3, renders each glyph into a
// 256x256 atlas and hands the glyphs out as regular shaders.
//
// The same layout rules as the original FreeType code are kept: a point
// size is a pixel size at 72 dpi, and the glyphScale handed to the game
// side stays relative to a 48 point font, since the ui scaling is based
// on a 48 point font.


#include "tr_local.h"
#include "../qcommon/qcommon.h"
#include "stb_truetype.h"

#define MAX_FONTS 6
static int registeredFontCount = 0;
static fontInfo_t registeredFont[MAX_FONTS];

/*
=================
R_RenderGlyph

Renders the given codepoint into an 8 bit per pixel grayscale bitmap
with stb_truetype and fills in the matching glyphInfo_t metrics. The
bitmap is malloc'ed by stb and must be freed with free(), returns NULL
for empty glyphs ( the space and friends ).
=================
*/
unsigned char *R_RenderGlyph( stbtt_fontinfo *font, float fontSize, const unsigned char c, glyphInfo_t *glyphOut ) {
	unsigned char *bitmap, *padded;
	int w, h, xoff, yoff;
	int advance, lsb;
	int ix0, iy0, ix1, iy1;
	int i;

	stbtt_GetCodepointBitmapBox( font, c, fontSize, fontSize, &ix0, &iy0, &ix1, &iy1 );

	glyphOut->height  = iy1 - iy0;
	glyphOut->pitch   = ( ( ix1 - ix0 ) + 3 ) & -4;
	// match the old FreeType path, one pixel of extra top padding
	glyphOut->top     = -iy0 + 1;
	glyphOut->bottom  = glyphOut->top - glyphOut->height;

	stbtt_GetCodepointHMetrics( font, c, &advance, &lsb );
	glyphOut->xSkip   = (int)( advance * fontSize ) + 1;

	bitmap = stbtt_GetCodepointBitmap( font, fontSize, fontSize, c, &w, &h, &xoff, &yoff );
	if ( !bitmap || h != glyphOut->height || w > glyphOut->pitch ) {
		free( bitmap );
		return NULL;
	}

	if ( w < glyphOut->pitch ) {
		// stb packs the rows at w bytes, the atlas copy expects the
		// 4 byte aligned pitch the glyph metrics advertise, so pad
		padded = (unsigned char *) malloc( glyphOut->pitch * h );
		if ( !padded ) {
			free( bitmap );
			return NULL;
		}
		Com_Memset( padded, 0, glyphOut->pitch * h );
		for ( i = 0; i < h; i++ ) {
			memcpy( padded + i * glyphOut->pitch, bitmap + i * w, w );
		}
		free( bitmap );
		return padded;
	}

	return bitmap;
}

void WriteTGA( char *filename, byte *data, int width, int height ) {
	byte    *buffer;
	int i, c;

	buffer = ri.Hunk_AllocateTempMemory( width * height * 4 + 18 );
	Com_Memset( buffer, 0, 18 );
	buffer[2] = 2;      // uncompressed type
	buffer[12] = width & 255;
	buffer[13] = width >> 8;
	buffer[14] = height & 255;
	buffer[15] = height >> 8;
	buffer[16] = 32;    // pixel size

	// swap rgb to bgr
	c = 18 + width * height * 4;
	for ( i = 18 ; i < c ; i += 4 )
	{
		buffer[i] = data[i - 18 + 2];       // blue
		buffer[i + 1] = data[i - 18 + 1];     // green
		buffer[i + 2] = data[i - 18 + 0];     // red
		buffer[i + 3] = data[i - 18 + 3];     // alpha
	}

	ri.FS_WriteFile( filename, buffer, c );

	ri.Hunk_FreeTempMemory( buffer );
}

static glyphInfo_t *RE_ConstructGlyphInfo( unsigned char *imageOut, int *xOut, int *yOut, int *maxHeight, stbtt_fontinfo *font, float fontSize, const unsigned char c, qboolean calcHeight ) {
	int i;
	static glyphInfo_t glyph;
	unsigned char *src, *dst;
	float scaled_width, scaled_height;
	unsigned char *bitmap = NULL;

	Com_Memset( &glyph, 0, sizeof( glyphInfo_t ) );
	// make sure everything is here
	if ( font != NULL ) {
		bitmap = R_RenderGlyph( font, fontSize, c, &glyph );

		if ( glyph.height > *maxHeight ) {
			*maxHeight = glyph.height;
		}

		if ( calcHeight ) {
			free( bitmap );
			return &glyph;
		}

		if ( !bitmap ) {
			return &glyph;
		}

		scaled_width = glyph.pitch;
		scaled_height = glyph.height;

		// we need to make sure we fit
		if ( *xOut + scaled_width + 1 >= 255 ) {
			if ( *yOut + *maxHeight + 1 >= 255 ) {
				*yOut = -1;
				*xOut = -1;
				free( bitmap );
				return &glyph;
			} else {
				*xOut = 0;
				*yOut += *maxHeight + 1;
			}
		} else if ( *yOut + *maxHeight + 1 >= 255 ) {
			*yOut = -1;
			*xOut = -1;
			free( bitmap );
			return &glyph;
		}

		src = bitmap;
		dst = imageOut + ( *yOut * 256 ) + *xOut;

		for ( i = 0; i < glyph.height; i++ ) {
			memcpy( dst, src, glyph.pitch );
			src += glyph.pitch;
			dst += 256;
		}

		// we now have an 8 bit per pixel grey scale bitmap
		// that is glyph.pitch wide and glyph.height tall

		glyph.imageHeight = scaled_height;
		glyph.imageWidth = scaled_width;
		glyph.s = (float)*xOut / 256;
		glyph.t = (float)*yOut / 256;
		glyph.s2 = glyph.s + (float)scaled_width / 256;
		glyph.t2 = glyph.t + (float)scaled_height / 256;

		*xOut += scaled_width + 1;
	}

	free( bitmap );

	return &glyph;
}

static int fdOffset;
static byte *fdFile;

int readInt() {
	int i = fdFile[fdOffset] + ( fdFile[fdOffset + 1] << 8 ) + ( fdFile[fdOffset + 2] << 16 ) + ( fdFile[fdOffset + 3] << 24 );
	fdOffset += 4;
	return i;
}

typedef union {
	byte fred[4];
	float ffred;
} poor;

float readFloat() {
	poor me;
#ifdef idppc
	me.fred[0] = fdFile[fdOffset + 3];
	me.fred[1] = fdFile[fdOffset + 2];
	me.fred[2] = fdFile[fdOffset + 1];
	me.fred[3] = fdFile[fdOffset + 0];
#else
	me.fred[0] = fdFile[fdOffset + 0];
	me.fred[1] = fdFile[fdOffset + 1];
	me.fred[2] = fdFile[fdOffset + 2];
	me.fred[3] = fdFile[fdOffset + 3];
#endif
	fdOffset += 4;
	return me.ffred;
}

void RE_RegisterFont( const char *fontName, int pointSize, fontInfo_t *font ) {
	stbtt_fontinfo fontInfo;
	int j, k, xOut, yOut, lastStart, imageNumber;
	int scaledSize, newSize, maxHeight, left, satLevels;
	unsigned char *out, *imageBuff;
	glyphInfo_t *glyph;
	image_t *image;
	qhandle_t h;
	float max, fontSize;
	void *faceData;
	int i, len;
	char name[1024];
	float dpi = 72;                                         //
	float glyphScale =  72.0f / dpi;        // change the scale to be relative to 1 based on 72 dpi ( so dpi of 144 means a scale of .5 )

	if ( pointSize <= 0 ) {
		pointSize = 12;
	}
	// we also need to adjust the scale based on point size relative to 48 points as the ui scaling is based on a 48 point font
	glyphScale *= 48.0f / pointSize;

	// make sure the render thread is stopped
	R_SyncRenderThread();

	if ( registeredFontCount >= MAX_FONTS ) {
		ri.Printf( PRINT_ALL, "RE_RegisterFont: Too many fonts registered already.\n" );
		return;
	}

	Com_sprintf( name, sizeof( name ), "fonts/fontImage_%i.dat",pointSize );
	for ( i = 0; i < registeredFontCount; i++ ) {
		if ( Q_stricmp( name, registeredFont[i].name ) == 0 ) {
			memcpy( font, &registeredFont[i], sizeof( fontInfo_t ) );
			return;
		}
	}

	len = ri.FS_ReadFile( name, NULL );
	if ( len == sizeof( fontInfo_t ) ) {
		ri.FS_ReadFile( name, &faceData );
		fdOffset = 0;
		fdFile = faceData;
		for ( i = 0; i < GLYPHS_PER_FONT; i++ ) {
			font->glyphs[i].height      = readInt();
			font->glyphs[i].top         = readInt();
			font->glyphs[i].bottom      = readInt();
			font->glyphs[i].pitch       = readInt();
			font->glyphs[i].xSkip       = readInt();
			font->glyphs[i].imageWidth  = readInt();
			font->glyphs[i].imageHeight = readInt();
			font->glyphs[i].s           = readFloat();
			font->glyphs[i].t           = readFloat();
			font->glyphs[i].s2          = readFloat();
			font->glyphs[i].t2          = readFloat();
			font->glyphs[i].glyph       = readInt();
			memcpy( font->glyphs[i].shaderName, &fdFile[fdOffset], 32 );
			fdOffset += 32;
		}
		font->glyphScale = readFloat();
		memcpy( font->name, &fdFile[fdOffset], MAX_QPATH );

//		memcpy(font, faceData, sizeof(fontInfo_t));
		Q_strncpyz( font->name, name, sizeof( font->name ) );
		for ( i = GLYPH_START; i < GLYPH_END; i++ ) {
			font->glyphs[i].glyph = RE_RegisterShaderNoMip( font->glyphs[i].shaderName );
		}
		memcpy( &registeredFont[registeredFontCount++], font, sizeof( fontInfo_t ) );
		return;
	}

	len = ri.FS_ReadFile( fontName, &faceData );
	if ( len <= 0 ) {
		ri.Printf( PRINT_ALL, "RE_RegisterFont: Unable to read font file\n" );
		return;
	}

	if ( !stbtt_InitFont( &fontInfo, (unsigned char *) faceData, stbtt_GetFontOffsetForIndex( faceData, 0 ) ) ) {
		ri.Printf( PRINT_ALL, "RE_RegisterFont: Unable to parse font file\n" );
		ri.FS_FreeFile( faceData );
		return;
	}

	// a point size is a pixel size at 72 dpi, same as the old FreeType setup
	fontSize = stbtt_ScaleForPixelHeight( &fontInfo, pointSize );

	// make a 256x256 image buffer, once it is full, register it, clean it and keep going
	// until all glyphs are rendered

	out = malloc( 1024 * 1024 );
	if ( out == NULL ) {
		ri.Printf( PRINT_ALL, "RE_RegisterFont: malloc failure during output image creation.\n" );
		ri.FS_FreeFile( faceData );
		return;
	}
	Com_Memset( out, 0, 1024 * 1024 );

	maxHeight = 0;

	for ( i = GLYPH_START; i < GLYPH_END; i++ ) {
		glyph = RE_ConstructGlyphInfo( out, &xOut, &yOut, &maxHeight, &fontInfo, fontSize, (unsigned char)i, qtrue );
	}

	xOut = 0;
	yOut = 0;
	i = GLYPH_START;
	lastStart = i;
	imageNumber = 0;

	while ( i <= GLYPH_END ) {

		glyph = RE_ConstructGlyphInfo( out, &xOut, &yOut, &maxHeight, &fontInfo, fontSize, (unsigned char)i, qfalse );

		if ( xOut == -1 || yOut == -1 || i == GLYPH_END ) {
			// ran out of room
			// we need to create an image from the bitmap, set all the handles in the glyphs to this point
			//

			scaledSize = 256 * 256;
			newSize = scaledSize * 4;
			imageBuff = malloc( newSize );
			left = 0;
			max = 0;
			satLevels = 255;
			for ( k = 0; k < ( scaledSize ) ; k++ ) {
				if ( max < out[k] ) {
					max = out[k];
				}
			}

			if ( max > 0 ) {
				max = 255 / max;
			}

			for ( k = 0; k < ( scaledSize ) ; k++ ) {
				imageBuff[left++] = 255;
				imageBuff[left++] = 255;
				imageBuff[left++] = 255;

				imageBuff[left++] = ( (float)out[k] * max );
			}

			Com_sprintf( name, sizeof( name ), "fonts/fontImage_%i_%i.tga", imageNumber++, pointSize );
			if ( r_saveFontData->integer ) {
				WriteTGA( name, imageBuff, 256, 256 );
			}

			image = R_CreateImage( name, imageBuff, 256, 256, qfalse, qfalse, GL_CLAMP );
			h = RE_RegisterShaderFromImage( name, LIGHTMAP_2D, image, qfalse );
			for ( j = lastStart; j < i; j++ ) {
				font->glyphs[j].glyph = h;
				Q_strncpyz( font->glyphs[j].shaderName, name, sizeof( font->glyphs[j].shaderName ) );
			}
			lastStart = i;
			Com_Memset( out, 0, 1024 * 1024 );
			xOut = 0;
			yOut = 0;
			free( imageBuff );
			i++;
		} else {
			memcpy( &font->glyphs[i], glyph, sizeof( glyphInfo_t ) );
			i++;
		}
	}

	registeredFont[registeredFontCount].glyphScale = glyphScale;
	font->glyphScale = glyphScale;
	memcpy( &registeredFont[registeredFontCount++], font, sizeof( fontInfo_t ) );

	if ( r_saveFontData->integer ) {
		ri.FS_WriteFile( va( "fonts/fontImage_%i.dat", pointSize ), font, sizeof( fontInfo_t ) );
	}

	free( out );

	ri.FS_FreeFile( faceData );
}



void R_InitFreeType() {
	registeredFontCount = 0;
}


void R_DoneFreeType() {
	registeredFontCount = 0;
}
