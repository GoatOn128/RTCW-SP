# Build digest

commit: 6fb9cb897b00

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: cancelled
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game,renderer: failure
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
src/qcommon/files.c:385:18: error: use of undeclared identifier 'PATH_SEP'
385 |                 if ( letter scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/qcommon/common.c.o

```
clang -o build/linux-x64-debug/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HAR
clang -o build/linux-x64-debug/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_L
clang -o build/linux-x64-debug/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LIN
clang -o build/linux-x64-debug/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINK
clang -o build/linux-x64-debug/client/obj/client/snd_adpcm.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_
clang -o build/linux-x64-debug/client/obj/client/snd_dma.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/client/snd_mem.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/client/snd_mix.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/client/snd_wavelet.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HAR
clang -o build/linux-x64-debug/client/obj/qcommon/cm_load.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_L
clang -o build/linux-x64-debug/client/obj/qcommon/cm_patch.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_
clang -o build/linux-x64-debug/client/obj/qcommon/cm_polylib.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HAR
clang -o build/linux-x64-debug/client/obj/qcommon/cm_test.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_L
clang -o build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_
clang -o build/linux-x64-debug/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINKE
clang -o build/linux-x64-debug/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINK
clang -o build/linux-x64-debug/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LIN
clang -o build/linux-x64-debug/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_L
Retrieved `build/linux-x64-debug/client/obj/qcommon/md4.c.o' from cache
clang -o build/linux-x64-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINKE
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
src/qcommon/files.c:385:18: error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x64-debug/client/obj/qcommon/files.c.o

```
clang -o build/linux-x64-debug/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_
clang -o build/linux-x64-debug/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINKE
clang -o build/linux-x64-debug/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LI
clang -o build/linux-x64-debug/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINK
clang -o build/linux-x64-debug/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LIN
clang -o build/linux-x64-debug/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_L
Retrieved `build/linux-x64-debug/client/obj/qcommon/md4.c.o' from cache
clang -o build/linux-x64-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DBOTLIB_HARD_LINKE
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
src/qcommon/files.c:385:18: error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter scons: *** [build/linux-x64-debug/client/obj/qcommon/common.c.o] Error 1
== PATH_SEP ) {
      |                                ^~~~~~~~
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = Pclang -o build/linux-x64-debug/client/obj/qcommon/net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_
ATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build/linux-x64-debug/client/obj/qcommon/files.c.o] Error 1
```

- build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o

```
Retrieved `build/linux-x64-debug/ui/obj/games/ui/ui_util.c.o' from cache
clang -o build/linux-x64-debug/ui/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -Isrc -Isrc/ga
clang -o build/linux-x64-debug/ui/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -Isrc -Isrc/
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_backend.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DR
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFDL
clang -o bin/main/ui_x64.so -m64 -shared build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o build/linux-x64-debug/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x64-debug/ui/obj/games/ui/ui_main.c.o build/linux-x64-debug/ui/obj/games/ui/ui_players.c.o build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o build/linux-x64-debug/ui/obj/games/ui/ui_syscal
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFD
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DRE
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_font.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFD
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_image.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_init.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFD
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_light.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFD
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_mesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFD
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_model.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREF
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DRE
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shadows.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DR
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_sky.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x64 -DREFDL
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
1 error generated.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release-

status: failure

errors: 11
warnings: 0 in 0 kinds

### errors

src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
src/qcommon/files.c:385:18: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
scons: *** [src/games/game/g_funcs.h] Error -11
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/qcommon/common.c.o

```
clang -o build/linux-x64-release/client/obj/client/cl_input.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
clang -o build/linux-x64-release/client/obj/client/cl_keys.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/cl_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
clang -o build/linux-x64-release/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH
clang -o build/linux-x64-release/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_
clang -o build/linux-x64-release/client/obj/client/snd_adpcm.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DA
clang -o build/linux-x64-release/client/obj/client/snd_dma.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/snd_mem.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/snd_mix.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/client/snd_wavelet.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/client/obj/qcommon/cm_load.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
clang -o build/linux-x64-release/client/obj/qcommon/cm_patch.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DA
clang -o build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/client/obj/qcommon/cm_test.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
clang -o build/linux-x64-release/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DA
clang -o build/linux-x64-release/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_S
clang -o build/linux-x64-release/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_
clang -o build/linux-x64-release/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH
clang -o build/linux-x64-release/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x64-release/client/obj/qcommon/files.c.o

