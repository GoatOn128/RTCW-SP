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

#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "../idlib/Str.h"

#include <glad/gl.h>

/*
===============================================================================

  The image of the BFG based renderer.

  The fields are the engine's image_t in src/renderer/tr_image.c of this
  code base: source and upload sizes, the wrap mode, the mipmap and
  picmip flags and the internal format. The class shape follows the
  BFG renderer's idImage.

  The engine uploads every image to GL right in R_CreateImageExt. This
  port splits that in two: GenerateImage does the CPU side of the
  engine's Upload32 (the power of two resample, the picmip reduction,
  the light scale and the mip chain) and keeps the prepared levels in
  memory; Upload hands them to GL. The module has no live GL context
  until the backend phase, so nothing touches GL at load time and the
  backend calls Upload once the context exists.

===============================================================================
*/

// the deepest mip chain of the images this renderer takes: 4096x4096
// sources reduce below that with picmip anyway
const int MAX_TEXTURE_LEVELS = 14;

class idImage {
public:
idImage( const char *name );

const char *            GetName() const { return imgName.c_str(); }
int                     GetWidth() const { return width; }
int                     GetHeight() const { return height; }
int                     GetUploadWidth() const { return uploadWidth; }
int                     GetUploadHeight() const { return uploadHeight; }
int                     WrapClampMode() const { return wrapClampMode; }

// prepares the pixel data for the upload: the CPU side of Upload32 in
// tr_image.c. The source pixels are read only, the prepared levels end
// up in the pic list and uploadWidth/uploadHeight get their final
// values. lightMap selects the lightmap format (no alpha scan, GL_RGB)
// and noCompress turns the S3TC compression decision off
void                    GenerateImage( const byte *pic, int width, int height,
									   bool mipmap, bool allowPicmip, bool characterMIP,
									   bool lightMap, bool noCompress );

// uploads the prepared levels and the filter and wrap state; the
// backend calls this once the GL context is live
void                    Upload();

bool                    IsUploaded() const { return texnum != TEXTURE_NOT_LOADED; }

// accessors for the upload
GLuint                  TexNum() const { return texnum; }
GLuint                  InternalFormat() const { return internalFormat; }
GLuint                  FilterMin() const { return filterMin; }
GLuint                  FilterMag() const { return filterMag; }
int                     NumLevels() const { return numLevels; }

// returns the pixels of a level and its size; the data stays owned by
// the image
const byte *            GetLevel( int level, int &levelWidth, int &levelHeight ) const;

private:
// glGenTextures never hands out 0, so 0 marks the not uploaded image
static const GLuint TEXTURE_NOT_LOADED = 0;

// the level offsets into the pic list
int levelOffsets[MAX_TEXTURE_LEVELS];

public:
// like the engine's image_t, the fields are public: the manager and
// the builtin image code fill them directly
idStr imgName;
int width;                     // source size, never changes
int height;
int uploadWidth;                // after the pow2 and picmip reduction
int uploadHeight;
bool mipmap;
bool allowPicmip;
bool characterMIP;             // picmip2: reduced mipping for the in-game character textures
int wrapClampMode;             // GL_REPEAT or GL_CLAMP
GLuint internalFormat;
GLuint texnum;                 // the GL texture name, 0 until Upload

GLuint filterMin;              // the filter pair of r_textureMode
GLuint filterMag;

// the prepared pixels: all mip levels, contiguous
int numLevels;
int levelWidth[MAX_TEXTURE_LEVELS];
int levelHeight[MAX_TEXTURE_LEVELS];
idList<byte> pic;
};

// the filter pair of r_textureMode, the engine's R_TextureMode in
// tr_image.c; called when an image is generated, the engine computes
// the same pair at upload time
void R_TextureMode( GLuint &minFilter, GLuint &magFilter );

#endif /* !__IMAGE_H__ */
