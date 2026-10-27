# Build digest

commit: 9594b67bf6f6

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: cancelled
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Shadow.cpp:64:8: error: unknown type name 'idCVar'
src/renderer-bfg/Shadow.cpp:64:45: error: use of undeclared identifier 'CVAR_RENDERER'
src/renderer-bfg/Shadow.cpp:91:81: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1

### failure context

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o

```
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src/renderer-bfg/../idlib/math/Vector.h:1500:44: note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
      |                              idVec5::s
src/renderer-bfg/../idlib/math/Vector.h:1078:7: note: 'idVec5::s' declared here
 1078 | float s;
      |       ^
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
11 errors generated.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Shadow.cpp:64:8: error: unknown type name 'idCVar'
src/renderer-bfg/Shadow.cpp:64:45: error: use of undeclared identifier 'CVAR_RENDERER'
src/renderer-bfg/Shadow.cpp:91:81: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o

```
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src/renderer-bfg/../idlib/math/Vector.h:1500:44: note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
      |                              idVec5::s
src/renderer-bfg/../idlib/math/Vector.h:1078:7: note: 'idVec5::s' declared here
 1078 | float s;
      |       ^
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
11 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Shadow.cpp:64:8: error: unknown type name 'idCVar'
src/renderer-bfg/Shadow.cpp:64:45: error: use of undeclared identifier 'CVAR_RENDERER'
src/renderer-bfg/Shadow.cpp:91:81: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o

```
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src/renderer-bfg/../idlib/math/Vector.h:1500:44: note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
      |                              idVec5::s
src/renderer-bfg/../idlib/math/Vector.h:1078:7: note: 'idVec5::s' declared here
 1078 | float s;
      |       ^
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
11 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: cancelled

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Shadow.cpp:64:8: error: unknown type name 'idCVar'
src/renderer-bfg/Shadow.cpp:64:45: error: use of undeclared identifier 'CVAR_RENDERER'
src/renderer-bfg/Shadow.cpp:91:81: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: expected ')'
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o

```
src/renderer-bfg/Shadow.cpp:91:23: error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src/renderer-bfg/../idlib/math/Vector.h:1500:44: note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src/renderer-bfg/Shadow.cpp:92:2: error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src/renderer-bfg/Shadow.cpp:92:9: error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src/renderer-bfg/Shadow.cpp:92:16: error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src/renderer-bfg/Shadow.cpp:92:23: error: use of undeclared identifier 's'; did you mean 'idVec5::s'?
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
      |                              idVec5::s
src/renderer-bfg/../idlib/math/Vector.h:1078:7: note: 'idVec5::s' declared here
 1078 | float s;
      |       ^
src/renderer-bfg/Shadow.cpp:92:23: error: invalid use of non-static data member 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src/renderer-bfg/Shadow.cpp:95:2: error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
11 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o] Error 1
```


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release

status: failure

errors: 11
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Shadow.cpp(64,8): error: unknown type name 'idCVar'
src\renderer-bfg\Shadow.cpp(64,45): error: use of undeclared identifier 'CVAR_RENDERER'
src\renderer-bfg\Shadow.cpp(91,81): error: expected ')'
src\renderer-bfg\Shadow.cpp(91,23): error: expected ')'
src\renderer-bfg\Shadow.cpp(91,23): error: array has incomplete element type 'void'
src\renderer-bfg\Shadow.cpp(92,2): error: use of undeclared identifier 'o'
src\renderer-bfg\Shadow.cpp(92,9): error: use of undeclared identifier 'v'
src\renderer-bfg\Shadow.cpp(92,16): error: use of undeclared identifier 'b'
src\renderer-bfg\Shadow.cpp(92,23): error: use of undeclared identifier 's'
src\renderer-bfg\Shadow.cpp(95,2): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Error 1

### failure context

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj

```
src\renderer-bfg\../idlib\math/Vector.h(1500,48): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                                ^
src\renderer-bfg\Shadow.cpp(91,23): note: to match this '('
src\renderer-bfg\../idlib\math/Vector.h(1500,37): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                     ^
src\renderer-bfg\Shadow.cpp(91,23): error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src\renderer-bfg\../idlib\math/Vector.h(1500,44): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src\renderer-bfg\Shadow.cpp(92,2): error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src\renderer-bfg\Shadow.cpp(92,9): error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src\renderer-bfg\Shadow.cpp(92,16): error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src\renderer-bfg\Shadow.cpp(92,23): error: use of undeclared identifier 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src\renderer-bfg\Shadow.cpp(95,2): error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
10 errors generated.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 11
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Shadow.cpp(64,8): error: unknown type name 'idCVar'
src\renderer-bfg\Shadow.cpp(64,45): error: use of undeclared identifier 'CVAR_RENDERER'
src\renderer-bfg\Shadow.cpp(91,81): error: expected ')'
src\renderer-bfg\Shadow.cpp(91,23): error: expected ')'
src\renderer-bfg\Shadow.cpp(91,23): error: array has incomplete element type 'void'
src\renderer-bfg\Shadow.cpp(92,2): error: use of undeclared identifier 'o'
src\renderer-bfg\Shadow.cpp(92,9): error: use of undeclared identifier 'v'
src\renderer-bfg\Shadow.cpp(92,16): error: use of undeclared identifier 'b'
src\renderer-bfg\Shadow.cpp(92,23): error: use of undeclared identifier 's'
src\renderer-bfg\Shadow.cpp(95,2): error: expected ';' after top level declarator
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj

```
src\renderer-bfg\../idlib\math/Vector.h(1500,48): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                                ^
src\renderer-bfg\Shadow.cpp(91,23): note: to match this '('
src\renderer-bfg\../idlib\math/Vector.h(1500,37): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                     ^
src\renderer-bfg\Shadow.cpp(91,23): error: array has incomplete element type 'void'
   91 | static ID_INLINE void VectorMA( const vec3_t v, float s, const vec3_t b, vec3_t o ) {
      |                       ^
src\renderer-bfg\../idlib\math/Vector.h(1500,44): note: expanded from macro 'VectorMA'
 1500 | #define VectorMA( v, s, b, o )      ( ( o )[0] = ( v )[0] + ( b )[0] * ( s ),( o )[1] = ( v )[1] + ( b )[1] * ( s ),( o )[2] = ( v )[2] + ( b )[2] * ( s ) )
      |                                            ^
src\renderer-bfg\Shadow.cpp(92,2): error: use of undeclared identifier 'o'
   92 |         o[0] = v[0] + b[0] * s;
      |         ^
src\renderer-bfg\Shadow.cpp(92,9): error: use of undeclared identifier 'v'
   92 |         o[0] = v[0] + b[0] * s;
      |                ^
src\renderer-bfg\Shadow.cpp(92,16): error: use of undeclared identifier 'b'
   92 |         o[0] = v[0] + b[0] * s;
      |                       ^
src\renderer-bfg\Shadow.cpp(92,23): error: use of undeclared identifier 's'
   92 |         o[0] = v[0] + b[0] * s;
      |                              ^
src\renderer-bfg\Shadow.cpp(95,2): error: expected ';' after top level declarator
   95 | }
      |  ^
      |  ;
10 errors generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

