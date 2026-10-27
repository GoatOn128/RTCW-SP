// MD5 version 10 text loader. Wolf-specific rendering attributes live in an
// optional .md5meta sidecar; the mesh and animation remain standard MD5 files.
#include "tr_local.h"
#include <vector>
#include <string>
#include <stdexcept>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <cstddef>
#include <charconv>

namespace {
void Require( bool ok, const char *message ) {
	if ( !ok ) {
		throw std::runtime_error( message );
	}
}

struct Text {
	std::string data;
	size_t at = 0;
	explicit Text( const char *path, bool required = true, bool allowEmpty = false ) {
		// MD5 animation text can be much larger than the decoded model. Read
		// directly into heap storage instead of exhausting the level's hunk
		// with an FS_ReadFile temporary allocation and a second string copy.
		struct File {
			fileHandle_t handle = 0;
			~File() {
				if ( handle ) {
					ri.FS_FCloseFile( handle );
				}
			}
		} file;
		int size = ri.FS_FOpenFileRead( path, &file.handle, qfalse );
		if ( !file.handle ) {
			Require( !required, "missing MD5 file" );
			return;
		}
		if ( size == 0 && allowEmpty ) {
			return;
		}
		Require( size > 0 && size <= 128 * 1024 * 1024, "empty or oversized MD5 file" );
		data.resize( size );
		Require( ri.FS_Read( &data[0], size, file.handle ) == size, "incomplete MD5 file read" );
	}
	std::string Token() {
		for ( ;; ) {
			while ( at < data.size() && (unsigned char)data[at] <= ' ' ) {
				++at;
			}
			if ( data.compare( at, 2, "//" ) == 0 ) {
				while ( at < data.size() && data[at] != '\n' ) {
					++at;
				}
			} else if ( data.compare( at, 2, "/*" ) == 0 ) {
				size_t end = data.find( "*/", at + 2 );
				Require( end != std::string::npos, "unterminated comment" );
				at = end + 2;
			} else {
				break;
			}
		}
		Require( at < data.size(), "unexpected end of MD5 file" );
		char c = data[at++];
		if ( c == '"' ) {
			size_t start = at;
			while ( at < data.size() && data[at] != '"' ) {
				++at;
			}
			Require( at < data.size(), "unterminated string" );
			std::string result = data.substr( start, at - start );
			++at;
			return result;
		}
		if ( c == '{' || c == '}' || c == '(' || c == ')' ) {
			return std::string( 1, c );
		}
		size_t start = at - 1;
		while ( at < data.size() && (unsigned char)data[at] > ' ' && data[at] != '{' && data[at] != '}' &&
				data[at] != '(' && data[at] != ')' ) {
			++at;
		}
		return data.substr( start, at - start );
	}
	void Expect( const char *value ) {
		Require( Token() == value, "unexpected MD5 token" );
	}
	int Int( int low = INT_MIN, int high = INT_MAX ) {
		double value = Double();
		Require( value >= low && value <= high && value == floor( value ), "invalid MD5 integer" );
		return (int)value;
	}
	double Double() {
		std::string token = Token();
		const char *begin = token.data();
		const char *end = begin + token.size();
		if ( begin != end && *begin == '+' ) {
			++begin;
		}
		double value = 0;
		auto result = std::from_chars( begin, end, value, std::chars_format::general );
		if ( result.ec != std::errc() || result.ptr != end || !std::isfinite( value ) || fabs( value ) >= 1e20 ) {
			throw std::runtime_error( "invalid MD5 float: " + token );
		}
		return value;
	}
	float Float() {
		return (float)Double();
	}
	void Vec( float *v, int n = 3 ) {
		Expect( "(" );
		for ( int i = 0; i < n; ++i ) {
			v[i] = Float();
		}
		Expect( ")" );
	}
	void Vec( double *v, int n = 3 ) {
		Expect( "(" );
		for ( int i = 0; i < n; ++i ) {
			v[i] = Double();
		}
		Expect( ")" );
	}
	void End() {
		// Permit trailing whitespace and comments, but no trailing data.
		data += "\n __md5_end__";
		Expect( "__md5_end__" );
	}
};

void Name( char *dst, const std::string &src ) {
	Require( src.size() < MAX_QPATH, "MD5 name exceeds MAX_QPATH" );
	Q_strncpyz( dst, src.c_str(), MAX_QPATH );
}
void FinishQuat( const double *xyz, vec4_t q ) {
	double n = xyz[0] * xyz[0] + xyz[1] * xyz[1] + xyz[2] * xyz[2];
	Require( n <= 1.001f, "invalid MD5 quaternion" );
	double w = -sqrt( n < 1 ? 1 - n : 0 );
	double length = sqrt( n + w * w );
	for ( int k = 0; k < 3; ++k ) {
		q[k] = (float)( xyz[k] / length );
	}
	q[3] = (float)( w / length );
}
void MultiplyQuat( const vec4_t a, const vec4_t b, vec4_t out ) {
	out[0] = a[3] * b[0] + a[0] * b[3] + a[1] * b[2] - a[2] * b[1];
	out[1] = a[3] * b[1] - a[0] * b[2] + a[1] * b[3] + a[2] * b[0];
	out[2] = a[3] * b[2] + a[0] * b[1] - a[1] * b[0] + a[2] * b[3];
	out[3] = a[3] * b[3] - a[0] * b[0] - a[1] * b[1] - a[2] * b[2];
}
void Transform( const vec3_t m[3], const vec3_t in, vec3_t out ) {
	for ( int i = 0; i < 3; ++i ) {
		out[i] = DotProduct( m[i], in );
	}
}
struct Vertex {
	vec3_t normal = {};
	vec2_t uv;
	int first, count;
};
struct Mesh {
	std::string name, shader;
	std::vector<Vertex> verts;
	std::vector<skelTriangle_t> tris;
	std::vector<skelWeight_t> weights;
};
struct Bounds {
	vec3_t v[2];
};

void Version( Text &t ) {
	t.Expect( "MD5Version" );
	Require( t.Int() == 10, "unsupported MD5 version" );
	t.Expect( "commandline" );
	t.Token();
}

void ReadAnim( Text &t, const std::vector<skelBoneInfo_t> &bones, std::vector<skelPose_t> &poses,
			   std::vector<Bounds> &bounds ) {
	Version( t );
	t.Expect( "numFrames" );
	int nf = t.Int( 1, 65536 );
	t.Expect( "numJoints" );
	int nb = t.Int( 1, SKEL_MAX_BONES );
	Require( nb == (int)bones.size() && (size_t)nf * nb * sizeof( skelPose_t ) < 128 * 1024 * 1024,
			 "MD5 skeleton size mismatch" );
	t.Expect( "frameRate" );
	t.Int( 1, 1000 );
	t.Expect( "numAnimatedComponents" );
	int nc = t.Int( 0, nb * 6 );
	std::vector<int> flags( nb ), starts( nb ), used( nc, 0 );
	t.Expect( "hierarchy" );
	t.Expect( "{" );
	for ( int i = 0; i < nb; ++i ) {
		Require( t.Token() == bones[i].name, "MD5 joint name mismatch" );
		Require( t.Int( -1, i - 1 ) == bones[i].parent, "MD5 joint parent mismatch" );
		flags[i] = t.Int( 0, 63 );
		starts[i] = t.Int( 0, nc );
		int n = 0;
		for ( int k = 0; k < 6; ++k ) {
			if ( flags[i] & ( 1 << k ) ) {
				++n;
			}
		}
		Require( starts[i] + n <= nc, "MD5 component range out of bounds" );
		for ( int k = 0; k < n; ++k ) {
			Require( !used[starts[i] + k]++, "overlapping MD5 components" );
		}
	}
	for ( int i = 0; i < nc; ++i ) {
		Require( used[i] == 1, "unused MD5 component" );
	}
	t.Expect( "}" );
	t.Expect( "bounds" );
	t.Expect( "{" );
	bounds.resize( nf );
	for ( int i = 0; i < nf; ++i ) {
		t.Vec( bounds[i].v[0] );
		t.Vec( bounds[i].v[1] );
		for ( int k = 0; k < 3; ++k ) {
			Require( bounds[i].v[0][k] <= bounds[i].v[1][k], "inverted MD5 bounds" );
		}
	}
	t.Expect( "}" );
	t.Expect( "baseframe" );
	t.Expect( "{" );
	struct Components {
		double v[6];
	};
	std::vector<Components> base( nb );
	for ( int i = 0; i < nb; ++i ) {
		t.Vec( base[i].v );
		t.Vec( base[i].v + 3 );
	}
	t.Expect( "}" );
	poses.resize( (size_t)nf * nb );
	std::vector<double> values( nc );
	for ( int f = 0; f < nf; ++f ) {
		t.Expect( "frame" );
		Require( t.Int() == f, "out of order MD5 frame" );
		t.Expect( "{" );
		for ( int i = 0; i < nc; ++i ) {
			values[i] = t.Double();
		}
		t.Expect( "}" );
		for ( int i = 0; i < nb; ++i ) {
			Components c = base[i];
			skelPose_t local;
			int at = starts[i];
			for ( int k = 0; k < 6; ++k ) {
				if ( flags[i] & ( 1 << k ) ) {
					c.v[k] = values[at++];
				}
			}
			for ( int k = 0; k < 3; ++k ) {
				local.translation[k] = (float)c.v[k];
			}
			FinishQuat( c.v + 3, local.rotation );
			skelPose_t &pose = poses[(size_t)f * nb + i];
			int parent = bones[i].parent;
			if ( parent < 0 ) {
				pose = local;
			} else {
				const skelPose_t &p = poses[(size_t)f * nb + parent];
				vec3_t matrix[3];
				R_MD5QuatMatrix( p.rotation, matrix );
				Transform( matrix, local.translation, pose.translation );
				VectorAdd( pose.translation, p.translation, pose.translation );
				MultiplyQuat( p.rotation, local.rotation, pose.rotation );
			}
		}
	}
	t.End();
}
} // namespace