```
clang -o build/linux-x64-release/client/obj/qcommon/cm_polylib.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/client/obj/qcommon/cm_test.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
clang -o build/linux-x64-release/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DA
clang -o build/linux-x64-release/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_S
clang -o build/linux-x64-release/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARC
clang -o build/linux-x64-release/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_
clang -o build/linux-x64-release/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH
clang -o build/linux-x64-release/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DAR
src/qcommon/common.c:1960:40: error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build/linux-x64-release/client/obj/qcommon/common.c.o] Error 1
clang -o build/linux-x64-release/client/obj/qcommon/md4.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DARCH_S
src/qcommon/files.c:385:18: error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build/linux-x64-release/client/obj/qcommon/files.c.o] Error 1
```

- src/games/game/g_funcs.h

```
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/CVarSystem.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings 
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLMatrix.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderLog.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
ar rc build/linux-x64-release/libidlib.a build/linux-x64-release/idlib/obj/idlib/Heap.cpp.o build/linux-x64-release/idlib/obj/idlib/Str.cpp.o build/linux-x64-release/idlib/obj/idlib/Lib.cpp.o build/linux-x64-release/idlib/obj/idlib/Token.cpp.o build/linux-x64-release/idlib/obj/idlib/Lexer.cpp.o build/linux-x64-release/idlib/obj/idlib/Parser.cpp.o build/linux-x64-release/idlib/obj/idlib/sys/sys_ass
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderProgs_GLSL.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Q3Patch.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
ranlib build/linux-x64-release/libidlib.a
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld_load.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-st
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ModelManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_md3.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mdc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Model_mds.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/MaterialManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wno-d
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -W
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings -Wn
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-string
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strings
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-str
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o -c -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-writable-strin
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -w -fPIC -DNDEBUG -DQDECL
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/stb/stb_impl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -w -fPIC -DNDEBUG -DQDECL= 
run_extractfuncs(["src/games/game/g_funcs.h", "src/games/game/g_func_decs.h"], ["build/linux-x64-release/extractfuncs"])
scons: *** [src/games/game/g_funcs.h] Error -11
```

- build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o

```
clang -o bin/main/cgame_x64.so -m64 -shared build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o build/linux-x64-release/cgame/obj/games/game/bg_slidemove.c.o build/linux-x64-release/cgame/obj/games/cgame/cg_consolecmds.c.o build/linux-x64-release/cgame/obj/games/cgame/cg_dra
clang -o build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATI
clang -o build/linux-x64-release/ui/obj/games/ui/ui_util.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/ui/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DA
clang -o build/linux-x64-release/ui/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -
clang -o build/linux-x64-release/renderer/obj/renderer/tr_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_backend.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_
clang -o build/linux-x64-release/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STAT
clang -o build/linux-x64-release/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STA
clang -o build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_ST
clang -o build/linux-x64-release/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_S
clang -o bin/main/ui_x64.so -m64 -shared build/linux-x64-release/ui/obj/games/game/bg_misc.c.o build/linux-x64-release/ui/obj/games/ui/ui_atoms.c.o build/linux-x64-release/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x64-release/ui/obj/games/ui/ui_main.c.o build/linux-x64-release/ui/obj/games/ui/ui_players.c.o build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o build/linux-x64-release/ui/obj/game
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
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release-game,renderer

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

src/qcommon/files.csrc/qcommon/common.c::1960385::4018::  error: error: use of undeclared identifier 'PATH_SEP'use of undeclared identifier 'CPUSTRING'
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x86-debug/client/obj/qcommon/common.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/qcommon/files.c.o] Error 1
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/qcommon/common.c.o

```
clang -o build/linux-x86-debug/client/obj/qcommon/cm_polylib.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HAR
clang -o build/linux-x86-debug/client/obj/qcommon/cm_test.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_L
clang -o build/linux-x86-debug/client/obj/qcommon/cm_trace.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_
clang -o build/linux-x86-debug/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINKE
clang -o build/linux-x86-debug/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LI
clang -o build/linux-x86-debug/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINK
clang -o build/linux-x86-debug/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LIN
clang -o build/linux-x86-debug/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_L
Retrieved `build/linux-x86-debug/client/obj/qcommon/md4.c.o' from cache
clang -o build/linux-x86-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINKE
clang -o build/linux-x86-debug/client/obj/qcommon/net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_
src/qcommon/files.csrc/qcommon/common.c::1960385::4018::  error: error: use of undeclared identifier 'PATH_SEP'use of undeclared identifier 'CPUSTRING'

   1960385 |  |                 C        oimf_ P(r ilnettft(e r" %=s=  %PsA T%Hs_\SnE"P,  )Q 3{_
V      E| R                               ^~~~~~~~S
ION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/qcommon/common.c.o] Error 1
```

