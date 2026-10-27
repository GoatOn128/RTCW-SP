# Build digest

commit: f6b7e1176f36

- ubuntu-latest-x64-debug: cancelled
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: failure
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: cancelled
- windows-latest-x86-debug: cancelled
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release

status: cancelled

errors: 4
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o

```
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
ranlib build/linux-x64-release/libidlib.a
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                                 ^
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:37: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                     ^
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:43: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                           ^
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
src/renderer-bfg/../idlib/math/Math.h:55:35: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                   ^
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
3 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o

```
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wn
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                                 ^
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:37: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                     ^
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:43: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                           ^
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
src/renderer-bfg/../idlib/math/Math.h:55:35: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                   ^
3 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o

```
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
src/renderer-bfg/Backend.cpp:58:33: error: expected unqualified-id
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                                 ^
src/renderer-bfg/Backend.cpp:58:33: error: expected ')'
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:37: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                     ^
src/renderer-bfg/Backend.cpp:58:24: error: expected ')'
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src/renderer-bfg/../idlib/math/Math.h:55:43: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                           ^
src/renderer-bfg/Backend.cpp:58:24: note: to match this '('
src/renderer-bfg/../idlib/math/Math.h:55:35: note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                   ^
3 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o] Error 1
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

status: failure

errors: 4
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Backend.cpp(58,33): error: expected unqualified-id
src\renderer-bfg\Backend.cpp(58,33): error: expected ')'
src\renderer-bfg\Backend.cpp(58,24): error: expected ')'
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj

```
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj /c src\renderer-bfg\Model_mds.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj /c src\renderer-bfg\Material.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj /c src\renderer-bfg\MaterialManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj /c src\renderer-bfg\Material_shader.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj /c src\renderer-bfg\Shadow.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-st
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj /c src\renderer-bfg\Backend.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj /c src\renderer-bfg\ImageManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
src\renderer-bfg\Backend.cpp(58,33): error: expected unqualified-id
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                                 ^
src\renderer-bfg\Backend.cpp(58,33): error: expected ')'
src\renderer-bfg\Backend.cpp(58,24): note: to match this '('
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src\renderer-bfg\../idlib\math/Math.h(55,37): note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                     ^
src\renderer-bfg\Backend.cpp(58,24): error: expected ')'
   58 | static ID_INLINE float DEG2RAD( float a ) {
      |                        ^
src\renderer-bfg\../idlib\math/Math.h(55,43): note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                           ^
src\renderer-bfg\Backend.cpp(58,24): note: to match this '('
src\renderer-bfg\../idlib\math/Math.h(55,35): note: expanded from macro 'DEG2RAD'
   55 | #define DEG2RAD( a )              ( ( a ) * idMath::M_DEG2RAD )
      |                                   ^
3 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