void R_MD5QuatMatrix( const vec4_t q, vec3_t m[3] ) {
	float x = q[0], y = q[1], z = q[2], w = q[3];
	m[0][0] = 1 - 2 * ( y * y + z * z );
	m[0][1] = 2 * ( x * y - z * w );
	m[0][2] = 2 * ( x * z + y * w );
	m[1][0] = 2 * ( x * y + z * w );
	m[1][1] = 1 - 2 * ( x * x + z * z );
	m[1][2] = 2 * ( y * z - x * w );
	m[2][0] = 2 * ( x * z - y * w );
	m[2][1] = 2 * ( y * z + x * w );
	m[2][2] = 1 - 2 * ( x * x + y * y );
}

void R_MD5BlendQuat( const vec4_t a, const vec4_t b, float fraction, vec4_t out ) {
	float dot = 0;
	for ( int i = 0; i < 4; ++i ) {
		dot += a[i] * b[i];
	}
	float sign = dot < 0 ? -1.0f : 1.0f;
	dot = fabsf( dot );
	float wa = 1 - fraction, wb = fraction;
	if ( dot < 0.9995f ) {
		float angle = acosf( dot ), divisor = sinf( angle );
		wa = sinf( ( 1 - fraction ) * angle ) / divisor;
		wb = sinf( fraction * angle ) / divisor;
	}
	float n = 0;
	for ( int i = 0; i < 4; ++i ) {
		out[i] = wa * a[i] + sign * wb * b[i];
		n += out[i] * out[i];
	}
	n = 1 / sqrtf( n );
	for ( int i = 0; i < 4; ++i ) {
		out[i] *= n;
	}
}