- build/linux-x86-debug/client/obj/qcommon/files.c.o

```
clang -o build/linux-x86-debug/client/obj/qcommon/cmd.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINKE
clang -o build/linux-x86-debug/client/obj/qcommon/common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LI
clang -o build/linux-x86-debug/client/obj/qcommon/cvar.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINK
clang -o build/linux-x86-debug/client/obj/qcommon/files.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LIN
clang -o build/linux-x86-debug/client/obj/qcommon/huffman.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_L
Retrieved `build/linux-x86-debug/client/obj/qcommon/md4.c.o' from cache
clang -o build/linux-x86-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LINKE
clang -o build/linux-x86-debug/client/obj/qcommon/net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_
src/qcommon/files.csrc/qcommon/common.c::1960385::4018::  error: error: use of undeclared identifier 'PATH_SEP'use of undeclared identifier 'CPUSTRING'

   1960385 |  |                 C        oimf_ P(r ilnettft(e r" %=s=  %PsA T%Hs_\SnE"P,  )Q 3{_
V      E| R                               ^~~~~~~~S
ION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src/qcommon/files.c:464:9: error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src/qcommon/common.c:2073:34: error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
src/qcommon/files.c:513:16: error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src/qcommon/files.c:517:11: error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/qcommon/common.c.o] Error 1
clang -o build/linux-x86-debug/client/obj/qcommon/unzip.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DBOTLIB_HARD_LIN
4 errors generated.
scons: *** [build/linux-x86-debug/client/obj/qcommon/files.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o

```
Retrieved `build/linux-x86-debug/ui/obj/games/ui/ui_util.c.o' from cache
clang -o build/linux-x86-debug/ui/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -Isrc -Isrc/ga
clang -o build/linux-x86-debug/ui/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -Isrc -Isrc/
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_backend.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DR
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_bsp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFDL
clang -o bin/main/ui_x86.so -m32 -shared build/linux-x86-debug/ui/obj/games/game/bg_misc.c.o build/linux-x86-debug/ui/obj/games/ui/ui_atoms.c.o build/linux-x86-debug/ui/obj/games/ui/ui_gameinfo.c.o build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o build/linux-x86-debug/ui/obj/games/ui/ui_players.c.o build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o build/linux-x86-debug/ui/obj/games/ui/ui_syscal
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFD
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_curve.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_flares.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DRE
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_font.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFD
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_image.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_init.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFD
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_light.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFD
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_mesh.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFD
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_model.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREF
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DRE
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shadows.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DR
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_sky.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DARCH_STRING=x86 -DREFDL
src/renderer/tr_shader.c:79:18: error: use of undeclared identifier 'PATH_SEP'
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
1 error generated.
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release-

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

## windows-latest-x64-debug-

status: cancelled

errors: 11
warnings: 0 in 0 kinds

### errors

src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\qcommon\files.c.obj] Error 1
scons: *** [src\games\game\g_funcs.h] Error 3221226356
src\renderer\tr_shader.c(79,18): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x64-debug\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
scons: *** [build\windows-x64-debug\client\obj\qcommon\common.c.obj] Error 1
4 errors generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\md4.c.obj /c src\qcommon\md4.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
scons: *** [build\windows-x64-debug\client\obj\qcommon\files.c.obj] Error 1
```

- src\games\game\g_funcs.h

```
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderLog.cpp.obj /c src\renderer-bfg\RenderLog.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs.cpp.obj /c src\renderer-bfg\RenderProgs.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderProgs_GLSL.cpp.obj /c src\renderer-bfg\RenderProgs_GLSL.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Q3Patch.cpp.obj /c src\renderer-bfg\Q3Patch.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld_load.cpp.obj /c src\renderer-bfg\RenderWorld_load.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model.cpp.obj /c src\renderer-bfg\Model.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-stri
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ModelManager.cpp.obj /c src\renderer-bfg\ModelManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_md3.cpp.obj /c src\renderer-bfg\Model_md3.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mdc.cpp.obj /c src\renderer-bfg\Model_mdc.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Model_mds.cpp.obj /c src\renderer-bfg\Model_mds.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material.cpp.obj /c src\renderer-bfg\Material.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\MaterialManager.cpp.obj /c src\renderer-bfg\MaterialManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj /c src\renderer-bfg\Material_shader.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj /c src\renderer-bfg\Shadow.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-st
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj /c src\renderer-bfg\Backend.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj /c src\renderer-bfg\Tess.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-string
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj /c src\renderer-bfg\Tess_calc.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj /c src\renderer-bfg\Lighting.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj /c src\renderer-bfg\Surface.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj /c src\renderer-bfg\ImageManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-w
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declaration
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj /c src\renderer-bfg\Image_process.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
clang-cl /Fobuild\windows-x64-debug\renderer-bfg\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
run_extractfuncs(["src\games\game\g_funcs.h", "src\games\game\g_func_decs.h"], ["build\windows-x64-debug\extractfuncs.exe"])
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
scons: *** [src\games\game\g_funcs.h] Error 3221226356
```

- build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj

```
clang-cl /Fobuild\windows-x64-debug\ui\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-debug\ui\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_animation.c.obj /c src\renderer\tr_animation.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEBUG /DEF:src/games/ui/ui.def /dll /out:bin\main\ui_x64.dll /implib:bin\main\ui_x64.lib build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj build\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj build\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj build\windows-x64-debug\ui\obj\games\ui\ui
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_flares.c.obj /c src\renderer\tr_flares.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj /c src\renderer\tr_font.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_image.c.obj /c src\renderer\tr_image.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_init.c.obj /c src\renderer\tr_init.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_light.c.obj /c src\renderer\tr_light.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
src\renderer\tr_shader.c(79,18): error: use of undeclared identifier 'PATH_SEP'
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
1 error generated.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-

status: cancelled

errors: 8
warnings: 0 in 0 kinds

### errors

src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x64-release\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-cgame

status: cancelled

errors: 8
warnings: 0 in 0 kinds

### errors

src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x64-release\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-game,renderer

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-ui

status: cancelled

errors: 9
warnings: 0 in 0 kinds

### errors

src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
scons: *** [src\games\game\g_funcs.h] Error 2147483651

### failure context

- build\windows-x64-release\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x64-release\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\common.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build\windows-x64-release\client\obj\qcommon\files.c.obj] Error 1
```

- src\games\game\g_funcs.h

```
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
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj /c src\renderer-bfg\Material_shader.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj /c src\renderer-bfg\Shadow.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj /c src\renderer-bfg\Backend.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj /c src\renderer-bfg\Tess.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-stri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj /c src\renderer-bfg\Tess_calc.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj /c src\renderer-bfg\Lighting.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj /c src\renderer-bfg\Surface.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj /c src\renderer-bfg\ImageManager.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj /c src\renderer-bfg\Image_process.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
run_extractfuncs(["src\games\game\g_funcs.h", "src\games\game\g_func_decs.h"], ["build\windows-x64-release\extractfuncs.exe"])
scons: *** [src\games\game\g_funcs.h] Error 2147483651
```


### warning kinds

## windows-latest-x86-debug-

status: failure

errors: 10
warnings: 0 in 0 kinds

### errors

src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Error 1
src\renderer\tr_shader.c(79,18): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
scons: *** [build\windows-x86-debug\client\obj\qcommon\common.c.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
Retrieved `build\windows-x86-debug\client\obj\qcommon\md4.c.obj' from cache
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\msg.c.obj /c src\qcommon\msg.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SECU
4 errors generated.
scons: *** [build\windows-x86-debug\client\obj\qcommon\files.c.obj] Error 1
```

- build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj

```
clang-cl /Fobuild\windows-x86-debug\ui\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x86-debug\ui\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_animation.c.obj /c src\renderer\tr_animation.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
lld-link /nologo /DYNAMICBASE /DEBUG /DEF:src/games/ui/ui.def /dll /out:bin\main\ui_x86.dll /implib:bin\main\ui_x86.lib build\windows-x86-debug\ui\obj\games\game\bg_misc.c.obj build\windows-x86-debug\ui\obj\games\ui\ui_atoms.c.obj build\windows-x86-debug\ui\obj\games\ui\ui_gameinfo.c.obj build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj build\windows-x86-debug\ui\obj\games\ui\ui_players.c.obj 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_flares.c.obj /c src\renderer\tr_flares.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj /c src\renderer\tr_font.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_image.c.obj /c src\renderer\tr_image.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_init.c.obj /c src\renderer\tr_init.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_light.c.obj /c src\renderer\tr_light.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
src\renderer\tr_shader.c(79,18): error: use of undeclared identifier 'PATH_SEP'
   79 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
