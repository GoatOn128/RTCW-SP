# Build digest

commit: 980fc2a28153

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: cancelled
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: failure
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game,renderer: failure
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: failure

errors: 18
warnings: 8 in 1 kinds

### errors

src/qcommon/files.c:385:18: error: expected expression
src/qcommon/files.c:385:27: error: expected expression
src/qcommon/files.c:464:9: error: expected expression
src/qcommon/files.c:464:17: error: expected expression
src/qcommon/files.c:513:16: error: expected expression
src/qcommon/files.c:513:25: error: expected expression
src/qcommon/files.c:517:11: error: expected expression
src/qcommon/files.c:517:19: error: expected expression
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'x64'
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'debug'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'debug'
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
src/renderer/tr_shader.c:79:18: error: expected expression
src/renderer/tr_shader.c:79:27: error: expected expression
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
scons: *** Found dependency cycle(s):

### failure context

- build/linux-x64-debug/client/obj/qcommon/files.c.o

```
src/qcommon/files.c:517:19: error: expected expression
  517 |                         *ofs = PATH_SEP;
      |                                        ^
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'x64'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
<command line>:3:25: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                         ^~~
8 errors generated.
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'debug'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
<command line>:3:29: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                             ^~~~~
clang -o build/linux-x64-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-debug" -DPATH_
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:3:25: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                         ^~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'debug'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:3:29: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                             ^~~~~
4 errors generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
```

- build/linux-x64-debug/client/obj/qcommon/common.c.o

```
      |                                        ^
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'x64'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
<command line>:3:25: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                         ^~~
8 errors generated.
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'debug'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
<command line>:3:29: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                             ^~~~~
clang -o build/linux-x64-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-debug" -DPATH_
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:3:25: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                         ^~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'debug'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:3:29: note: expanded from macro 'CPUSTRING'
    3 | #define CPUSTRING linux-x64-debug
      |                             ^~~~~
4 errors generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
clang -o build/linux-x64-debug/client/obj/qcommon/net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-debug" -D
scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o

```
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x6
clang -o bin/main/ui.so -m64 -shared build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o build/linux-x64-debug/ui/obj/games/ui/ui_syscalls.c
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-de
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-d
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_font.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-d
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_image.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_init.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-d
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_light.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-d
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_mesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-d
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_model.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64-
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCPUSTRING="linux-x64
src/renderer/tr_shader.c:79:18: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^
<command line>:4:18: note: expanded from macro 'PATH_SEP'
    4 | #define PATH_SEP /
      |                  ^
src/renderer/tr_shader.c:79:27: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                         ^
2 errors generated.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [8x] -macro-redefined
  - src/splines/q_splineshared.hsrc/splines/q_splineshared.h::213213::99::  warning: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]'CPUSTRING' macro redefined [-Wmacro-redefined]
  - src/splines/q_splineshared.hsrc/splines/q_splineshared.h::216216::99::  warning: warning: 'PATH_SEP' macro redefined [-Wmacro-redefined]'PATH_SEP' macro redefined [-Wmacro-redefined]
  - src/splines/q_splineshared.h:213:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
  - src/splines/q_splineshared.h:216:9: warning: 'PATH_SEP' macro redefined [-Wmacro-redefined]

## ubuntu-latest-x64-release-

status: failure

errors: 16
warnings: 10 in 1 kinds

### errors

src/qcommon/files.c:385:18: error: expected expression
src/qcommon/files.c:385:27: error: expected expression
src/qcommon/files.c:464:9: error: expected expression
src/qcommon/files.c:464:17: error: expected expression
src/qcommon/files.c:513:16: error: expected expression
40: error: <command line>:use of undeclared identifier 'x64'5
src/qcommon/files.c:513:25: error: expected expression
src/qcommon/files.c:517:11: error: expected expression
src/qcommon/files.c:517:19: error: expected expression
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
src/renderer/tr_shader.c:79:18: error: expected expression
src/renderer/tr_shader.c:79:27: error: expected expression
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
scons: *** Found dependency cycle(s):

### failure context

- build/linux-x64-release/client/obj/qcommon/common.c.o