qboolean R_LoadMD5( model_t *mod, const char *name ) {
	try {
		Text t( name );
		Version( t );
		t.Expect( "numJoints" );
		int nb = t.Int( 1, SKEL_MAX_BONES );
		t.Expect( "numMeshes" );
		int ns = t.Int( 1, SKEL_MAX_SURFACES );
		std::vector<skelBoneInfo_t> bones( nb );
		std::vector<skelPose_t> bind( nb ), poses;
		std::vector<Bounds> bounds;
		std::vector<skelTag_t> tags;
		std::vector<Mesh> meshes( ns );
		t.Expect( "joints" );
		t.Expect( "{" );
		for ( int i = 0; i < nb; ++i ) {
			Name( bones[i].name, t.Token() );
			bones[i].parent = t.Int( -1, i - 1 );
			double xyz[3];
			t.Vec( bind[i].translation );
			t.Vec( xyz );
			FinishQuat( xyz, bind[i].rotation );
			for ( int j = 0; j < i; ++j ) {
				Require( strcmp( bones[i].name, bones[j].name ) != 0, "duplicate MD5 joint" );
			}
			if ( !strncmp( bones[i].name, "tag_", 4 ) ) {
				skelTag_t tag = {};
				Name( tag.name, bones[i].name );
				tag.boneIndex = i;
				tags.push_back( tag );
				bones[i].flags = BONEFLAG_TAG;
			}
		}
		t.Expect( "}" );
		for ( int s = 0; s < ns; ++s ) {
			Mesh &m = meshes[s];
			t.Expect( "mesh" );
			t.Expect( "{" );
			t.Expect( "shader" );
			m.shader = t.Token();
			Require( m.shader.size() < MAX_QPATH, "MD5 shader name too long" );
			m.name = "mesh" + std::to_string( s );
			t.Expect( "numverts" );
			int nv = t.Int( 1, SHADER_MAX_VERTEXES - 1 );
			Require( nv <= SKEL_MAX_VERTS, "too many MD5 vertices" );
			m.verts.resize( nv );
			for ( int i = 0; i < nv; ++i ) {
				Vertex &v = m.verts[i];
				t.Expect( "vert" );
				Require( t.Int() == i, "out of order MD5 vertex" );
				t.Vec( v.uv, 2 );
				v.first = t.Int( 0, nv * 128 );
				v.count = t.Int( 1, 128 );
			}
			t.Expect( "numtris" );
			int ntri = t.Int( 0, ( SHADER_MAX_INDEXES - 1 ) / 3 );
			m.tris.resize( ntri );
			for ( int i = 0; i < ntri; ++i ) {
				t.Expect( "tri" );
				Require( t.Int() == i, "out of order MD5 triangle" );
				for ( int k = 0; k < 3; ++k ) {
					m.tris[i].indexes[k] = t.Int( 0, nv - 1 );
				}
			}
			t.Expect( "numweights" );
			int nw = t.Int( 1, nv * 128 );
			m.weights.resize( nw );
			for ( int i = 0; i < nw; ++i ) {
				skelWeight_t &w = m.weights[i];
				t.Expect( "weight" );
				Require( t.Int() == i, "out of order MD5 weight" );
				w.boneIndex = t.Int( 0, nb - 1 );
				w.boneWeight = t.Float();
				t.Vec( w.offset );
				Require( w.boneWeight >= 0 && w.boneWeight <= 1.001f, "invalid MD5 weight" );
			}
			t.Expect( "}" );
			// Standard MD5 has no normals: derive bind normals and store them
			// in the first influencing joint's space for the CPU skinning path.
			struct Point {
				vec3_t xyz;
			};
			std::vector<Point> points( nv );
			for ( int i = 0; i < nv; ++i ) {
				Vertex &v = m.verts[i];
				Require( v.first + v.count <= nw, "MD5 vertex weight range out of bounds" );
				float total = 0;
				for ( int k = 0; k < v.count; ++k ) {
					const skelWeight_t &w = m.weights[v.first + k];
					const skelPose_t &p = bind[w.boneIndex];
					vec3_t matrix[3], xyz;
					R_MD5QuatMatrix( p.rotation, matrix );
					Transform( matrix, w.offset, xyz );
					VectorAdd( xyz, p.translation, xyz );
					VectorMA( points[i].xyz, w.boneWeight, xyz, points[i].xyz );
					total += w.boneWeight;
				}
				Require( fabsf( total - 1 ) < 0.02f, "MD5 weights do not sum to one" );
			}
			for ( const auto &tri : m.tris ) {
				vec3_t a, b, n;
				VectorSubtract( points[tri.indexes[1]].xyz, points[tri.indexes[0]].xyz, a );
				VectorSubtract( points[tri.indexes[2]].xyz, points[tri.indexes[0]].xyz, b );
				CrossProduct( b, a, n );
				for ( int k = 0; k < 3; ++k ) {
					VectorAdd( m.verts[tri.indexes[k]].normal, n, m.verts[tri.indexes[k]].normal );
				}
			}
			for ( int i = 0; i < nv; ++i ) {
				Vertex &v = m.verts[i];
				vec3_t matrix[3], n;
				R_MD5QuatMatrix( bind[m.weights[v.first].boneIndex].rotation, matrix );
				VectorNormalize( v.normal );
				for ( int k = 0; k < 3; ++k ) {
					n[k] = matrix[0][k] * v.normal[0] + matrix[1][k] * v.normal[1] + matrix[2][k] * v.normal[2];
				}
				VectorCopy( n, v.normal );
			}
		}
		t.End();
		std::string base( name );
		base.resize( base.find_last_of( '.' ) );
		Text animation( ( base + ".md5anim" ).c_str(), false );
		if ( !animation.data.empty() ) {
			ReadAnim( animation, bones, poses, bounds );
		} else {
			poses = bind;
			bounds.resize( 1 );
			ClearBounds( bounds[0].v[0], bounds[0].v[1] );
			for ( const Mesh &m : meshes ) {
				for ( const Vertex &v : m.verts ) {
					vec3_t xyz = {};
					for ( int k = 0; k < v.count; ++k ) {
						const skelWeight_t &w = m.weights[v.first + k];
						vec3_t matrix[3], p;
						R_MD5QuatMatrix( bind[w.boneIndex].rotation, matrix );
						Transform( matrix, w.offset, p );
						VectorAdd( p, bind[w.boneIndex].translation, p );
						VectorMA( xyz, w.boneWeight, p, xyz );
					}
					AddPointToBounds( xyz, bounds[0].v[0], bounds[0].v[1] );
				}
			}
		}
		int torsoParent = 0;
		Text meta( ( base + ".md5meta" ).c_str(), false, true );
		if ( !meta.data.empty() ) {
			try {
				auto joint = [&]( const std::string &name ) {
					for ( int i = 0; i < nb; ++i ) {
						if ( name == bones[i].name ) {
							return i;
						}
					}
					throw std::runtime_error( "metadata references unknown joint: " + name );
				};
				// No counts or numeric joint indices. Directives can be omitted.
				meta.data += "\n __md5_end__";
				for ( std::string directive = meta.Token(); directive != "__md5_end__"; directive = meta.Token() ) {
					if ( directive == "wolfMD5" ) {
						Require( meta.Int() == 2, "metadata must use the designer-friendly version 2 format" );
					} else if ( directive == "torso" ) {
						meta.Expect( "{" );
						for ( std::string field = meta.Token(); field != "}"; field = meta.Token() ) {
							if ( field == "parent" ) {
								torsoParent = joint( meta.Token() );
							} else if ( field == "weight" ) {
								int root = joint( meta.Token() );
								float weight = meta.Float();
								Require( weight >= 0 && weight <= 1, "torso weight must be between 0 and 1" );
								// A weight applies to the named joint's whole branch.
								// Later entries can override individual sub-branches.
								for ( int i = root; i < nb; ++i ) {
									int ancestor = i;
									while ( ancestor > root )
										ancestor = bones[ancestor].parent;
									if ( ancestor == root ) {
										bones[i].torsoWeight = weight;
									}
								}
							} else {
								throw std::runtime_error( "unknown torso setting: " + field );
							}
						}
					} else if ( directive == "tag" ) {
						skelTag_t tag = {};
						Name( tag.name, meta.Token() );
						tag.boneIndex = joint( meta.Token() );
						bones[tag.boneIndex].flags |= BONEFLAG_TAG;
						bool replaced = false;
						for ( auto &existing : tags ) {
							if ( !strcmp( existing.name, tag.name ) ) {
								existing = tag;
								replaced = true;
								break;
							}
						}
						if ( !replaced ) {
							Require( tags.size() < SKEL_MAX_TAGS, "too many attachment tags" );
							tags.push_back( tag );
						}
					} else if ( directive == "surface" ) {
						std::string selector = meta.Token();
						std::string name = meta.Token();
						Require( !name.empty() && name.size() < MAX_QPATH, "invalid surface name" );
						int selected = -1;
						for ( int i = 0; i < ns; ++i ) {
							if ( selector == "mesh" + std::to_string( i ) || selector == meshes[i].shader ) {
								Require( selected < 0, "ambiguous surface material; use mesh0, mesh1, etc." );
								selected = i;
							}
						}
						Require( selected >= 0, "metadata references unknown surface" );
						meshes[selected].name = name;
					} else {
						throw std::runtime_error( "unknown metadata setting: " + directive );
					}
				}
				Require( meta.at == meta.data.size(), "trailing metadata content" );
			} catch ( const std::exception &error ) {
				int line = 1;
				for ( size_t i = 0; i < meta.at && i < meta.data.size(); ++i ) {
					if ( meta.data[i] == '\n' ) {
						++line;
					}
				}
				throw std::runtime_error( base + ".md5meta:" + std::to_string( line ) + ": " + error.what() );
			}
		}

		int nf = (int)bounds.size();
		size_t frameSize = offsetof( skelFrame_t, bones ) + nb * sizeof( skelPose_t );
		size_t size =
			sizeof( skelHeader_t ) + nf * frameSize + nb * sizeof( skelBoneInfo_t ) + tags.size() * sizeof( skelTag_t );
		std::vector<size_t> sizes( ns );
		for ( int s = 0; s < ns; ++s ) {
			Mesh &m = meshes[s];
			size_t bytes = sizeof( skelSurface_t ) + m.tris.size() * sizeof( skelTriangle_t ) + nb * sizeof( int );
			for ( const Vertex &v : m.verts ) {
				bytes += offsetof( skelVertex_t, weights ) + v.count * sizeof( skelWeight_t );
			}
			sizes[s] = bytes;
			size += bytes;
		}
		Require( size < 256 * 1024 * 1024, "MD5 model exceeds memory limit" );
		// All text is validated before committing any hunk memory.
		skelHeader_t *h = (skelHeader_t *)ri.Hunk_Alloc( (int)size, h_low );
		memset( h, 0, size );
		h->numFrames = nf;
		h->numBones = nb;
		h->numSurfaces = ns;
		h->numTags = (int)tags.size();
		h->torsoParent = torsoParent;
		h->ofsEnd = (int)size;
		h->ofsFrames = sizeof( *h );
		h->ofsBones = h->ofsFrames + (int)( nf * frameSize );
		h->ofsTags = h->ofsBones + nb * sizeof( skelBoneInfo_t );
		h->ofsSurfaces = h->ofsTags + h->numTags * sizeof( skelTag_t );
		Name( h->name, name );
		memcpy( (byte *)h + h->ofsBones, bones.data(), nb * sizeof( skelBoneInfo_t ) );
		if ( !tags.empty() ) {
			memcpy( (byte *)h + h->ofsTags, tags.data(), tags.size() * sizeof( skelTag_t ) );
		}
		for ( int f = 0; f < nf; ++f ) {
			skelFrame_t *frame = (skelFrame_t *)( (byte *)h + h->ofsFrames + f * frameSize );
			memcpy( frame->bounds, bounds[f].v, sizeof( frame->bounds ) );
			for ( int k = 0; k < 3; ++k ) {
				frame->localOrigin[k] = ( frame->bounds[0][k] + frame->bounds[1][k] ) * 0.5f;
			}
			vec3_t extent;
			VectorSubtract( frame->bounds[1], frame->localOrigin, extent );
			frame->radius = VectorLength( extent );
			memcpy( frame->bones, &poses[(size_t)f * nb], nb * sizeof( skelPose_t ) );
		}
		size_t offset = h->ofsSurfaces;
		for ( int s = 0; s < ns; ++s ) {
			const Mesh &m = meshes[s];
			skelSurface_t *surf = (skelSurface_t *)( (byte *)h + offset );
			surf->ident = SF_MD5;
			Name( surf->name, m.name );
			Q_strlwr( surf->name );
			Name( surf->shader, m.shader );
			surf->shaderIndex = R_FindShader( surf->shader, LIGHTMAP_NONE, qtrue )->index;
			surf->ofsHeader = -(int)offset;
			surf->numVerts = (int)m.verts.size();
			surf->numTriangles = (int)m.tris.size();
			surf->ofsTriangles = sizeof( *surf );
			surf->numBoneReferences = nb;
			surf->ofsBoneReferences = surf->ofsTriangles + surf->numTriangles * sizeof( skelTriangle_t );
			surf->ofsVerts = surf->ofsBoneReferences + nb * sizeof( int );
			surf->ofsEnd = (int)sizes[s];
			if ( !m.tris.empty() ) {
				memcpy( (byte *)surf + surf->ofsTriangles, m.tris.data(), m.tris.size() * sizeof( skelTriangle_t ) );
			}
			int *refs = (int *)( (byte *)surf + surf->ofsBoneReferences );
			for ( int i = 0; i < nb; ++i ) {
				refs[i] = i;
			}
			skelVertex_t *v = (skelVertex_t *)( (byte *)surf + surf->ofsVerts );
			for ( const Vertex &input : m.verts ) {
				VectorCopy( input.normal, v->normal );
				v->texCoords[0] = input.uv[0];
				v->texCoords[1] = input.uv[1];
				v->numWeights = input.count;
				memcpy( v->weights, &m.weights[input.first], input.count * sizeof( skelWeight_t ) );
				v = (skelVertex_t *)&v->weights[v->numWeights];
			}
			offset += sizes[s];
		}
		mod->md5 = h;
		mod->type = MOD_MD5;
		mod->numLods = 1;
		mod->dataSize = (int)size;
		return qtrue;
	} catch ( const std::exception &error ) {
		ri.Printf( PRINT_WARNING, "R_LoadMD5: %s: %s\n", name, error.what() );
		return qfalse;
	}
}