1 error generated.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1
```


### warning kinds

## windows-latest-x86-release-

status: cancelled

errors: 9
warnings: 0 in 0 kinds

### errors

src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Error 1
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
scons: *** [build\windows-x86-release\client\obj\qcommon\files.c.obj] Error 1
scons: *** [src\games\game\g_funcs.h] Error 2147483651

### failure context

- build\windows-x86-release\client\obj\qcommon\common.c.obj

```
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Error 1
```

- build\windows-x86-release\client\obj\qcommon\files.c.obj

```
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_patch.c.obj /c src\qcommon\cm_patch.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_polylib.c.obj /c src\qcommon\cm_polylib.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_test.c.obj /c src\qcommon\cm_test.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cm_trace.c.obj /c src\qcommon\cm_trace.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cmd.c.obj /c src\qcommon\cmd.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECURE
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\common.c.obj /c src\qcommon\common.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\cvar.c.obj /c src\qcommon\cvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SECU
src\qcommon\common.c(1960,40): error: use of undeclared identifier 'CPUSTRING'
 1960 |         Com_Printf( "%s %s %s\n", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                               ^~~~~~~~~
src\qcommon\common.c(2073,34): error: use of undeclared identifier 'CPUSTRING'
 2073 |         s = va( "%s %s %s", Q3_VERSION, CPUSTRING, __DATE__ );
      |                                         ^~~~~~~~~
2 errors generated.
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\files.c.obj /c src\qcommon\files.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CRT_SE
scons: *** [build\windows-x86-release\client\obj\qcommon\common.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\client\obj\qcommon\huffman.c.obj /c src\qcommon\huffman.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
src\qcommon\files.c(385,18): error: use of undeclared identifier 'PATH_SEP'
  385 |                 if ( letter == PATH_SEP ) {
      |                                ^~~~~~~~
src\qcommon\files.c(464,9): error: use of undeclared identifier 'PATH_SEP'
  464 |                         *s = PATH_SEP;
      |                              ^~~~~~~~
src\qcommon\files.c(513,16): error: use of undeclared identifier 'PATH_SEP'
  513 |                 if ( *ofs == PATH_SEP ) {
      |                              ^~~~~~~~
src\qcommon\files.c(517,11): error: use of undeclared identifier 'PATH_SEP'
  517 |                         *ofs = PATH_SEP;
      |                                ^~~~~~~~
4 errors generated.
scons: *** [build\windows-x86-release\client\obj\qcommon\files.c.obj] Error 1
```

- src\games\game\g_funcs.h

```
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
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Material_shader.cpp.obj /c src\renderer-bfg\Material_shader.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj /c src\renderer-bfg\Shadow.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj /c src\renderer-bfg\Backend.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj /c src\renderer-bfg\Tess.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-stri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj /c src\renderer-bfg\Tess_calc.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-wri
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj /c src\renderer-bfg\Lighting.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writa
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj /c src\renderer-bfg\Surface.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writabl
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj /c src\renderer-bfg\ImageManager.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj /c src\renderer-bfg\Image_process.cpp /TP /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
clang-cl /Fobuild\windows-x86-release\renderer-bfg\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
run_extractfuncs(["src\games\game\g_funcs.h", "src\games\game\g_func_decs.h"], ["build\windows-x86-release\extractfuncs.exe"])
scons: *** [src\games\game\g_funcs.h] Error 2147483651
```


### warning kinds

