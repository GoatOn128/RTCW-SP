# Build digest

commit: b0f4140e3579

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: cancelled
- windows-latest-x64-release: cancelled
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
ranlib build/linux-x64-debug/libidlib.a
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-cop
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -W
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecate
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -Wno
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy 
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-copy -
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang -o build/linux-x64-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
src/renderer-bfg/Material_shader.cpp:1169:27: note: insert an explicit cast to silence this issue
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
      |                                  static_cast<int>( )
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
ar rc build/linux-x64-release/libidlib.a build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o build/linux-x64-release/idlib/obj/idlib/Token.cpp.o build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o build/linux-x64-release/idlib/obj/idlib/sys/sys_ass
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-
ranlib build/linux-x64-release/libidlib.a
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
src/renderer-bfg/Material_shader.cpp:1169:27: note: insert an explicit cast to silence this issue
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
      |                                  static_cast<int>( )
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
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
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated
clang -o build/linux-x86-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
src/renderer-bfg/Material_shader.cpp:1169:27: note: insert an explicit cast to silence this issue
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
      |                                  static_cast<int>( )
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: cancelled

errors: 2
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o

```
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
ar rc build/linux-x86-release/libidlib.a build/linux-x86-release/idlib/obj/idlib/Heap.cpp.o build/linux-x86-release/idlib/obj/idlib/Str.cpp.o build/linux-x86-release/idlib/obj/idlib/Lib.cpp.o build/linux-x86-release/idlib/obj/idlib/Token.cpp.o build/linux-x86-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x86-release/idlib/obj/idlib/Parser.cpp.o build/linux-x86-release/idlib/obj/idlib/sys/sys_ass
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang -o build/linux-x86-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
src/renderer-bfg/Material_shader.cpp:1169:27: error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
src/renderer-bfg/Material_shader.cpp:1169:27: note: insert an explicit cast to silence this issue
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
      |                                  static_cast<int>( )
src/renderer-bfg/Material.h:122:48: note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o] Error 1
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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\Material_shader.cpp(1169,27): error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj

```
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\CVarSystem.cpp.obj /c src\renderer-bfg\CVarSystem.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLMatrix.cpp.obj /c src\renderer-bfg\GLMatrix.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj /c src\renderer-bfg\Q3Patch.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj /c src\renderer-bfg\RenderWorld_load.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj /c src\renderer-bfg\Model.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-stri
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj /c src\renderer-bfg\ModelManager.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj /c src\renderer-bfg\Model_md3.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj /c src\renderer-bfg\Model_mdc.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj /c src\renderer-bfg\Model_mds.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj /c src\renderer-bfg\Material.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj /c src\renderer-bfg\MaterialManager.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj /c src\renderer-bfg\Material_shader.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
src\renderer-bfg\Material_shader.cpp(1169,27): error: constant expression evaluates to 2147483648 which cannot be narrowed to type 'int' [-Wc++11-narrowing]
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
src\renderer-bfg\Material.h(122,48): note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
src\renderer-bfg\Material_shader.cpp(1169,27): note: insert an explicit cast to silence this issue
 1169 |         {"nodrop",       1,  0,  CONTENTS_NODROP },      // don't drop items or leave bodies (death fog, lava, etc)
      |                                  ^~~~~~~~~~~~~~~
      |                                  static_cast<int>( )
src\renderer-bfg\Material.h(122,48): note: expanded from macro 'CONTENTS_NODROP'
  122 | #define CONTENTS_NODROP                        0x80000000
      |                                                ^~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

