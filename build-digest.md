# Build digest

commit: 6304e8e2a680

- ubuntu-latest-x64-debug: cancelled
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** Do not know how to make File target `build/linux-x64-release/idlib.a' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x64-release/idlib.a).

### failure context


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** Do not know how to make File target `build/linux-x86-debug/idlib.a' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-debug/idlib.a).

### failure context


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** Do not know how to make File target `build/linux-x86-release/idlib.a' (/home/runner/work/RTCW-SP/RTCW-SP/build/linux-x86-release/idlib.a).

### failure context


### warning kinds

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 35
warnings: 0 in 0 kinds

### errors

src\idlib\../idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\Str.h(341,In file included from 41)src\idlib\Lib.cpp:: 29error: :
| src\idlib\Str.h        (s341t,a41t)i:c  error: vunknown type name 'idCmdArgs'o
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Rotation.cpp.obj] Error 1
src\idlib\bv\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\bv\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\VecX.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Bounds.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\MatX.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Box.cpp.obj] Error 1
src\idlib\geometry\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\geometry\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\bv\Sphere.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj

```
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,In file included from 41)src\idlib\Lib.cpp:: 29error: :
unknown type name 'idCmdArgs'In file included from 
src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:  264341:
 | src\idlib\Str.h        (s341t,a41t)i:c  error: vunknown type name 'idCmdArgs'o
id                     S  h341o | w        MsetmaotriycU svaogied_     f        (         SchoonwsMte miodrCymUdsAargges_ f&(a rcgosn s)t; 
i      d| C                                                                 ^m
dArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj

```
      |  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,In file included from 41)src\idlib\Lib.cpp:: 29error: :
unknown type name 'idCmdArgs'In file included from 
src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:  264341:
 | src\idlib\Str.h        (s341t,a41t)i:c  error: vunknown type name 'idCmdArgs'o
id                     S  h341o | w        MsetmaotriycU svaogied_     f        (         SchoonwsMte miodrCymUdsAargges_ f&(a rcgosn s)t; 
i      d| C                                                                 ^m
dArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj

```
src\idlib\Str.h(341,In file included from 41)src\idlib\Lib.cpp:: 29error: :
unknown type name 'idCmdArgs'In file included from 
src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:  264341:
 | src\idlib\Str.h        (s341t,a41t)i:c  error: vunknown type name 'idCmdArgs'o
id                     S  h341o | w        MsetmaotriycU svaogied_     f        (         SchoonwsMte miodrCymUdsAargges_ f&(a rcgosn s)t; 
i      d| C                                                                 ^m
dArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writ
3 errors generated.
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj

```
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writ
3 errors generated.
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj

```
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj

```
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj

```
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
2 errors generated.
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj

```
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
2 errors generated.
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj

```
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
```

- build\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj

```
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x64-debug\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 38
warnings: 0 in 0 kinds

### errors

src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directiveIn file included from
src\idlib\../idlib\sys/sys_types.h(28,2):    28error: unterminated conditional directive
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
341In file included from ,src\idlib\../idlib/precompiled.h41:)50: error: unknown type name 'idCmdArgs'
src\idlib\../idlib\Str.hs(t341a,t41i)c:  verror: ounknown type name 'idCmdArgs'i
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Error 1
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Error 1
41src\idlib\math\..\Str.h)(:341 ,41): error: unknown type name 'idCmdArgs'
error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\MatX.cpp.obj] Error 1
src\idlib\bv\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\bv\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Box.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Error 1
src\idlib\geometry\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\geometry\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Error 1

### failure context

- build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj

