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

In addition, the RTCW SP Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied RTCW SP Source Code. If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "precompiled.h"
#include "Image_local.h"

/*

  The pixel processing of the image system, ported from
  src/renderer/tr_image.c of this code base: the resample and mip map
  filters, the light scaling tables, the texture mode filters and the
  pixel side of Upload32 (idImage::GenerateImage). The engine uploads
  to GL at the end of Upload32, this port hands the prepared levels to
  idImage::Upload instead.

*/

// the brightness translation tables of the engine's R_SetColorMappings
static byte s_gammatable[256];
static byte s_intensitytable[256];

/*
================
R_SetColorMappings

Builds the gamma and intensity tables. The engine also pushes the gamma
table to the hardware ramp here, this port keeps the table for the
light scale only; the hardware ramp is backend work.
================
*/
void R_SetColorMappings( int overbrightBits, float gamma, float intensity ) {
	// the engine resets the cvars when out of range, the cvar system
	// is not hooked up yet, so the local values clamp instead
	if ( intensity <= 1.0f ) {
		intensity = 1.0f;
	}
	if ( gamma < 0.5f ) {
		gamma = 0.5f;
	} else if ( gamma > 3.0f ) {
		gamma = 3.0f;
	}

	const int shift = overbrightBits;

	for ( int i = 0; i < 256; i++ ) {
		int inf;
		if ( gamma == 1.0f ) {
			inf = i;
		} else {
			inf = 255 * pow( i / 255.0f, 1.0f / gamma ) + 0.5f;
		}
		inf <<= shift;
		if ( inf < 0 ) {
			inf = 0;
		}
		if ( inf > 255 ) {
			inf = 255;
		}
		s_gammatable[i] = inf;
	}

	for ( int i = 0; i < 256; i++ ) {
		int j = i * intensity;
		if ( j > 255 ) {
			j = 255;
		}
		s_intensitytable[i] = j;
	}
}

/*
================
R_LightScaleTexture

Scale up the pixel values in a texture to increase the lighting range.

The engine applies the gamma table when the hardware gamma ramp is
missing; this module assumes the ramp present, like the color mappings
do, so the only-gamma path is a no-op.
================
*/
static void R_LightScaleTexture( byte *in, int inwidth, int inheight, bool onlyGamma ) {
	if ( onlyGamma ) {
		return;
	}

	int c = inwidth * inheight;
	byte *p = in;

	for ( int i = 0; i < c; i++, p += 4 ) {
		p[0] = s_intensitytable[p[0]];
		p[1] = s_intensitytable[p[1]];
		p[2] = s_intensitytable[p[2]];
	}
}

/*
================
ResampleTexture

Used to resample images in a more general than quartering fashion.

This will only be filtered properly if the resampled size
is greater than half the original size.

If a larger shrinking is needed, use the mipmap function
before or after.
================
*/
static void ResampleTexture( unsigned *in, int inwidth, int inheight, unsigned *out,
							 int outwidth, int outheight ) {
	int i, j;
	unsigned    *inrow, *inrow2;
	unsigned frac, fracstep;
	unsigned p1[1024], p2[1024];
	byte        *pix1, *pix2, *pix3, *pix4;

	fracstep = inwidth * 0x10000 / outwidth;

	frac = fracstep >> 2;
	for ( i = 0; i < outwidth; i++ ) {
		p1[i] = 4 * ( frac >> 16 );
		frac += fracstep;
	}
	frac = 3 * ( fracstep >> 2 );
	for ( i = 0; i < outwidth; i++ ) {
		p2[i] = 4 * ( frac >> 16 );
		frac += fracstep;
	}

	for ( i = 0; i < outheight; i++, out += outwidth ) {
		inrow = in + inwidth * ( int )( ( i + 0.25 ) * inheight / outheight );
		inrow2 = in + inwidth * ( int )( ( i + 0.75 ) * inheight / outheight );
		frac = fracstep >> 1;
		for ( j = 0; j < outwidth; j++ ) {
			pix1 = ( byte * )inrow + p1[j];
			pix2 = ( byte * )inrow + p2[j];
			pix3 = ( byte * )inrow2 + p1[j];
			pix4 = ( byte * )inrow2 + p2[j];
			( ( byte * )( out + j ) )[0] = ( pix1[0] + pix2[0] + pix3[0] + pix4[0] ) >> 2;
			( ( byte * )( out + j ) )[1] = ( pix1[1] + pix2[1] + pix3[1] + pix4[1] ) >> 2;
			( ( byte * )( out + j ) )[2] = ( pix1[2] + pix2[2] + pix3[2] + pix4[2] ) >> 2;
			( ( byte * )( out + j ) )[3] = ( pix1[3] + pix2[3] + pix3[3] + pix4[3] ) >> 2;
		}
	}
}