```
  513 |                 if ( *ofs == PATH_SEP ) src/qcommon/common.c{
:      | 1960                             ^:
40: error: <command line>:use of undeclared identifier 'x64'5
:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/qcommon/files.c:513:25: error: expected expression 
1960 |           C513o | m        _        Pirf i(n t*off(s  ="=% sP A%TsH _%SsE\Pn "),  Q{3
_      V| E                                      ^
RSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/files.c:517:11: error: expected expression
<command line>:  4517: | 25        :                 *note: oexpanded from macro 'CPUSTRING'f
s = PATH_    S4E | P#;d
e      f| i                               ^n
e C<command line>P:U5S:T18R:I Nnote: Gexpanded from macro 'PATH_SEP' 
lin    u5x | -#xd6e4f
i      n| e                        ^~~ 
PATH_SEP /
      |                  ^
src/qcommon/files.c:517:19: error: expected expression
  517 |                         *ofs = PATH_SEP;
      |                                        ^
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:4:25: note: expanded from macro 'CPUSTRING'
    4 | #define CPUSTRING linux-x64
      |                         ^~~
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x64-release/client/obj/qcommon/files.c.o

```
:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/qcommon/files.c:513:25: error: expected expression 
1960 |           C513o | m        _        Pirf i(n t*off(s  ="=% sP A%TsH _%SsE\Pn "),  Q{3
_      V| E                                      ^
RSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/files.c:517:11: error: expected expression
<command line>:  4517: | 25        :                 *note: oexpanded from macro 'CPUSTRING'f
s = PATH_    S4E | P#;d
e      f| i                               ^n
e C<command line>P:U5S:T18R:I Nnote: Gexpanded from macro 'PATH_SEP' 
lin    u5x | -#xd6e4f
i      n| e                        ^~~ 
PATH_SEP /
      |                  ^
src/qcommon/files.c:517:19: error: expected expression
  517 |                         *ofs = PATH_SEP;
      |                                        ^
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x64'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:4:25: note: expanded from macro 'CPUSTRING'
    4 | #define CPUSTRING linux-x64
      |                         ^~~
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
8 errors generated.
clang -o build/linux-x64-release/client/obj/qcommon/md4.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPUSTR
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o

```
clang -o build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STAT
clang -o build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_S
clang -o bin/main/ui.so -m64 -shared build/linux-x64-release/ui/obj/games/game/bg_misc.c.o build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x64-release/ui/obj/games/ui/ui_main.c.o build/linux-x64-release/ui/obj/games/ui/ui_players.c.o build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o build/linux-x64-release/ui/obj/games/ui
clang -o build/linux-x64-release/renderer/obj/renderer/tr_font.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_image.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_init.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_light.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_model.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DM
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_S
src/renderer/tr_shader.c:79:18: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^
<command line>:5:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/renderer/tr_shader.c:79:27: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                         ^
2 errors generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shadows.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [10x] -macro-redefined
  - src/splines/q_splineshared.h:213:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
  - src/splines/q_splineshared.h:216:9: warning: 'PATH_SEP' macro redefined [-Wmacro-redefined]

## ubuntu-latest-x64-release-game,renderer

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release-

status: cancelled

errors: 16
warnings: 10 in 1 kinds

### errors

src/qcommon/common.c:1960:40: error: use of undeclared identifier 'x86'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x86'
scons: *** [build/linux-x86-release/client/obj/qcommon/common.c.o] Error 1
src/qcommon/files.c:385:18: error: expected expression
src/qcommon/files.c:385:27: error: expected expression
src/qcommon/files.c:464:9: error: expected expression
src/qcommon/files.c:464:17: error: expected expression
src/qcommon/files.c:513:16: error: expected expression
src/qcommon/files.c:513:25: error: expected expression
src/qcommon/files.c:517:11: error: expected expression
src/qcommon/files.c:517:19: error: expected expression
scons: *** [build/linux-x86-release/client/obj/qcommon/files.c.o] Error 1
src/renderer/tr_shader.c:79:18: error: expected expression
src/renderer/tr_shader.c:79:27: error: expected expression
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o] Error 1
scons: *** Found dependency cycle(s):

### failure context

- build/linux-x86-release/client/obj/qcommon/common.c.o

```
clang -o build/linux-x86-release/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPU
clang -o build/linux-x86-release/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPUST
clang -o build/linux-x86-release/client/obj/client/snd_adpcm.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DC
clang -o build/linux-x86-release/client/obj/client/snd_dma.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPU
clang -o build/linux-x86-release/client/obj/client/snd_mem.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPU
clang -o build/linux-x86-release/client/obj/client/snd_mix.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPU
clang -o build/linux-x86-release/client/obj/client/snd_wavelet.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x86-release/client/obj/qcommon/cm_load.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCP
clang -o build/linux-x86-release/client/obj/qcommon/cm_patch.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DC
clang -o build/linux-x86-release/client/obj/qcommon/cm_polylib.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x86-release/client/obj/qcommon/cm_test.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCP
clang -o build/linux-x86-release/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DC
clang -o build/linux-x86-release/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPUSTR
clang -o build/linux-x86-release/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPU
clang -o build/linux-x86-release/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPUST
clang -o build/linux-x86-release/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCPUS
clang -o build/linux-x86-release/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DCP
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'x86'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
<command line>:4:25: note: expanded from macro 'CPUSTRING'
    4 | #define CPUSTRING linux-x86
      |                         ^~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'x86'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
<command line>:4:25: note: expanded from macro 'CPUSTRING'
    4 | #define CPUSTRING linux-x86
      |                         ^~~
2 errors generated.
scons: *** [build/linux-x86-release/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x86-release/client/obj/qcommon/files.c.o

```
  385 |                 if ( letter == PATH_SEP ) {
      |                                         ^
src/qcommon/files.c:464:9: error: expected expression
  464 |                         *s = PATH_SEP;
      |                              ^
<command line>:5:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/qcommon/files.c:464:17: error: expected expression
  464 |                         *s = PATH_SEP;
      |                                      ^
src/qcommon/files.c:513:16: error: expected expression
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^
<command line>:5:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/qcommon/files.c:513:25: error: expected expression
  513 |                 if ( *ofs == PATH_SEP ) {
      |                                       ^
src/qcommon/files.c:517:11: error: expected expression
  517 |                         *ofs = PATH_SEP;
      |                                ^
<command line>:5:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/qcommon/files.c:517:19: error: expected expression
  517 |                         *ofs = PATH_SEP;
      |                                        ^
8 errors generated.
scons: *** [build/linux-x86-release/client/obj/qcommon/files.c.o] Error 1
```

- build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o

```
clang -o build/linux-x86-release/renderer/obj/renderer/tr_backend.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_
clang -o build/linux-x86-release/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STAT
clang -o build/linux-x86-release/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x86-release/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_S
clang -o build/linux-x86-release/renderer/obj/renderer/tr_font.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o bin/main/ui.so -m32 -shared build/linux-x86-release/ui/obj/games/game/bg_misc.c.o build/linux-x86-release/ui/obj/games/ui/ui_atoms.c.o build/linux-x86-release/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x86-release/ui/obj/games/ui/ui_main.c.o build/linux-x86-release/ui/obj/games/ui/ui_players.c.o build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o build/linux-x86-release/ui/obj/games/ui
clang -o build/linux-x86-release/renderer/obj/renderer/tr_image.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_init.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x86-release/renderer/obj/renderer/tr_light.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x86-release/renderer/obj/renderer/tr_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_mesh.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x86-release/renderer/obj/renderer/tr_model.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DM
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_S
src/renderer/tr_shader.c:79:18: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^
<command line>:5:18: note: expanded from macro 'PATH_SEP'
    5 | #define PATH_SEP /
      |                  ^
src/renderer/tr_shader.c:79:27: error: expected expression
   79 |                 if ( letter == PATH_SEP ) {
      |                                         ^
2 errors generated.
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [10x] -macro-redefined
  - src/splines/q_splineshared.h:209:9: warning: 'CPUSTRING' macro redefined [-Wmacro-redefined]
  - src/splines/q_splineshared.h:216:9: warning: 'PATH_SEP' macro redefined [-Wmacro-redefined]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

## windows-latest-x64-release-

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

## windows-latest-x64-release-cgame

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

## windows-latest-x64-release-game,renderer

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-ui

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

## windows-latest-x86-debug-

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

## windows-latest-x86-release-

status: failure

errors: 1
warnings: 0 in 0 kinds

### errors

scons: *** No tool module 'rc' found in C:\hostedtoolcache\windows\Python\3.15.1\x64\Lib\site-packages\SCons\Tool

### failure context


### warning kinds

