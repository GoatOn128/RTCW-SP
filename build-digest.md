# Build digest

commit: f99c547c1c63

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: cancelled
- ubuntu-latest-x86-release: failure
- uncrustify: failure
- windows-latest-x64-debug: failure
- windows-latest-x64-release: failure
- windows-latest-x86-debug: cancelled
- windows-latest-x86-release: cancelled

## ubuntu-latest-x64-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1

### failure context

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o

```
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
In file included from src/renderer-bfg/RenderEntity.cpp:32:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
```

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o

```
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
In file included from src/renderer-bfg/RenderEntity.cpp:32:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
In file included from src/renderer-bfg/RenderEntity.cpp:32:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
clang++ -o build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
```

- build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o

```
In file included from src/renderer-bfg/RenderSystem.cpp:31:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src/renderer-bfg/RenderSystem.cpp:31:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src/renderer-bfg/RenderWorld.h:417:25: note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:418:25: note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:427:25: note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
ranlib build/linux-x64-debug/libidlib.a
4 errors generated.
scons: *** [build/linux-x64-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 14
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld_local.hsrc/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1

### failure context

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o

```
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
In file included from src/renderer-bfg/RenderEntity.cpp:32:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
In file included from src/renderer-bfg/RenderEntity.cpp:32:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.hsrc/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295src/renderer-bfg/RenderWorld.h | c:l295a:s7s:  inote: d'idRenderWorld' declared hereR
enderWor  l295d |  cl{a
s      s|        ^i
dRenderWorld {
      |       ^
4 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
```

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o

```
dRenderWorld {
      |       ^
4 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
  633 | void idRenderWorldLocal::BoundsInAreas_r( int nodeNum, const idBounds &bounds, int *areas, int *numAreas, int maxAreas ) const {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
```

- build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o

```
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
In file included from src/renderer-bfg/RenderSystem.cpp:31:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src/renderer-bfg/RenderSystem.cpp:31:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src/renderer-bfg/RenderWorld.h:417:25: note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:418:25: note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:427:25: note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: cancelled

errors: 15
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
src/renderer-bfg/RenderWorld.hsrc/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
:98:67: error: unknown type name 'renderView_s'
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
:164:1: error: unknown type name 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld_local.h:218:1: src/renderer-bfg/RenderWorld_local.herror: :218:1: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1

### failure context

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o

```
      |                                           ^
src/renderer-bfg/RenderWorld.hsrc/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
In file included from src/renderer-bfg/RenderEntity.cpp:32:
src/renderer-bfg/RenderWorld_local.hIn file included from src/renderer-bfg/RenderWorld.cpp:32:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  :164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: src/renderer-bfg/RenderWorld_local.herror: :218:1: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?

    218 | 218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.hsrc/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
```

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o

```
      |       ^
4 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
clang++ -o build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-deprecated-co
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
  633 | void idRenderWorldLocal::BoundsInAreas_r( int nodeNum, const idBounds &bounds, int *areas, int *numAreas, int maxAreas ) const {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
ar rc build/linux-x86-debug/libidlib.a build/linux-x86-debug/idlib/obj/idlib/Heap.cpp.o build/linux-x86-debug/idlib/obj/idlib/Str.cpp.o build/linux-x86-debug/idlib/obj/idlib/Lib.cpp.o build/linux-x86-debug/idlib/obj/idlib/sys/sys_assert.cpp.o build/linux-x86-debug/idlib/obj/idlib/containers/HashIndex.cpp.o build/linux-x86-debug/idlib/obj/idlib/math/Math.cpp.o build/linux-x86-debug/idlib/obj/idlib/
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
```

- build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o

```
clang -o build/linux-x86-debug/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -Isrc -Isrc/games/game -Isrc/client 
In file included from src/renderer-bfg/RenderSystem.cpp:31:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src/renderer-bfg/RenderSystem.cpp:31:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src/renderer-bfg/RenderWorld.h:417:25: note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:418:25: note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:427:25: note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build/linux-x86-debug/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1

### failure context

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o

```
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src/renderer-bfg/RenderWorld.cpp:633:26: error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
  633 | void idRenderWorldLocal::BoundsInAreas_r( int nodeNum, const idBounds &bounds, int *areas, int *numAreas, int maxAreas ) const {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1043:26: error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1052:26: error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
```

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o

```
src/renderer-bfg/RenderWorld.cpp:1060:26: error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src/renderer-bfg/RenderWorld_local.h:256:7: note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o] Error 1
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
In file included from src/renderer-bfg/RenderEntity.cpp:32:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
src/renderer-bfg/RenderWorld.h:98:67: error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
In file included from src/renderer-bfg/RenderEntity.cpp:32:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o] Error 1
```

- build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o

```
clang -o build/linux-x86-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -Isrc -
In file included from src/renderer-bfg/RenderSystem.cpp:31:
In file included from src/renderer-bfg/RenderWorld_local.h:32:
src/renderer-bfg/RenderWorld.h:98:43: error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src/renderer-bfg/RenderSystem.cpp:31:
src/renderer-bfg/RenderWorld_local.h:164:1: error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src/renderer-bfg/RenderWorld_local.h:218:1: error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src/renderer-bfg/RenderWorld.h:295:7: note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src/renderer-bfg/RenderSystem.cpp:70:14: error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src/renderer-bfg/RenderWorld.h:417:25: note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:418:25: note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src/renderer-bfg/RenderWorld.h:427:25: note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build/linux-x86-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o] Error 1
```


### warning kinds

## uncrustify

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
src\renderer-bfg\RenderWorld.h(98,67): error: unknown type name 'renderView_s'
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src\renderer-bfg\RenderWorld.cpp(633,26): error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj

```
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {In file included from src\renderer-bfg\RenderEntity.cpp:32:
In file included from src\renderer-bfg\RenderWorld_local.h:32:
src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^

      |                          ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.h(98,67): error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
8 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
```

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj

```
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {In file included from src\renderer-bfg\RenderEntity.cpp:32:
In file included from src\renderer-bfg\RenderWorld_local.h:32:
src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^

      |                          ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.h(98,67): error: unknown type name 'renderView_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                                                   ^
8 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
In file included from src\renderer-bfg\RenderEntity.cpp:32:
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
```

- build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj

```
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
In file included from src\renderer-bfg\RenderSystem.cpp:31:
In file included from src\renderer-bfg\RenderWorld_local.h:32:
src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src\renderer-bfg\RenderSystem.cpp:31:
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src\renderer-bfg\RenderWorld.h(417,25): note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(418,25): note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(427,25): note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 12
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
src\renderer-bfg\RenderWorld.h(98,67): error: unknown type name 'renderView_s'
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src\renderer-bfg\RenderWorld.cpp(633,26): error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1

### failure context

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj

```
src\renderer-bfg\RenderWorld.cpp(633,26): error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
  633 | void idRenderWorldLocal::BoundsInAreas_r( int nodeNum, const idBounds &bounds, int *areas, int *numAreas, int maxAreas ) const {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
In file included from src\renderer-bfg\RenderEntity.cpp:32:
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
```

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj

```
      | ^
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1043 | void idRenderWorldLocal::StartWritingDemo( idDemoFile *demo ) {
      |                          ^~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
4 errors generated.
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
8 errors generated.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
```

- build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj

```
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
In file included from src\renderer-bfg\RenderSystem.cpp:31:
In file included from src\renderer-bfg\RenderWorld_local.h:32:
src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src\renderer-bfg\RenderSystem.cpp:31:
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src\renderer-bfg\RenderWorld.h(417,25): note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(418,25): note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(427,25): note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build\windows-x64-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: cancelled

errors: 15
warnings: 0 in 0 kinds

### errors

src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
src\renderer-bfg\RenderWorld.h(98,67): error: unknown type name 'renderView_s'
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
src\renderer-bfg\RenderWorld.cpp(633,26): error: out-of-line definition of 'BoundsInAreas_r' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1043,26): error: virtual function 'StartWritingDemo' has different calling convention attributes ('void (idDemoFile *)') than the function it overrides (which has calling convention 'void (idDemoFile *) __attribute__((thiscall))')
src\renderer-bfg\RenderWorld.cpp(1043,26): error: out-of-line definition of 'StartWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1052,26): error: virtual function 'StopWritingDemo' has different calling convention attributes ('void ()') than the function it overrides (which has calling convention 'void () __attribute__((thiscall))')
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
src\renderer-bfg\RenderWorld.cpp(1060,26): error: virtual function 'ProcessDemoCommand' has different calling convention attributes ('bool (idDemoFile *, renderView_t *, int *)' (aka 'bool (idDemoFile *, struct renderView_s *, int *)')) than the function it overrides (which has calling convention 'bool (idDemoFile *, renderView_t *, int *) __attribute__((thiscall))' (aka 'bool (idDemoFile *, struc
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj

```
src\renderer-bfg\RenderWorld.h(418,25): note: overridden virtual function is here
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1060,26): error: virtual function 'ProcessDemoCommand' has different calling convention attributes ('bool (idDemoFile *, renderView_t *, int *)' (aka 'bool (idDemoFile *, struct renderView_s *, int *)')) than the function it overrides (which has calling convention 'bool (idDemoFile *, renderView_t *, int *) __attribute__((thiscall))' (aka 'bool (idDemoFile *, struc
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^
src\renderer-bfg\RenderWorld.h(427,25): note: overridden virtual function is here
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
11 errors generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
```

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj

```
      |                         ^
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src\renderer-bfg\RenderWorld.cpp(1052,26): error: out-of-line definition of 'StopWritingDemo' does not match any declaration in 'idRenderWorldLocal'
 1052 | void idRenderWorldLocal::StopWritingDemo() {
      |                          ^~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld.cpp(1060,26): error: virtual function 'ProcessDemoCommand' has different calling convention attributes ('bool (idDemoFile *, renderView_t *, int *)' (aka 'bool (idDemoFile *, struct renderView_s *, int *)')) than the function it overrides (which has calling convention 'bool (idDemoFile *, renderView_t *, int *) __attribute__((thiscall))' (aka 'bool (idDemoFile *, struc
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^
src\renderer-bfg\RenderWorld.h(427,25): note: overridden virtual function is here
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
src\renderer-bfg\RenderWorld.cpp(1060,26): error: out-of-line definition of 'ProcessDemoCommand' does not match any declaration in 'idRenderWorldLocal'
 1060 | bool idRenderWorldLocal::ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) {
      |                          ^~~~~~~~~~~~~~~~~~
src\renderer-bfg\RenderWorld_local.h(256,7): note: idRenderWorldLocal defined here
  256 | class idRenderWorldLocal : public idRenderWorld {
      |       ^~~~~~~~~~~~~~~~~~
11 errors generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\renderer-bfg\GLContext.cpp.obj /c src\renderer-bfg\GLContext.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj] Error 1
```

- build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj

```
clang-cl /Fobuild\windows-x86-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
In file included from src\renderer-bfg\RenderSystem.cpp:31:
In file included from src\renderer-bfg\RenderWorld_local.h:32:
src\renderer-bfg\RenderWorld.h(98,43): error: unknown type name 'renderEntity_s'
   98 | typedef bool (*deferredEntityCallback_t)( renderEntity_s *, const renderView_s * );
      |                                           ^
In file included from src\renderer-bfg\RenderSystem.cpp:31:
src\renderer-bfg\RenderWorld_local.h(164,1): error: unknown type name 'idRenderWorldLocal'
  164 | idRenderWorldLocal *    world;
      | ^
src\renderer-bfg\RenderWorld_local.h(218,1): error: unknown type name 'idRenderWorldLocal'; did you mean 'idRenderWorld'?
  218 | idRenderWorldLocal *    world;
      | ^~~~~~~~~~~~~~~~~~
      | idRenderWorld
src\renderer-bfg\RenderWorld.h(295,7): note: 'idRenderWorld' declared here
  295 | class idRenderWorld {
      |       ^
src\renderer-bfg\RenderSystem.cpp(70,14): error: allocating an object of abstract class type 'idRenderWorldLocal'
   70 |                 return new idRenderWorldLocal;
      |                            ^
src\renderer-bfg\RenderWorld.h(417,25): note: unimplemented pure virtual method 'StartWritingDemo' in 'idRenderWorldLocal'
  417 | virtual void            StartWritingDemo( idDemoFile *demo ) = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(418,25): note: unimplemented pure virtual method 'StopWritingDemo' in 'idRenderWorldLocal'
  418 | virtual void            StopWritingDemo() = 0;
      |                         ^
src\renderer-bfg\RenderWorld.h(427,25): note: unimplemented pure virtual method 'ProcessDemoCommand' in 'idRenderWorldLocal'
  427 | virtual bool            ProcessDemoCommand( idDemoFile *readDemo, renderView_t *demoRenderView, int *demoTimeOffset ) = 0;
      |                         ^
4 errors generated.
scons: *** [build\windows-x86-debug\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