/*
================
R_MipMap2

Operates in place, quartering the size of the texture
Proper linear filter
================
*/
static void R_MipMap2( unsigned *in, int inWidth, int inHeight ) {
	int i, j, k;
	byte        *outpix;
	int inWidthMask, inHeightMask;
	int total;
	int outWidth, outHeight;
	unsigned    *temp;

	outWidth = inWidth >> 1;
	outHeight = inHeight >> 1;
	temp = new unsigned[outWidth * outHeight];

	inWidthMask = inWidth - 1;
	inHeightMask = inHeight - 1;

	for ( i = 0; i < outHeight; i++ ) {
		for ( j = 0; j < outWidth; j++ ) {
			outpix = ( byte * )( temp + i * outWidth + j );
			for ( k = 0; k < 4; k++ ) {
				total =
					1 * ( ( byte * )&in[( ( i * 2 - 1 ) & inHeightMask ) * inWidth + ( ( j * 2 - 1 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 - 1 ) & inHeightMask ) * inWidth + ( ( j * 2 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 - 1 ) & inHeightMask ) * inWidth + ( ( j * 2 + 1 ) & inWidthMask )] )[k] +
					1 * ( ( byte * )&in[( ( i * 2 - 1 ) & inHeightMask ) * inWidth + ( ( j * 2 + 2 ) & inWidthMask )] )[k] +

					2 * ( ( byte * )&in[( ( i * 2 ) & inHeightMask ) * inWidth + ( ( j * 2 - 1 ) & inWidthMask )] )[k] +
					4 * ( ( byte * )&in[( ( i * 2 ) & inHeightMask ) * inWidth + ( ( j * 2 ) & inWidthMask )] )[k] +
					4 * ( ( byte * )&in[( ( i * 2 ) & inHeightMask ) * inWidth + ( ( j * 2 + 1 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 ) & inHeightMask ) * inWidth + ( ( j * 2 + 2 ) & inWidthMask )] )[k] +

					2 * ( ( byte * )&in[( ( i * 2 + 1 ) & inHeightMask ) * inWidth + ( ( j * 2 - 1 ) & inWidthMask )] )[k] +
					4 * ( ( byte * )&in[( ( i * 2 + 1 ) & inHeightMask ) * inWidth + ( ( j * 2 ) & inWidthMask )] )[k] +
					4 * ( ( byte * )&in[( ( i * 2 + 1 ) & inHeightMask ) * inWidth + ( ( j * 2 + 1 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 + 1 ) & inHeightMask ) * inWidth + ( ( j * 2 + 2 ) & inWidthMask )] )[k] +

					1 * ( ( byte * )&in[( ( i * 2 + 2 ) & inHeightMask ) * inWidth + ( ( j * 2 - 1 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 + 2 ) & inHeightMask ) * inWidth + ( ( j * 2 ) & inWidthMask )] )[k] +
					2 * ( ( byte * )&in[( ( i * 2 + 2 ) & inHeightMask ) * inWidth + ( ( j * 2 + 1 ) & inWidthMask )] )[k] +
					1 * ( ( byte * )&in[( ( i * 2 + 2 ) & inHeightMask ) * inWidth + ( ( j * 2 + 2 ) & inWidthMask )] )[k];
				outpix[k] = total / 36;
			}
		}
	}

	memcpy( in, temp, outWidth * outHeight * 4 );
	delete[] temp;
}

/*
================
R_MipMap

Operates in place, quartering the size of the texture
================
*/
static void R_MipMap( byte *in, int width, int height ) {
	int i, j;
	byte        *out;
	int row;

	if ( !r_simpleMipMaps.GetInteger() ) {
		R_MipMap2( ( unsigned * )in, width, height );
		return;
	}

	if ( width == 1 && height == 1 ) {
		return;
	}

	row = width * 4;
	out = in;
	width >>= 1;
	height >>= 1;

	if ( width == 0 || height == 0 ) {
		width += height;        // get largest
		for ( i = 0; i < width; i++, out += 4, in += 8 ) {
			out[0] = ( in[0] + in[4] ) >> 1;
			out[1] = ( in[1] + in[5] ) >> 1;
			out[2] = ( in[2] + in[6] ) >> 1;
			out[3] = ( in[3] + in[7] ) >> 1;
		}
		return;
	}

	for ( i = 0; i < height; i++, in += row ) {
		for ( j = 0; j < width; j++, out += 4, in += 8 ) {
			out[0] = ( in[0] + in[4] + in[row + 0] + in[row + 4] ) >> 2;
			out[1] = ( in[1] + in[5] + in[row + 1] + in[row + 5] ) >> 2;
			out[2] = ( in[2] + in[6] + in[row + 2] + in[row + 6] ) >> 2;
			out[3] = ( in[3] + in[7] + in[row + 3] + in[row + 7] ) >> 2;
		}
	}
}

