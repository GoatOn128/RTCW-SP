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

  The builtin images, ported from R_CreateBuiltinImages and its
  helpers in src/renderer/tr_image.c of this code base: the default
  grid, the white image, the identity light image, the dynamic light
  falloff and the fog table image.

  The engine also creates the 32 scratch images for the cinematic
  playback here, that playback is deferred with the client integration
  (the BFG renderer plays Bink instead), so the scratch images wait
  with it.

*/

#define DEFAULT_SIZE    16
#define DLIGHT_SIZE     16
#define FOG_S           256
#define FOG_T           32

/*
=================
R_InitFogTable
=================
*/
void idImageManagerLocal::CreateBuiltinImages() {
	int i;
	for ( i = 0; i < FOG_TABLE_SIZE; i++ ) {
		fogTable[i] = pow( ( float )i / ( FOG_TABLE_SIZE - 1 ), 0.5f );
	}

	// the default image will be a box, to allow you to see the mapping coordinates
	byte data[DEFAULT_SIZE][DEFAULT_SIZE][4];
	memset( data, 32, sizeof( data ) );
	for ( int x = 0; x < DEFAULT_SIZE; x++ ) {
		data[0][x][0] =
			data[0][x][1] =
				data[0][x][2] = 0; //----(SA) to make the default grid noticable but not blinding
		data[0][x][3] = 255;

		data[x][0][0] =
			data[x][0][1] =
				data[x][0][2] = 0; //----(SA) to make the default grid noticable but not blinding
		data[x][0][3] = 255;

		data[DEFAULT_SIZE - 1][x][0] =
			data[DEFAULT_SIZE - 1][x][1] =
				data[DEFAULT_SIZE - 1][x][2] = 0; //----(SA) to make the default grid noticable but not blinding
		data[DEFAULT_SIZE - 1][x][3] = 255;

		data[x][DEFAULT_SIZE - 1][0] =
			data[x][DEFAULT_SIZE - 1][1] =
				data[x][DEFAULT_SIZE - 1][2] = 0; //----(SA) to make the default grid noticable but not blinding
		data[x][DEFAULT_SIZE - 1][3] = 255;
	}
	defaultImage = CreateImage( "*default", ( byte * )data, DEFAULT_SIZE, DEFAULT_SIZE, true, false, false, GL_REPEAT );

	// we use a solid white image instead of disabling texturing
	memset( data, 255, sizeof( data ) );
	whiteImage = CreateImage( "*white", ( byte * )data, 8, 8, false, false, false, GL_REPEAT );

	// with overbright bits active, we need an image which is some fraction of full color,
	// for default lightmaps, etc
	for ( int x = 0; x < DEFAULT_SIZE; x++ ) {
		for ( int y = 0; y < DEFAULT_SIZE; y++ ) {
			data[y][x][0] =
				data[y][x][1] =
					data[y][x][2] = identityLightByte;
			data[y][x][3] = 255;
		}
	}
	identityLightImage = CreateImage( "*identityLight", ( byte * )data, 8, 8, false, false, false, GL_REPEAT );

	// make a centered inverse-square falloff blob for dynamic lighting
	{
		byte dlightData[DLIGHT_SIZE][DLIGHT_SIZE][4];
		for ( int x = 0; x < DLIGHT_SIZE; x++ ) {
			for ( int y = 0; y < DLIGHT_SIZE; y++ ) {
				float d;

				d = ( DLIGHT_SIZE / 2 - 0.5f - x ) * ( DLIGHT_SIZE / 2 - 0.5f - x ) +
					( DLIGHT_SIZE / 2 - 0.5f - y ) * ( DLIGHT_SIZE / 2 - 0.5f - y );
				int b = 4000 / d;
				if ( b > 255 ) {
					b = 255;
				} else if ( b < 75 ) {
					b = 0;
				}
				dlightData[y][x][0] =
					dlightData[y][x][1] =
						dlightData[y][x][2] = b;
				dlightData[y][x][3] = 255;
			}
		}
		dlightImage = CreateImage( "*dlight", ( byte * )dlightData, DLIGHT_SIZE, DLIGHT_SIZE, false, false, false, GL_CLAMP );
	}

	// the fog texture: S is distance, T is depth
	{
		byte *fogData = new byte[FOG_S * FOG_T * 4];
		for ( int x = 0; x < FOG_S; x++ ) {
			for ( int y = 0; y < FOG_T; y++ ) {
				const float d = R_FogFactor( ( x + 0.5f ) / FOG_S, ( y + 0.5f ) / FOG_T );

				fogData[( y * FOG_S + x ) * 4 + 0] =
					fogData[( y * FOG_S + x ) * 4 + 1] =
						fogData[( y * FOG_S + x ) * 4 + 2] = 255;
				fogData[( y * FOG_S + x ) * 4 + 3] = 255 * d;
			}
		}
		fogImage = CreateImage( "*fog", fogData, FOG_S, FOG_T, false, false, false, GL_CLAMP );
		delete[] fogData;

		// the engine sets a white border color on the fog texture here,
		// the border state is part of the upload and lands with the
		// backend bind
	}
}

/*
================
R_FogFactor

Returns a 0.0 to 1.0 fog density value
This is called for each texel of the fog texture on startup
and for each vertex of transparent shaders in fog dynamically
================
*/
float idImageManagerLocal::R_FogFactor( float s, float t ) {
	float d;

	s -= 1.0 / 512;
	if ( s < 0 ) {
		return 0;
	}
	if ( t < 1.0 / 32 ) {
		return 0;
	}
	if ( t < 31.0 / 32 ) {
		s *= ( t - 1.0f / 32.0f ) / ( 30.0f / 32.0f );
	}

	// we need to leave a lot of clamp range
	s *= 8;

	if ( s > 1.0 ) {
		s = 1.0;
	}

	d = fogTable[( int )( s * ( FOG_TABLE_SIZE - 1 ) )];

	return d;
}
