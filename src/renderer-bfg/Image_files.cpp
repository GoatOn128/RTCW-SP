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

// the JPEG decoder of the engine goes through the vendored stb_image
#include "stb_image.h"

/*

  The image file loaders, ported from src/renderer/tr_image.c of this
  code base. The TGA loader reads the file and expands the pixels like
  the engine's LoadTGA, the JPEG loader goes through stb_image like
  the engine's LoadJPG. The engine reads the files through its file
  system, this module still reads straight from the directory next to
  the working directory, like the BSP loader. The PCX and BMP loaders
  of the engine are not ported, the maps of this game do not need them.

*/

/*
=================
ReadFileToBuffer

The interim file read: the engine file system is not hooked up yet,
the file comes straight from the directory next to the working
directory, like the BSP loader reads the map.
=================
*/
static byte *ReadFileToBuffer( const char *name, int &length ) {
	length = 0;

	FILE *file = fopen( name, "rb" );
	if ( file == NULL ) {
		return NULL;
	}
	fseek( file, 0, SEEK_END );
	length = ftell( file );
	fseek( file, 0, SEEK_SET );
	if ( length <= 0 ) {
		fclose( file );
		return NULL;
	}
	byte *buffer = new byte[length];
	const int readLength = ( int )fread( buffer, 1, length, file );
	fclose( file );
	if ( readLength != length ) {
		delete[] buffer;
		length = 0;
		return NULL;
	}
	return buffer;
}

// the targa header fields are little endian on disk, the engine reads
// them with LittleShort, this port assembles the bytes
static int ReadUShort( const byte *buf ) {
	return buf[0] | ( buf[1] << 8 );
}

/*
=================
LoadTGA

Loads a TGA and returns a bottom up 32 bit RGBA image, the port of
LoadTGA in src/renderer/tr_image.c of this code base.
=================
*/
static void LoadTGA( const char *name, byte **pic, int *width, int *height ) {
	*pic = NULL;
	*width = 0;
	*height = 0;

	// load the file
	int length = 0;
	byte *buffer = ReadFileToBuffer( name, length );
	if ( buffer == NULL ) {
		return;
	}
	if ( length < 18 ) {
		idLib::Warning( "LoadTGA: %s is too short for a targa header", name );
		delete[] buffer;
		return;
	}

	const byte *buf_p = buffer;

	int id_length = *buf_p++;
	int colormap_type = *buf_p++;
	int image_type = *buf_p++;
	buf_p += 4;                       // colormap index and length
	buf_p += 1;                       // colormap size
	buf_p += 4;                       // x and y origin
	const int columns = ReadUShort( buf_p );
	buf_p += 2;
	const int rows = ReadUShort( buf_p );
	buf_p += 2;
	const int pixel_size = *buf_p++;
	buf_p += 1;                       // attributes

	if ( image_type != 2
		 && image_type != 10
		 && image_type != 3 ) {
		idLib::Error( "LoadTGA: Only type 2 (RGB), 3 (gray), and 10 (RGB) TGA images supported\n" );
	}
	if ( colormap_type != 0 ) {
		idLib::Error( "LoadTGA: colormaps not supported\n" );
	}
	if ( ( pixel_size != 32 && pixel_size != 24 ) && image_type != 3 ) {
		idLib::Error( "LoadTGA: Only 32 or 24 bit images supported (no colormaps)\n" );
	}

	*width = columns;
	*height = rows;

	const int numPixels = columns * rows;
	byte *targa_rgba = new byte[numPixels * 4];
	*pic = targa_rgba;

	if ( id_length != 0 ) {
		buf_p += id_length;       // skip TARGA image comment
	}
	if ( image_type == 2 || image_type == 3 ) {
		// Uncompressed RGB or gray scale image
		for ( int row = rows - 1; row >= 0; row-- ) {
			byte *pixbuf = targa_rgba + row * columns * 4;
			for ( int column = 0; column < columns; column++ ) {
				unsigned char red, green, blue, alphabyte;
				switch ( pixel_size ) {
				case 8:
					blue = *buf_p++;
					green = blue;
					red = blue;
					*pixbuf++ = red;
					*pixbuf++ = green;
					*pixbuf++ = blue;
					*pixbuf++ = 255;
					break;
				case 24:
					blue = *buf_p++;
					green = *buf_p++;
					red = *buf_p++;
					*pixbuf++ = red;
					*pixbuf++ = green;
					*pixbuf++ = blue;
					*pixbuf++ = 255;
					break;
				case 32:
					blue = *buf_p++;
					green = *buf_p++;
					red = *buf_p++;
					alphabyte = *buf_p++;
					*pixbuf++ = red;
					*pixbuf++ = green;
					*pixbuf++ = blue;
					*pixbuf++ = alphabyte;
					break;
				default:
					idLib::Error( "LoadTGA: illegal pixel_size '%d' in file '%s'\n", pixel_size, name );
					break;
				}
			}
		}
	} else if ( image_type == 10 ) {     // Runlength encoded RGB images
		unsigned char red = 0, green = 0, blue = 0, alphabyte = 0xff, packetHeader, packetSize, j;

		for ( int row = rows - 1; row >= 0; row-- ) {
			byte *pixbuf = targa_rgba + row * columns * 4;
			for ( int column = 0; column < columns; ) {
				packetHeader = *buf_p++;
				packetSize = 1 + ( packetHeader & 0x7f );
				if ( packetHeader & 0x80 ) {        // run-length packet
					switch ( pixel_size ) {
					case 24:
						blue = *buf_p++;
						green = *buf_p++;
						red = *buf_p++;
						alphabyte = 255;
						break;
					case 32:
						blue = *buf_p++;
						green = *buf_p++;
						red = *buf_p++;
						alphabyte = *buf_p++;
						break;
					default:
						idLib::Error( "LoadTGA: illegal pixel_size '%d' in file '%s'\n", pixel_size, name );
						break;
					}

					for ( j = 0; j < packetSize; j++ ) {
						*pixbuf++ = red;
						*pixbuf++ = green;
						*pixbuf++ = blue;
						*pixbuf++ = alphabyte;
						column++;
						if ( column == columns ) { // run spans across rows
							column = 0;
							if ( row > 0 ) {
								row--;
							} else {
								goto breakOut;
							}
							pixbuf = targa_rgba + row * columns * 4;
						}
					}
				} else {                            // non run-length packet
					for ( j = 0; j < packetSize; j++ ) {
						switch ( pixel_size ) {
						case 24:
							blue = *buf_p++;
							green = *buf_p++;
							red = *buf_p++;
							*pixbuf++ = red;
							*pixbuf++ = green;
							*pixbuf++ = blue;
							*pixbuf++ = 255;
							break;
						case 32:
							blue = *buf_p++;
							green = *buf_p++;
							red = *buf_p++;
							alphabyte = *buf_p++;
							*pixbuf++ = red;
							*pixbuf++ = green;
							*pixbuf++ = blue;
							*pixbuf++ = alphabyte;
							break;
						default:
							idLib::Error( "LoadTGA: illegal pixel_size '%d' in file '%s'\n", pixel_size, name );
							break;
						}
						column++;
						if ( column == columns ) { // pixel packet run spans across rows
							column = 0;
							if ( row > 0 ) {
								row--;
							} else {
								goto breakOut;
							}
							pixbuf = targa_rgba + row * columns * 4;
						}
					}
				}
			}
breakOut:   ;
		}
	}

	delete[] buffer;
}