/*
===============
R_ColorShiftLightingBytes

The lightmap overbright shift of src/renderer/tr_bsp.c of this code
base. The shift is the map overbright bits reduced by the renderer
overbright bits, the caller computes it.
===============
*/
void R_ColorShiftLightingBytes( int shift, const byte in[4], byte out[4] ) {
	int r, g, b;

	// shift the color data based on overbright range
	r = in[0] << shift;
	g = in[1] << shift;
	b = in[2] << shift;

	// normalize by color instead of saturating to white
	if ( ( r | g | b ) > 255 ) {
		int max;

		max = r > g ? r : g;
		max = max > b ? max : b;
		r = r * 255 / max;
		g = g * 255 / max;
		b = b * 255 / max;
	}

	out[0] = r;
	out[1] = g;
	out[2] = b;
	out[3] = in[3];
}

/*
================
R_TextureMode

The filter pair of r_textureMode. The engine recomputes the pair when
the cvar changes and rebinds every image, this port reads the cvar when
the image is generated and keeps the pair on the image.
================
*/
void R_TextureMode( GLuint &minFilter, GLuint &magFilter ) {
	static struct {
		const char *name;
		GLuint minFilter;
		GLuint magFilter;
	} modes[] = {
		{ "GL_NEAREST", GL_NEAREST, GL_NEAREST },
		{ "GL_LINEAR", GL_LINEAR, GL_LINEAR },
		{ "GL_NEAREST_MIPMAP_NEAREST", GL_NEAREST_MIPMAP_NEAREST, GL_NEAREST },
		{ "GL_LINEAR_MIPMAP_NEAREST", GL_LINEAR_MIPMAP_NEAREST, GL_LINEAR },
		{ "GL_NEAREST_MIPMAP_LINEAR", GL_NEAREST_MIPMAP_LINEAR, GL_NEAREST },
		{ "GL_LINEAR_MIPMAP_LINEAR", GL_LINEAR_MIPMAP_LINEAR, GL_LINEAR },
	};

	for ( int i = 0; i < 6; i++ ) {
		if ( idStr::Icmp( r_textureMode.GetString(), modes[i].name ) == 0 ) {
			minFilter = modes[i].minFilter;
			magFilter = modes[i].magFilter;
			return;
		}
	}

	// the engine resets the cvar to the default when the mode is
	// unknown, the cvar system is not hooked up yet, so this falls
	// back to the default pair
	idLib::Warning( "WARNING: bad filter in r_textureMode, using GL_LINEAR_MIPMAP_NEAREST\n" );
	minFilter = GL_LINEAR_MIPMAP_NEAREST;
	magFilter = GL_LINEAR;
}

