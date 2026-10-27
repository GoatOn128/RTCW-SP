# Build digest

commit: b41ad0349ffd

- ubuntu-latest-x64-debug: cancelled
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: cancelled
- windows-latest-x64-release: failure
- windows-latest-x86-debug: cancelled
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release

status: cancelled

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/MaterialManager.cpp:157:29: error: redefinition of 'NumMaterials'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o

```
clang++ -o build/linux-x64-release/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
ar rc build/linux-x64-release/libidlib.a build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o build/linux-x64-release/idlib/obj/idlib/Token.cpp.o build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o build/linux-x64-release/idlib/obj/idlib/sys/sys_ass
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
ranlib build/linux-x64-release/libidlib.a
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
src/renderer-bfg/MaterialManager.cpp:157:29: error: redefinition of 'NumMaterials'
  157 | int idMaterialManagerLocal::NumMaterials() const {
      |                             ^
src/renderer-bfg/Material_local.h:50:33: note: previous definition is here
   50 | virtual int                     NumMaterials() const { return materials.Num(); }
      |                                 ^
1 error generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/MaterialManager.cpp:157:29: error: redefinition of 'NumMaterials'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o

```
clang++ -o build/linux-x86-debug/idlib/obj/idlib/geometry/RenderMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
ar rc build/linux-x86-debug/libidlib.a build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o build/linux-x86-debug/idlib/obj/idlib/Token.cpp.o build/linux-x86-debug/idlib/obj/idlib/Lexer.cpp.o build/linux-x86-debug/idlib/obj/idlib/Parser.cpp.o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o build/
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/GLContext.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy
ranlib build/linux-x86-debug/libidlib.a
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang -o build/linux-x86-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
src/renderer-bfg/MaterialManager.cpp:157:29: error: redefinition of 'NumMaterials'
  157 | int idMaterialManagerLocal::NumMaterials() const {
      |                             ^
src/renderer-bfg/Material_local.h:50:33: note: previous definition is here
   50 | virtual int                     NumMaterials() const { return materials.Num(); }
      |                                 ^
1 error generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\MaterialManager.cpp(157,29): error: redefinition of 'NumMaterials'
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Error 1

### failure context

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj

```
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj /c src\idlib\geometry\JointTransform.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj /c src\idlib\geometry\RenderMatrix.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj /c src\renderer-bfg\RenderWorld.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj /c src\renderer-bfg\RenderEntity.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj /c src\renderer-bfg\ScreenRect.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
llvm-lib /nologo /OUT:build\windows-x64-release\idlib.lib build\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj build\windows-x64-release\idlib\obj\idlib\Str.cpp.obj build\windows-x64-release\idlib\obj\idlib\Lib.cpp.obj build\windows-x64-release\idlib\obj\idlib\Token.cpp.obj build\windows-x64-release\idlib\obj\idlib\Lexer.cpp.obj build\windows-x64-release\idlib\obj\idlib\Parser.cpp.obj build\wind
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj /c src\renderer-bfg\RenderSystem.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declara
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj /c src\renderer-bfg\Q3Patch.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj /c src\renderer-bfg\RenderWorld_load.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declara
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj /c src\renderer-bfg\Model.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-st
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj /c src\renderer-bfg\ModelManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj /c src\renderer-bfg\Model_md3.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj /c src\renderer-bfg\Model_mdc.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj /c src\renderer-bfg\Model_mds.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj /c src\renderer-bfg\Material.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj /c src\renderer-bfg\MaterialManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
src\renderer-bfg\MaterialManager.cpp(157,29): error: redefinition of 'NumMaterials'
  157 | int idMaterialManagerLocal::NumMaterials() const {
      |                             ^
src\renderer-bfg\Material_local.h(50,33): note: previous definition is here
   50 | virtual int                     NumMaterials() const { return materials.Num(); }
      |                                 ^
1 error generated.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\MaterialManager.cpp(157,29): error: redefinition of 'NumMaterials'
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Error 1

### failure context

- build\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj

```
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\geometry\JointTransform.cpp.obj /c src\idlib\geometry\JointTransform.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -
clang-cl /Fobuild\windows-x86-release\idlib\obj\idlib\geometry\RenderMatrix.cpp.obj /c src\idlib\geometry\RenderMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj /c src\renderer-bfg\RenderWorld.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj /c src\renderer-bfg\RenderEntity.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj /c src\renderer-bfg\ScreenRect.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
llvm-lib /nologo /OUT:build\windows-x86-release\idlib.lib build\windows-x86-release\idlib\obj\idlib\Heap.cpp.obj build\windows-x86-release\idlib\obj\idlib\Str.cpp.obj build\windows-x86-release\idlib\obj\idlib\Lib.cpp.obj build\windows-x86-release\idlib\obj\idlib\Token.cpp.obj build\windows-x86-release\idlib\obj\idlib\Lexer.cpp.obj build\windows-x86-release\idlib\obj\idlib\Parser.cpp.obj build\wind
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj /c src\renderer-bfg\RenderSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declara
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj /c src\renderer-bfg\Q3Patch.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj /c src\renderer-bfg\RenderWorld_load.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declara
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model.cpp.obj /c src\renderer-bfg\Model.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-st
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj /c src\renderer-bfg\ModelManager.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj /c src\renderer-bfg\Model_md3.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj /c src\renderer-bfg\Model_mdc.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj /c src\renderer-bfg\Model_mds.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material.cpp.obj /c src\renderer-bfg\Material.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj /c src\renderer-bfg\MaterialManager.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
src\renderer-bfg\MaterialManager.cpp(157,29): error: redefinition of 'NumMaterials'
  157 | int idMaterialManagerLocal::NumMaterials() const {
      |                             ^
src\renderer-bfg\Material_local.h(50,33): note: previous definition is here
   50 | virtual int                     NumMaterials() const { return materials.Num(); }
      |                                 ^
1 error generated.
scons: *** [build\windows-x86-release\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj] Error 1
```


### warning kinds