```
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.hIn file included from :264src\idlib\Heap.cpp:
:src\idlib\Str.h30(:
341In file included from ,src\idlib\../idlib/precompiled.h41:)50: error: unknown type name 'idCmdArgs'
:
In file included from src\idlib\../idlib\Lib.h  :341264 | :
        src\idlib\../idlib\Str.hs(t341a,t41i)c:  verror: ounknown type name 'idCmdArgs'i
d                     Sh  o341w | M        esmtoartyiUcs avgoei_df     (                 cSohnoswtM eimdoCrmydUAsraggse _&fa(r gcso n)s;t
       i| d                                                                 ^C
mdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj

```
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.hIn file included from :264src\idlib\Heap.cpp:
:src\idlib\Str.h30(:
341In file included from ,src\idlib\../idlib/precompiled.h41:)50: error: unknown type name 'idCmdArgs'
:
In file included from src\idlib\../idlib\Lib.h  :341264 | :
        src\idlib\../idlib\Str.hs(t341a,t41i)c:  verror: ounknown type name 'idCmdArgs'i
d                     Sh  o341w | M        esmtoartyiUcs avgoei_df     (                 cSohnoswtM eimdoCrmydUAsraggse _&fa(r gcso n)s;t
       i| d                                                                 ^C
mdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj /c src\idlib\sys\sys_assert.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strin
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.hIn file included from :264src\idlib\Heap.cpp:
:src\idlib\Str.h30(:
341In file included from ,src\idlib\../idlib/precompiled.h41:)50: error: unknown type name 'idCmdArgs'
:
In file included from src\idlib\../idlib\Lib.h  :341264 | :
        src\idlib\../idlib\Str.hs(t341a,t41i)c:  verror: ounknown type name 'idCmdArgs'i
d                     Sh  o341w | M        esmtoartyiUcs avgoei_df     (                 cSohnoswtM eimdoCrmydUAsraggse _&fa(r gcso n)s;t
       i| d                                                                 ^C
mdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj /c src\idlib\sys\sys_assert.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strin
scons: *** [build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wr
scons: *** [build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj

```
In file included from src\idlib\containers\../precompiled.h:41:
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj

```
      |  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
scons: *** [build\windows-x64-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Math.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj

```
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from In file included from src\idlib\math\Angles.cppsrc\idlib\math\../precompiled.h::3050:
:
In file included from In file included from src\idlib\math\../precompiled.hsrc\idlib\math\..\Lib.h::50264:
:
In file included from src\idlib\math\..\Str.hsrc\idlib\math\..\Lib.h(:341264,:
41src\idlib\math\..\Str.h)(:341 ,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj

```
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from In file included from src\idlib\math\Angles.cppsrc\idlib\math\../precompiled.h::3050:
:
In file included from In file included from src\idlib\math\../precompiled.hsrc\idlib\math\..\Lib.h::50264:
:
In file included from src\idlib\math\..\Str.hsrc\idlib\math\..\Lib.h(:341264,:
41src\idlib\math\..\Str.h)(:341 ,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj

```
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from In file included from src\idlib\math\Angles.cppsrc\idlib\math\../precompiled.h::3050:
:
In file included from In file included from src\idlib\math\../precompiled.hsrc\idlib\math\..\Lib.h::50264:
:
In file included from src\idlib\math\..\Str.hsrc\idlib\math\..\Lib.h(:341264,:
41src\idlib\math\..\Str.h)(:341 ,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
```

- build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj

```
In file included from In file included from src\idlib\math\../precompiled.hsrc\idlib\math\..\Lib.h::50264:
:
In file included from src\idlib\math\..\Str.hsrc\idlib\math\..\Lib.h(:341264,:
41src\idlib\math\..\Str.h)(:341 ,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x64-release\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 35
warnings: 0 in 0 kinds

### errors

src\idlib\../idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
| src\idlib\sys/sys_types.h#i(f28,2):n error: dunterminated conditional directivee
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Rotation.cpp.obj] Error 1
src\idlib\bv\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\bv\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\VecX.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Bounds.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\MatX.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Box.cpp.obj] Error 1
src\idlib\geometry\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\geometry\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-debug\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\bv\Sphere.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj

```
 | src\idlib\sys/sys_types.h#i(f28,2):n error: dunterminated conditional directivee
f SYS_   TY28PE | S#_iHf
n      d| e ^f
 SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj

```
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writ
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj

```
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Heap.cpp.obj] Error 1
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
3 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writ
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj /c src\idlib\math\Math.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x86-debug\idlib\obj\idlib\Str.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj

```
In file included from src\idlib\containers\../precompiled.h:41:
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj

```
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj

```
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Angles.cpp.obj /c src\idlib\math\Angles.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj /c src\idlib\math\Quat.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj

```
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
```

- build\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj

```
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Plane.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-depr
scons: *** [build\windows-x86-debug\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 35
warnings: 0 in 0 kinds

### errors

2src\idlib\sys/sys_types.h)(:28 ,2)error: :unterminated conditional directive
error: unterminated conditional directive
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj] Error 1
src\idlib\containers\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\VecX.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\MatX.cpp.obj] Error 1
src\idlib\bv\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\bv\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Bounds.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Box.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\bv\Sphere.cpp.obj] Error 1
src\idlib\geometry\..\sys/sys_types.h(28,2): error: unterminated conditional directive
src\idlib\geometry\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
scons: *** [build\windows-x86-release\idlib\obj\idlib\geometry\DrawVert.cpp.obj] Error 1
scons: *** [build\windows-x86-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj] Error 1

### failure context

- build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj

```
fndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj

```
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:41:
src\idlib\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
3 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\Lib.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Str.cpp:29:
In file included from src\idlib\precompiled.h:50:
In file included from src\idlib\Lib.h:264:
src\idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\Heap.cpp:30:
In file included from src\idlib\../idlib/precompiled.h:50:
In file included from src\idlib\../idlib\Lib.h:264:
src\idlib\../idlib\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
src\idlib\Str.cpp(1992,38): error: unknown type name 'idCmdArgs'
 1992 | void idStr::ShowMemoryUsage_f( const idCmdArgs &args ) {
      |                                      ^
scons: *** [build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj] Error 1
3 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj /c src\idlib\sys\sys_assert.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strin
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj /c src\idlib\containers\HashIndex.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wr
scons: *** [build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj

```
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:41:
src\idlib\sys\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\math\Math.cpp.obj

```
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\containers\HashIndex.cpp:30:
In file included from src\idlib\containers\../precompiled.h:50:
In file included from src\idlib\containers\..\Lib.h:264:
src\idlib\containers\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\sys\sys_assert.cpp:29:
In file included from src\idlib\sys\../precompiled.h:50:
In file included from src\idlib\sys\..\Lib.h:264:
src\idlib\sys\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Math.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\containers\HashIndex.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj /c src\idlib\math\Vector.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\sys\sys_assert.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj /c src\idlib\math\Matrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wn
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Math.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj

```
      |  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj

```
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj

```
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Vector.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Matrix.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
```

- build\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj

```
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
In file included from src\idlib\math\Angles.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Vector.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Plane.cpp.obj /c src\idlib\math\Plane.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-
2 errors generated.
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Angles.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\Rotation.cpp.obj /c src\idlib\math\Rotation.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Matrix.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\math\VecX.cpp.obj /c src\idlib\math\VecX.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-de
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:41:
src\idlib\math\..\sys/sys_types.h(28,2): error: unterminated conditional directive
   28 | #ifndef SYS_TYPES_H
      |  ^
In file included from src\idlib\math\Quat.cpp:30:
In file included from src\idlib\math\../precompiled.h:50:
In file included from src\idlib\math\..\Lib.h:264:
src\idlib\math\..\Str.h(341,41): error: unknown type name 'idCmdArgs'
  341 |         static void                     ShowMemoryUsage_f( const idCmdArgs &args );
      |                                                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\idlib\obj\idlib\math\Quat.cpp.obj] Error 1
```


### warning kinds