/*
===============
idImage::GenerateImage

The pixel side of Upload32 in src/renderer/tr_image.c of this code
base: the power of two conversion, the picmip reduction, the alpha
scan with the internal format decision, the light scale and the mip
chain. The engine reduces big textures with the r_rmse and
r_lowMemTextureSize passes first and clamps to the GL maximum texture
size; both are left out here, the first two are memory savers of the
old consoles and the GL limit is checked by the backend.
===============
*/
void idImage::GenerateImage( const byte *pic, int width, int height,
							 bool mipmap, bool allowPicmip, bool characterMIP,
							 bool lightMap, bool noCompress ) {
	this->width = width;
	this->height = height;
	this->mipmap = mipmap;
	this->allowPicmip = allowPicmip;
	this->characterMIP = characterMIP;

	// convert to exact power of 2 sizes
	int scaled_width = 1;
	while ( scaled_width < width ) {
		scaled_width <<= 1;
	}
	int scaled_height = 1;
	while ( scaled_height < height ) {
		scaled_height <<= 1;
	}
	if ( r_roundImagesDown.GetInteger() && scaled_width > width ) {
		scaled_width >>= 1;
	}
	if ( r_roundImagesDown.GetInteger() && scaled_height > height ) {
		scaled_height >>= 1;
	}

	// resample the source when it is not the power of two size
	byte *data;
	if ( scaled_width != width || scaled_height != height ) {
		byte *resampledBuffer = new byte[scaled_width * scaled_height * 4];
		ResampleTexture( ( unsigned * )pic, width, height, ( unsigned * )resampledBuffer,
						 scaled_width, scaled_height );
		data = resampledBuffer;
		width = scaled_width;
		height = scaled_height;
	} else {
		data = new byte[width * height * 4];
		memcpy( data, pic, width * height * 4 );
	}

	// perform optional picmip operation
	if ( allowPicmip ) {
		if ( characterMIP ) {
			scaled_width >>= r_picmip2.GetInteger();
			scaled_height >>= r_picmip2.GetInteger();
		} else {
			scaled_width >>= r_picmip.GetInteger();
			scaled_height >>= r_picmip.GetInteger();
		}
	}

	// clamp to minimum size
	if ( scaled_width < 1 ) {
		scaled_width = 1;
	}
	if ( scaled_height < 1 ) {
		scaled_height = 1;
	}

	// scan the texture for each channel's max values
	// and verify if the alpha channel is being used or not
	int samples = 3;
	GLuint format;
	if ( !lightMap ) {
		const byte *scan = data;
		const int c = width * height;
		for ( int i = 0; i < c; i++ ) {
			if ( scan[i * 4 + 3] != 255 ) {
				samples = 4;
				break;
			}
		}
		// select proper internal format
		if ( samples == 3 ) {
			// the engine asks the GL driver for the S3TC extension
			// here, this module has no context yet and assumes the
			// modern hardware that always carries it
			if ( !noCompress ) {
				// TODO: which format is best for which textures?
				format = GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
			} else if ( r_texturebits.GetInteger() == 16 ) {
				format = GL_RGB5;
			} else if ( r_texturebits.GetInteger() == 32 ) {
				format = GL_RGB8;
			} else {
				format = 3;
			}
		} else if ( samples == 4 ) {
			if ( !noCompress ) {
				format = GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
			} else if ( r_texturebits.GetInteger() == 16 ) {
				format = GL_RGBA4;
			} else if ( r_texturebits.GetInteger() == 32 ) {
				format = GL_RGBA8;
			} else {
				format = 4;
			}
		} else {
			format = 3;
		}
	} else {
		format = 3;
	}

	// copy or mip down as appropriate for the first MIP level
	byte *scaledBuffer = new byte[scaled_width * scaled_height * 4];
	if ( ( scaled_width == width ) && ( scaled_height == height ) ) {
		memcpy( scaledBuffer, data, scaled_width * scaled_height * 4 );
	} else {
		// use the normal mip-mapping function to go down from here
		while ( width > scaled_width || height > scaled_height ) {
			R_MipMap( data, width, height );
			width >>= 1;
			height >>= 1;
			if ( width < 1 ) {
				width = 1;
			}
			if ( height < 1 ) {
				height = 1;
			}
		}
		memcpy( scaledBuffer, data, scaled_width * scaled_height * 4 );
	}
	delete[] data;

	// the engine uploads the level here and skips the light scale for
	// the images that went through the early path (no mipmap and no
	// reduction), everything else gets scaled; the only-gamma variant
	// is the hardware ramp no-op of R_LightScaleTexture
	const bool earlyPath = ( mipmap == false ) && ( scaled_width == width ) && ( scaled_height == height );
	if ( !earlyPath ) {
		R_LightScaleTexture( scaledBuffer, scaled_width, scaled_height, !mipmap );
	}

	uploadWidth = scaled_width;
	uploadHeight = scaled_height;
	internalFormat = format;

	// the engine colors the mip levels with r_colorMipLevels as a
	// development tool, that debug pass is not ported

	// store the levels: the mip chain follows the first level
	numLevels = 0;
	int offset = 0;
	int levelSize = scaled_width * scaled_height * 4;
	levelOffsets[numLevels] = offset;
	levelWidth[numLevels] = scaled_width;
	levelHeight[numLevels] = scaled_height;
	this->pic.SetNum( offset + levelSize );
	memcpy( this->pic.Ptr() + offset, scaledBuffer, levelSize );
	offset += levelSize;
	numLevels++;

	if ( mipmap ) {
		while ( scaled_width > 1 || scaled_height > 1 ) {
			R_MipMap( scaledBuffer, scaled_width, scaled_height );
			scaled_width >>= 1;
			scaled_height >>= 1;
			if ( scaled_width < 1 ) {
				scaled_width = 1;
			}
			if ( scaled_height < 1 ) {
				scaled_height = 1;
			}
			if ( numLevels == MAX_TEXTURE_LEVELS ) {
				break;
			}
			levelSize = scaled_width * scaled_height * 4;
			levelOffsets[numLevels] = offset;
			levelWidth[numLevels] = scaled_width;
			levelHeight[numLevels] = scaled_height;
			this->pic.SetNum( offset + levelSize );
			memcpy( this->pic.Ptr() + offset, scaledBuffer, levelSize );
			offset += levelSize;
			numLevels++;
		}
	}
	delete[] scaledBuffer;

	// the filter pair of the upload: the engine sets the filters of
	// r_textureMode for mipmapped images and GL_LINEAR for the rest
	if ( mipmap ) {
		R_TextureMode( filterMin, filterMag );
	} else {
		filterMin = GL_LINEAR;
		filterMag = GL_LINEAR;
	}
}
