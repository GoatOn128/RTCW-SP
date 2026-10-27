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

#include "Q3Patch.h"
#include "CVarSystem.h"

// the patch subdivision distance from the engine renderer; a larger value
// subdivides less
idCVar r_subdivisions( "r_subdivisions", "4", CVAR_FLOAT | CVAR_RENDERER | CVAR_ARCHIVE, "Patch subdivision level" );

// small float[3] helpers matching the q_math.h macros the original code used
static ID_INLINE void vSub( const float *a, const float *b, float *out ) {
	out[0] = a[0] - b[0];
	out[1] = a[1] - b[1];
	out[2] = a[2] - b[2];
}

static ID_INLINE void vAdd( const float *a, const float *b, float *out ) {
	out[0] = a[0] + b[0];
	out[1] = a[1] + b[1];
	out[2] = a[2] + b[2];
}

static ID_INLINE void vCopy( const float *in, float *out ) {
	out[0] = in[0];
	out[1] = in[1];
	out[2] = in[2];
}

static ID_INLINE void vClear( float *v ) {
	v[0] = v[1] = v[2] = 0.0f;
}

static ID_INLINE void vScale( const float *in, const float scale, float *out ) {
	out[0] = in[0] * scale;
	out[1] = in[1] * scale;
	out[2] = in[2] * scale;
}