/*
=================
LoadJPG

Loads a JPEG from the filesystem through stb_image and returns
a top down 32 bit RGBA image, same as the other Load* loaders.
=================
*/
static void LoadJPG( const char *filename, byte **pic, int *width, int *height ) {
	*pic = NULL;
	*width = 0;
	*height = 0;

	int length = 0;
	byte *fbuffer = ReadFileToBuffer( filename, length );
	if ( fbuffer == NULL ) {
		return;
	}

	unsigned char *out = stbi_load_from_memory( fbuffer, length, width, height, NULL, 4 );
	delete[] fbuffer;
	if ( out == NULL ) {
		return;
	}

	*pic = new byte[( *width ) * ( *height ) * 4];
	memcpy( *pic, out, ( *width ) * ( *height ) * 4 );
	stbi_image_free( out );
}

/*
=================
R_LoadImage

Loads any of the supported image types into a cannonical
32 bit format. The engine dispatches the PCX and BMP loaders
here too, those loaders are not ported.
=================
*/
void R_LoadImageFiles( const char *name, byte **pic, int *width, int *height ) {
	*pic = NULL;
	*width = 0;
	*height = 0;

	const int len = strlen( name );
	if ( len < 5 ) {
		return;
	}

	if ( idStr::Icmpn( name + len - 4, ".tga", 4 ) == 0 ) {
		LoadTGA( name, pic, width, height );         // try tga first
		if ( !*pic ) {
			// try jpg in place of tga
			idStr altname = name;
			altname[len - 3] = 'j';
			altname[len - 2] = 'p';
			altname[len - 1] = 'g';
			LoadJPG( altname.c_str(), pic, width, height );
		}
	} else if ( idStr::Icmpn( name + len - 4, ".pcx", 4 ) == 0 ) {
		// the PCX loader of the engine is not ported, the maps of this
		// game do not reference pcx textures
	} else if ( idStr::Icmpn( name + len - 4, ".bmp", 4 ) == 0 ) {
		// the BMP loader of the engine is not ported
	} else if ( idStr::Icmpn( name + len - 4, ".jpg", 4 ) == 0 ) {
		LoadJPG( name, pic, width, height );
	}
}