static ID_INLINE float vDot( const float *a, const float *b ) {
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static ID_INLINE void vCross( const float *a, const float *b, float *out ) {
	out[0] = a[1] * b[2] - a[2] * b[1];
	out[1] = a[2] * b[0] - a[0] * b[2];
	out[2] = a[0] * b[1] - a[1] * b[0];
}

static ID_INLINE float vLengthSquared( const float *v ) {
	return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

// normalizes into out and returns the length, 0 for a degenerate vector
static ID_INLINE float vNormalize2( const float *in, float *out ) {
	const float length = idMath::Sqrt( vLengthSquared( in ) );
	if ( length != 0.0f ) {
		const float ilength = 1.0f / length;
		out[0] = in[0] * ilength;
		out[1] = in[1] * ilength;
		out[2] = in[2] * ilength;
	}
	return length;
}

/*
============
LerpVert
============
*/
static void LerpVert( const q3BspDrawVert_t *a, const q3BspDrawVert_t *b, q3BspDrawVert_t *out ) {
	out->xyz[0] = 0.5f * ( a->xyz[0] + b->xyz[0] );
	out->xyz[1] = 0.5f * ( a->xyz[1] + b->xyz[1] );
	out->xyz[2] = 0.5f * ( a->xyz[2] + b->xyz[2] );

	out->st[0] = 0.5f * ( a->st[0] + b->st[0] );
	out->st[1] = 0.5f * ( a->st[1] + b->st[1] );

	out->lightmap[0] = 0.5f * ( a->lightmap[0] + b->lightmap[0] );
	out->lightmap[1] = 0.5f * ( a->lightmap[1] + b->lightmap[1] );

	out->color[0] = ( a->color[0] + b->color[0] ) >> 1;
	out->color[1] = ( a->color[1] + b->color[1] ) >> 1;
	out->color[2] = ( a->color[2] + b->color[2] ) >> 1;
	out->color[3] = ( a->color[3] + b->color[3] ) >> 1;
}

/*
============
Transpose
============
*/
static void Transpose( int width, int height, q3BspDrawVert_t ctrl[Q3_MAX_GRID_SIZE][Q3_MAX_GRID_SIZE] ) {
	int i, j;
	q3BspDrawVert_t temp;

	if ( width > height ) {
		for ( i = 0; i < height; i++ ) {
			for ( j = i + 1; j < width; j++ ) {
				if ( j < height ) {
					// swap the value
					temp = ctrl[j][i];
					ctrl[j][i] = ctrl[i][j];
					ctrl[i][j] = temp;
				} else {
					// just copy
					ctrl[j][i] = ctrl[i][j];
				}
			}
		}
	} else {
		for ( i = 0; i < width; i++ ) {
			for ( j = i + 1; j < height; j++ ) {
				if ( j < width ) {
					// swap the value
					temp = ctrl[i][j];
					ctrl[i][j] = ctrl[j][i];
					ctrl[j][i] = temp;
				} else {
					// just copy
					ctrl[i][j] = ctrl[j][i];
				}
			}
		}
	}
}

/*
=================
MakeMeshNormals

Handles all the complicated wrapping and degenerate cases
=================
*/
static void MakeMeshNormals( int width, int height, q3BspDrawVert_t ctrl[Q3_MAX_GRID_SIZE][Q3_MAX_GRID_SIZE] ) {
	int i, j, k, dist;
	float normal[3];
	float sum[3];
	int count;
	float base[3];
	float delta[3];
	int x, y;
	q3BspDrawVert_t *dv;
	float around[8][3], temp[3];
	bool good[8];
	bool wrapWidth, wrapHeight;
	float len;
	static int neighbors[8][2] = {
		{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, { -1, -1}, { -1, 0}, { -1, 1}
	};

	wrapWidth = false;
	for ( i = 0; i < height; i++ ) {
		vSub( ctrl[i][0].xyz, ctrl[i][width - 1].xyz, delta );
		len = vLengthSquared( delta );
		if ( len > 1.0 ) {
			break;
		}
	}
	if ( i == height ) {
		wrapWidth = true;
	}

	wrapHeight = false;
	for ( i = 0; i < width; i++ ) {
		vSub( ctrl[0][i].xyz, ctrl[height - 1][i].xyz, delta );
		len = vLengthSquared( delta );
		if ( len > 1.0 ) {
			break;
		}
	}
	if ( i == width ) {
		wrapHeight = true;
	}

	for ( i = 0; i < width; i++ ) {
		for ( j = 0; j < height; j++ ) {
			count = 0;
			dv = &ctrl[j][i];
			vCopy( dv->xyz, base );
			for ( k = 0; k < 8; k++ ) {
				vClear( around[k] );
				good[k] = false;

				for ( dist = 1; dist <= 3; dist++ ) {
					x = i + neighbors[k][0] * dist;
					y = j + neighbors[k][1] * dist;
					if ( wrapWidth ) {
						if ( x < 0 ) {
							x = width - 1 + x;
						} else if ( x >= width ) {
							x = 1 + x - width;
						}
					}
					if ( wrapHeight ) {
						if ( y < 0 ) {
							y = height - 1 + y;
						} else if ( y >= height ) {
							y = 1 + y - height;
						}
					}

					if ( x < 0 || x >= width || y < 0 || y >= height ) {
						break;                  // edge of patch
					}
					vSub( ctrl[y][x].xyz, base, temp );
					if ( vNormalize2( temp, temp ) == 0.0f ) {
						continue;               // degenerate edge, get more dist
					} else {
						good[k] = true;
						vCopy( temp, around[k] );
						break;                  // good edge
					}
				}
			}

			vClear( sum );
			for ( k = 0; k < 8; k++ ) {
				if ( !good[k] || !good[( k + 1 ) & 7] ) {
					continue;   // didn't get two points
				}
				vCross( around[( k + 1 ) & 7], around[k], normal );
				if ( vNormalize2( normal, normal ) == 0.0f ) {
					continue;
				}
				vAdd( normal, sum, sum );
				count++;
			}
			if ( count == 0 ) {
				count = 1;
			}
			vNormalize2( sum, dv->normal );
		}
	}
}

/*
============
InvertCtrl
============
*/
static void InvertCtrl( int width, int height, q3BspDrawVert_t ctrl[Q3_MAX_GRID_SIZE][Q3_MAX_GRID_SIZE] ) {
	int i, j;
	q3BspDrawVert_t temp;

	for ( i = 0; i < height; i++ ) {
		for ( j = 0; j < width / 2; j++ ) {
			temp = ctrl[i][j];
			ctrl[i][j] = ctrl[i][width - 1 - j];
			ctrl[i][width - 1 - j] = temp;
		}
	}
}

/*
=================
InvertErrorTable
=================
*/
static void InvertErrorTable( float errorTable[2][Q3_MAX_GRID_SIZE], int width, int height ) {
	int i;
	float copy[2][Q3_MAX_GRID_SIZE];

	memcpy( copy, errorTable, sizeof( copy ) );

	for ( i = 0; i < width; i++ ) {
		errorTable[1][i] = copy[0][i];
	}

	for ( i = 0; i < height; i++ ) {
		errorTable[0][i] = copy[1][height - 1 - i];
	}
}

/*
==================
PutPointsOnCurve
==================
*/
static void PutPointsOnCurve( q3BspDrawVert_t ctrl[Q3_MAX_GRID_SIZE][Q3_MAX_GRID_SIZE],
							  int width, int height ) {
	int i, j;
	q3BspDrawVert_t prev, next;

	for ( i = 0; i < width; i++ ) {
		for ( j = 1; j < height; j += 2 ) {
			LerpVert( &ctrl[j][i], &ctrl[j + 1][i], &prev );
			LerpVert( &ctrl[j][i], &ctrl[j - 1][i], &next );
			LerpVert( &prev, &next, &ctrl[j][i] );
		}
	}

	for ( j = 0; j < height; j++ ) {
		for ( i = 1; i < width; i += 2 ) {
			LerpVert( &ctrl[j][i], &ctrl[j][i + 1], &prev );
			LerpVert( &ctrl[j][i], &ctrl[j][i - 1], &next );
			LerpVert( &prev, &next, &ctrl[j][i] );
		}
	}
}

/*
=================
q3SubdividePatchToGrid
=================
*/
bool q3SubdividePatchToGrid( int width, int height, const q3BspDrawVert_t *points,
							 int *outWidth, int *outHeight, const q3BspDrawVert_t **outVerts ) {
	int i, j, k, l;
	q3BspDrawVert_t prev, next, mid;
	float len, maxLen;
	int dir;
	int t;

	// the original code assumes the control grid fits the patch limits
	if ( width < 2 || height < 2 || width > Q3_MAX_PATCH_SIZE || height > Q3_MAX_PATCH_SIZE ) {
		return false;
	}

	// the working grid is big, keep it off the stack like the original
	// MAC_STATIC declaration did
	static q3BspDrawVert_t ctrl[Q3_MAX_GRID_SIZE][Q3_MAX_GRID_SIZE];
	float errorTable[2][Q3_MAX_GRID_SIZE];

	for ( i = 0; i < width; i++ ) {
		for ( j = 0; j < height; j++ ) {
			ctrl[j][i] = points[j * width + i];
		}
	}

	for ( dir = 0; dir < 2; dir++ ) {

		for ( j = 0; j < Q3_MAX_GRID_SIZE; j++ ) {
			errorTable[dir][j] = 0;
		}

		// horizontal subdivisions
		for ( j = 0; j + 2 < width; j += 2 ) {
			// check subdivided midpoints against control points

			// FIXME: also check midpoints of adjacent patches against the control points
			// this would basically stitch all patches in the same LOD group together.

			maxLen = 0;
			for ( i = 0; i < height; i++ ) {
				float midxyz[3];
				float curveDir[3];
				float projected[3];
				float d;

				// calculate the point on the curve
				for ( l = 0; l < 3; l++ ) {
					midxyz[l] = ( ctrl[i][j].xyz[l] + ctrl[i][j + 1].xyz[l] * 2
								  + ctrl[i][j + 2].xyz[l] ) * 0.25f;
				}

				// see how far off the line it is
				// using dist-from-line will not account for internal
				// texture warping, but it gives a lot less polygons than
				// dist-from-midpoint
				vSub( midxyz, ctrl[i][j].xyz, midxyz );
				vSub( ctrl[i][j + 2].xyz, ctrl[i][j].xyz, curveDir );
				vNormalize2( curveDir, curveDir );

				d = vDot( midxyz, curveDir );
				vScale( curveDir, d, projected );
				vSub( midxyz, projected, midxyz );
				len = vLengthSquared( midxyz );            // we will do the sqrt later

				if ( len > maxLen ) {
					maxLen = len;
				}
			}

			maxLen = idMath::Sqrt( maxLen );
			// if all the points are on the lines, remove the entire columns
			if ( maxLen < 0.1f ) {
				errorTable[dir][j + 1] = 999;
				continue;
			}

			// see if we want to insert subdivided columns
			if ( width + 2 > Q3_MAX_GRID_SIZE ) {
				errorTable[dir][j + 1] = 1.0f / maxLen;
				continue;   // can't subdivide any more
			}

			if ( maxLen <= r_subdivisions.GetFloat() ) {
				errorTable[dir][j + 1] = 1.0f / maxLen;
				continue;   // didn't need subdivision
			}

			errorTable[dir][j + 2] = 1.0f / maxLen;

			// insert two columns and replace the peak
			width += 2;
			for ( i = 0; i < height; i++ ) {
				LerpVert( &ctrl[i][j], &ctrl[i][j + 1], &prev );
				LerpVert( &ctrl[i][j + 1], &ctrl[i][j + 2], &next );
				LerpVert( &prev, &next, &mid );

				for ( k = width - 1; k > j + 3; k-- ) {
					ctrl[i][k] = ctrl[i][k - 2];
				}
				ctrl[i][j + 1] = prev;
				ctrl[i][j + 2] = mid;
				ctrl[i][j + 3] = next;
			}

			// back up and recheck this set again, it may need more subdivision
			j -= 2;
		}

		Transpose( width, height, ctrl );
		t = width;
		width = height;
		height = t;
	}

	// put all the aproximating points on the curve
	PutPointsOnCurve( ctrl, width, height );

	// cull out any rows or columns that are colinear
	for ( i = 1; i < width - 1; i++ ) {
		if ( errorTable[0][i] != 999 ) {
			continue;
		}
		for ( j = i + 1; j < width; j++ ) {
			for ( k = 0; k < height; k++ ) {
				ctrl[k][j - 1] = ctrl[k][j];
			}
			errorTable[0][j - 1] = errorTable[0][j];
		}
		width--;
	}

	for ( i = 1; i < height - 1; i++ ) {
		if ( errorTable[1][i] != 999 ) {
			continue;
		}
		for ( j = i + 1; j < height; j++ ) {
			for ( k = 0; k < width; k++ ) {
				ctrl[j - 1][k] = ctrl[j][k];
			}
			errorTable[1][j - 1] = errorTable[1][j];
		}
		height--;
	}

	// flip for longest tristrips as an optimization
	// the results should be visually identical with or
	// without this step
	if ( height > width ) {
		Transpose( width, height, ctrl );
		InvertErrorTable( errorTable, width, height );
		t = width;
		width = height;
		height = t;
		InvertCtrl( width, height, ctrl );
	}

	// calculate normals
	MakeMeshNormals( width, height, ctrl );

	// copy the results out to a flat grid
	q3BspDrawVert_t *verts = (q3BspDrawVert_t *) malloc( width * height * sizeof( verts[0] ) );
	for ( i = 0; i < width; i++ ) {
		for ( j = 0; j < height; j++ ) {
			verts[j * width + i] = ctrl[j][i];
		}
	}

	*outWidth = width;
	*outHeight = height;
	*outVerts = verts;
	return true;
}
