# Build digest

commit: 0fb335b63b2a

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: cancelled
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: cancelled
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game,renderer: failure
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: cancelled
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 20
warnings: 244 in 6 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2387:25: error: expected '}'
scons: *** [build/linux-x64-debug/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1667:84: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2468:24: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_main.c.o

```
      |                      ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
1 warning generated.
clang -o build/linux-x64-debug/client/obj/client/cl_keys.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
clang -o build/linux-x64-debug/client/obj/client/cl_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
1 warning generated.
2 warnings generated.
clang -o build/linux-x64-debug/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
clang -o build/linux-x64-debug/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -I
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
clang -o build/linux-x64-debug/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
src/client/cl_main.c:2636:52: error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
clang -o build/linux-x64-debug/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-debug/game/obj/games/game/bg_misc.c.o

```
src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  946 |         int i, elapsed, count, clCount, activeCount;
      |                                ^
clang -o build/linux-x64-debug/game/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/
src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
6 warnings generated.
clang -o build/linux-x64-debug/game/obj/games/game/bg_pmove.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-debug/game/obj/games/game/g_main.c.o

```
clang -o build/linux-x64-debug/game/obj/games/game/g_client.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
clang -o build/linux-x64-debug/game/obj/games/game/g_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/t
clang -o build/linux-x64-debug/game/obj/games/game/g_combat.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
clang -o build/linux-x64-debug/game/obj/games/game/g_items.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
clang -o build/linux-x64-debug/game/obj/games/game/g_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/t
clang -o build/linux-x64-debug/game/obj/games/game/g_mem.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/th
1 warning generated.
clang -o build/linux-x64-debug/game/obj/games/game/g_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/t
clang -o build/linux-x64-debug/game/obj/games/game/g_missile.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
clang -o build/linux-x64-debug/game/obj/games/game/g_mover.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/
src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  410 |         int hintType, hintDist, hintVal, oldHintType;
      |                                          ^
src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  432 |         int etype;
      |             ^
src/games/game/g_main.c:2387:25: error: expected '}'
 2387 |         level.time = levelTime;
      |                                ^
src/games/game/g_main.c:2374:34: note: to match this '{'
 2374 | void G_RunFrame( int levelTime ) {
      |                                  ^
1 warning and 1 error generated.
scons: *** [build/linux-x64-debug/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o

```
4 warnings generated.
1 warning generated.
clang -o build/linux-x64-debug/game/obj/games/botai/ai_dmq3.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
clang -o build/linux-x64-debug/game/obj/games/botai/ai_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
1 warning generated.
clang -o build/linux-x64-debug/game/obj/games/botai/ai_team.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
clang -o build/linux-x64-debug/game/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/thir
clang -o build/linux-x64-debug/game/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/th
clang -o build/linux-x64-debug/cgame/obj/games/game/bg_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
clang -o build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
clang -o build/linux-x64-debug/cgame/obj/games/game/bg_pmove.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
clang -o build/linux-x64-debug/cgame/obj/games/game/bg_slidemove.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o

```
src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  525 |         int tagIndex;
      |             ^
8 warnings generated.
3 warnings generated.
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_event.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -I
src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  173 |         clientInfo_t *ci;
      |                       ^
src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  181 |         int tagIndex;
      |             ^
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_flamethrower.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/game
src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  407 |         int offsetwhole;
      |             ^
src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  960 |         float scale;
      |               ^
src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
1 warning generated.
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src/games/cgame/cg_ents.c:2254:126: note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
5 warnings and 1 error generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o

```
src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
src/games/cgame/cg_local.h:1897:32: note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
13 warnings generated.
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1667:35: note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1648:93: note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o

```
2 warnings generated.
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/cgame/cg_weapons.c:2013:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
 2013 |         float ramp;
      |               ^
clang -o build/linux-x64-debug/cgame/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 2932 |         weaponInfo_t    *weapon;
      |                          ^
src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
 2935 |         static int oldtime = 0;
      |                    ^
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o

```
 3746 |         float shake = 0;
      |               ^
src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
clang -o build/linux-x64-debug/ui/obj/games/ui/ui_atoms.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/s
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o

```
src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
clang -o build/linux-x64-debug/ui/obj/games/ui/ui_util.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/st
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
clang -o build/linux-x64-debug/ui/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/third-party/stb 
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o

```
1 warning generated.
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning generated.
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_shadows.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -I
1 warning generated.
clang -o build/linux-x64-debug/renderer/obj/renderer/tr_sky.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -g -O0 -include build/linux-x64-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc/
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2156:56: note: to match this '{'
 2156 |         for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
      |                                                               ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2131:39: note: to match this '{'
 2131 | static shader_t *FinishShader( void ) {
      |                                       ^
2 errors generated.
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [181x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cmd.c:247:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src/qcommon/files.c:2766:20: warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/net_chan.c:318:6: warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src/qcommon/unzip.c:2139:16: warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:6: warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:13: warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src/server/sv_snapshot.c:303:6: warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1143:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1188:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1237:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - :25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - 2094 |         int numvasrc/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_script.c:384:14: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - :66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:498:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:921:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:996:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:989:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:1829:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2179:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2108:27: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2109:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2115:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2116:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:227:28: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:569:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - 2 warningsrc/games/game/ai_cast_think.c:172:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:18: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:577:8: warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.c:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.c:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - 471 |                 isrc/games/cgame/cg_info.c:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_sound.c:238:6: warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:196:18: warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:972:8: warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:401:6: warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:402:6: warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:407:19: warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2013:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5082:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5085:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1186:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:488:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:492:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:496:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:569:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:573:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:582:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:585:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:870:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:873:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:876:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:977:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:979:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:981:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:983:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1261:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1264:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1267:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1270:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1273:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1283:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1292:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1303:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1306:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1316:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1318:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1325:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -pointer-sign
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:308:23: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:381:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:462:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -unused-function
  - src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
- [1x] -unused-variable
  - src/games/botlib/be_ai_goal.c:198:12: warning: unused variable 'g_gameskill' [-Wunused-variable]

## ubuntu-latest-x64-release-

status: failure

errors: 20
warnings: 247 in 6 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2387:25: error: expected '}'
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1667:84: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2468:24: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
clang -o build/linux-x64-release/client/obj/client/cl_console.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x64-release/client/obj/client/cl_input.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
1 warning generated.
2 warnings generated.
clang -o build/linux-x64-release/client/obj/client/cl_keys.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
clang -o build/linux-x64-release/client/obj/client/cl_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
clang -o build/linux-x64-release/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src/client/cl_main.c:2636:52: error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
clang -o build/linux-x64-release/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/bg_misc.c.o

```
      |                         ^
src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  946 |         int i, elapsed, count, clCount, activeCount;
      |                                ^
src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
6 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/ga
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/g_main.c.o

```
      |               ^
src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
 1568 |         clientPersistant_t  *pers;
      |                              ^
2 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/g_alarm.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/ga
clang -o build/linux-x64-release/game/obj/games/game/g_bot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/game
clang -o build/linux-x64-release/game/obj/games/game/g_client.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
clang -o build/linux-x64-release/game/obj/games/game/g_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/gam
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
clang -o build/linux-x64-release/game/obj/games/game/g_combat.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
clang -o build/linux-x64-release/game/obj/games/game/g_items.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/ga
1 warning generated.
clang -o build/linux-x64-release/game/obj/games/game/g_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/gam
src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  410 |         int hintType, hintDist, hintVal, oldHintType;
      |                                          ^
src/games/game/g_main.c:2387:25: error: expected '}'
 2387 |         level.time = levelTime;
      |                                ^
src/games/game/g_main.c:2374:34: note: to match this '{'
 2374 | void G_RunFrame( int levelTime ) {
      |                                  ^
1 warning and 1 error generated.
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o

```
clang -o build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
1 warning generated.
src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
clang -o build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
clang++ -o bin/renderer_bfg_x64.so -m64 -shared build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderWorld.cpp.o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderEntity.cpp.o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ScreenRect.cpp.o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/RenderSystem.cpp.o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/GLContext
1 warning generated.
clang -o build/linux-x64-release/game/obj/games/botai/ai_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
clang -o build/linux-x64-release/game/obj/games/botai/ai_team.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
clang -o build/linux-x64-release/game/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/
clang -o build/linux-x64-release/game/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/game
clang -o build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
clang -o build/linux-x64-release/cgame/obj/games/game/bg_pmove.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o

```
  525 |         int tagIndex;
      |             ^
8 warnings generated.
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_event.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  173 |         clientInfo_t *ci;
      |                       ^
src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  181 |         int tagIndex;
      |             ^
src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  407 |         int offsetwhole;
      |             ^
3 warnings generated.
src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  960 |         float scale;
      |               ^
1 warning generated.
src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src/games/cgame/cg_ents.c:2254:126: note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_flamethrower.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix
t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
5 warnings and 1 error generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o

```
src/games/cgame/cg_local.h:1897:32: note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botli
src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1667:35: note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1648:93: note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o

```
 5118 |         int markDuration;
      |             ^
src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/game/bg_misc.c.o

```
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
clang -o build/linux-x64-release/cgame/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/game
clang -o build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/ga
2 warnings generated.
clang -o build/linux-x64-release/ui/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -I
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o

```
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o

```
1 warning generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
1 warning generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
3 warnings generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2156:56: note: to match this '{'
 2156 |         for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
      |                                                               ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2131:39: note: to match this '{'
 2131 | static shader_t *FinishShader( void ) {
      |                                       ^
2 errors generated.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [184x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cmd.c:247:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src/qcommon/files.c:2766:20: warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/net_chan.c:318:6: warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src/qcommon/unzip.c:2139:16: warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:6: warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:13: warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src/server/sv_snapshot.c:303:6: warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1143:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1188:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1237:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_script.c:384:14: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:498:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:921:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:996:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:989:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:1829:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2179:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2108:27: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2109:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2115:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2116:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:227:28: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:569:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:172:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:18: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:577:8: warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.c:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.c:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_info.c:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_sound.c:238:6: warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:196:18: warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:972:8: warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:401:6: warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:402:6: warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:407:19: warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2013:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5082:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5085:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1186:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_sky.c:717:15: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:488:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:492:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:496:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:569:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:573:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:582:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:585:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:870:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:873:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:876:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:977:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:979:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:981:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:983:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1261:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1264:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1267:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1270:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1273:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1283:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1292:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1303:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1306:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1316:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1318:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1325:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -pointer-sign
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:308:23: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:381:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:462:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -unused-function
  - src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
- [1x] -unused-variable
  - src/games/botlib/be_ai_goal.c:198:12: warning: unused variable 'g_gameskill' [-Wunused-variable]

## ubuntu-latest-x64-release-game,renderer

status: failure

errors: 20
warnings: 246 in 6 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2387:25: error: expected '}'
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1667:84: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2468:24: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
clang -o build/linux-x64-release/client/obj/client/cl_cin.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -
clang -o build/linux-x64-release/client/obj/client/cl_console.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win
clang -o build/linux-x64-release/client/obj/client/cl_input.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32
src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
1 warning generated.
clang -o build/linux-x64-release/client/obj/client/cl_keys.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 
2 warnings generated.
clang -o build/linux-x64-release/client/obj/client/cl_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 
clang -o build/linux-x64-release/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/wi
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src/client/cl_main.c:2636:52: error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/bg_misc.c.o

```
src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
2 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/bg_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/gam
2 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bo
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
6 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/bg_pmove.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/b
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/g_main.c.o

```
      |               ^
src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
 1568 |         clientPersistant_t  *pers;
      |                              ^
clang -o build/linux-x64-release/game/obj/games/game/g_client.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/b
clang -o build/linux-x64-release/game/obj/games/game/g_cmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
2 warnings generated.
clang -o build/linux-x64-release/game/obj/games/game/g_combat.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/b
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
clang -o build/linux-x64-release/game/obj/games/game/g_items.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bo
clang -o build/linux-x64-release/game/obj/games/game/g_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
1 warning generated.
clang -o build/linux-x64-release/game/obj/games/game/g_mem.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botl
1 warning generated.
src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  410 |         int hintType, hintDist, hintVal, oldHintType;
      |                                          ^
clang -o build/linux-x64-release/game/obj/games/game/g_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DGAMEDLL -DGAME_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
src/games/game/g_main.c:2387:25: error: expected '}'
 2387 |         level.time = levelTime;
      |                                ^
src/games/game/g_main.c:2374:34: note: to match this '{'
 2374 | void G_RunFrame( int levelTime ) {
      |                                  ^
1 warning and 1 error generated.
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o

```
clang -o build/linux-x64-release/renderer/obj/renderer/tr_noise.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/ga
1 warning generated.
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
clang -o build/linux-x64-release/renderer/obj/renderer/tr_scene.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/ga
3 warnings generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/ga
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Is
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/g
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2156:56: note: to match this '{'
 2156 |         for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
      |                                                               ^
src/renderer/tr_shader.c:2205:55: error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src/renderer/tr_shader.c:2131:39: note: to match this '{'
 2131 | static shader_t *FinishShader( void ) {
      |                                       ^
2 errors generated.
1 warning generated.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o

```
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Material_shader.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Shadow.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Backend.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/un
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Tess_calc.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/s
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Lighting.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sy
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Surface.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/ImageManager.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isr
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_files.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_intrinsic.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -
clang++ -o build/linux-x64-release/renderer-bfg/obj/renderer-bfg/Image_process.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -std=c++14 -w -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Is
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/glad/src/gl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
clang -o build/linux-x64-release/renderer-bfg/obj/third-party/stb/stb_impl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -w -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
clang -o build/linux-x64-release/cgame/obj/games/game/bg_animation.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o

```
      |           ^ ~~~~~~
3 warnings generated.
8 warnings generated.
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_effects.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
src/games/cgame/cg_effects.c:525:src/games/cgame/cg_ents.c:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
525  173 |         clientInfo_t *ci;
      |                       ^
src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  181 |         int tagIndex;
      |             ^
 |         int tagIndex;
      |             ^
src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  407 |         int offsetwhole;
      |             ^
src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  960 |         float scale;
      |               ^
src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
src/games/cgame/cg_ents.c:2256:40: error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src/games/cgame/cg_ents.c:2254:126: note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
5 warnings and 1 error generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o

```
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib 
src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
13 warnings generated.
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1667:35: note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1667:84: error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1648:93: note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o

```
 1289 |                         int dec = 0;
      |                             ^
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_Thumbsrc/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
Func( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/game/bg_misc.c.o

```
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_Thumbsrc/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
Func( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
clang -o build/linux-x64-release/cgame/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/game
clang -o build/linux-x64-release/cgame/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/ga
clang -o build/linux-x64-release/ui/obj/games/game/bg_misc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -I
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src/games/game/bg_misc.c:2518:54: error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:464:1: note: to match this '{'
  464 | {
      | ^
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o

```
 1280 |         int skip;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
clang -o build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -I
6 warnings generated.
src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
clang -o build/linux-x64-release/ui/obj/games/ui/ui_syscalls.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame 
src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2462:52: note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2468:24: error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src/games/ui/ui_shared.c:2456:49: note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1
```


### warning kinds

- [183x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cmd.c:247:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src/qcommon/files.c:2766:20: warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/net_chan.c:318:6: warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src/qcommon/unzip.c:2139:16: warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:6: warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:13: warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src/server/sv_snapshot.c:303:6: warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - :406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1143:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1188:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1237:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_script.c:384:14: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:498:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:921:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:996:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:989:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:1829:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2179:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2108:27: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2109:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2115:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2116:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:227:28: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:569:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:172:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:18: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:577:8: warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.c:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.c:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1186:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_sky.c:717:15: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525:src/games/cgame/cg_ents.c:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - 173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_info.c:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_sound.c:238:6: warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:196:18: warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_view.c:972:8: warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:401:6: warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:402:6: warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:407:19: warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2013:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - 2456 | static void Scroll_ListBox_Thumbsrc/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5082:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5085:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:488:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:492:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:496:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:569:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:573:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:582:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:585:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:870:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:873:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:876:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:977:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:979:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:981:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:983:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1261:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1264:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1267:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1270:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1273:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1283:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1286:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1289:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1292:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1296:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1303:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1306:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1316:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1318:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1325:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -pointer-sign
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_info.c:79:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1719:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1721:5: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1723:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1755:23: warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1758:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1762:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1764:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1766:6: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1769:9: warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1803:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:308:23: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:381:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/ui/ui_main.c:462:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -unused-function
  - src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
- [1x] -unused-variable
  - src/games/botlib/be_ai_goal.c:198:12: warning: unused variable 'g_gameskill' [-Wunused-variable]

## ubuntu-latest-x86-debug-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


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

errors: 7
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/client/cl_main.c
UNCRUSTIFY_FAILED: src/renderer/tr_shader.c
UNCRUSTIFY_FAILED: src/games/game/g_main.c
UNCRUSTIFY_FAILED: src/games/game/bg_misc.c
UNCRUSTIFY_FAILED: src/games/cgame/cg_players.c
UNCRUSTIFY_FAILED: src/games/cgame/cg_ents.c
UNCRUSTIFY_FAILED: src/games/ui/ui_shared.c

### failure context


### warning kinds

## windows-latest-x64-debug-

status: cancelled

errors: 2
warnings: 150 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_main.c.obj

```
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
2 warnings generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
1 warning generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [55x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
- [47x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [7x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [7x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-

status: cancelled

errors: 2
warnings: 150 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [56x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - 71 |         {"hspread", WEAsrc\games\botlib\be_ai_move.cPO(N1553_,O8F)S:(  warning: hvariable 'dist' set but not used [-Wunused-but-set-variable]s
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
- [47x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [7x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-cgame

status: cancelled

errors: 14
warnings: 268 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1667,84): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2468,24): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_cin.c.obj /c src\client\cl_cin.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_libvar.c.obj /c src\games\botlib\l_libvar.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_log.c.obj /c src\games\botlib\l_log.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_memory.c.obj /c src\games\botlib\l_memory.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splin
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  384 |         int c, val, i;
      |                     ^
src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
 1656 |         int lastoperatortype = 0;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj

```
 1441 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1442 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1443 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1444 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  738 |         int howmany, total;
      |                      ^
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src\games\cgame\cg_ents.c(2254,126): note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
18 warnings and 1 error generated.
src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
 1072 |         int mass;
      |             ^
src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
 1363 |         int type;
      |             ^
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj

```
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys
src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1667,35): note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1648,93): note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
13 warnings generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj

```
      |             ^
src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 2932 |         weaponInfo_t    *weapon;
      |                          ^
src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
 2935 |         static int oldtime = 0;
      |                    ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
3 warnings and 2 errors generated.
src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
"C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\\x64\rc.EXE" /nologo /fo build\windows-x64-release\client\winquake.res src\sys\win32\winquake.rc
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\bg_misc.c.obj

```
  946 |         int i, elapsed, count, clCount, activeCount;
      |                                ^
src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
6 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
```


### warning kinds

- [138x] -unused-but-set-variable
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_effects.c(525,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(173,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(181,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(407,6): warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(960,8): warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(196,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2004,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2104,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(66,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(498,16): warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(921,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(996,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(989,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(1829,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2179,19): warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2108,27): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2109,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2115,16): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2116,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2323,14): warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2327,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3331,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3700,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4355,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4361,6): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4663,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4714,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(2698,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(227,28): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(569,17): warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(172,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,18): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
- [60x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
- [30x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1762,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1764,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1766,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1769,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1803,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1839,25): warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-game,renderer

status: failure

errors: 20
warnings: 321 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2387,25): error: expected '}'
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
src\renderer\tr_shader.c(2205,55): error: expected '}'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1667,84): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2468,24): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_cin.c.obj /c src\client\cl_cin.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spline
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\bg_misc.c.obj

```
      |                         ^
src\games\game\ai_cast_think.c(946,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  946 |         int i, elapsed, count, clCount, activeCount;
      |                                ^
src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
15 warnings generated.
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\g_main.c.obj

```
 1568 |         clientPersistant_t  *pers;
      |                              ^
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_client.c.obj /c src\games\game\g_client.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_cmds.c.obj /c src\games\game\g_cmds.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_combat.c.obj /c src\games\game\g_combat.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_misc.c.obj /c src\games\game\g_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_missile.c.obj /c src\games\game\g_missile.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
src\games\game\g_main.c(410,35): warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  410 |         int hintType, hintDist, hintVal, oldHintType;
      |                                          ^
src\games\game\g_main.c(2387,25): error: expected '}'
 2387 |         level.time = levelTime;
      |                                ^
src\games\game\g_main.c(2374,34): note: to match this '{'
 2374 | void G_RunFrame( int levelTime ) {
      |                                  ^
1 warning and 1 error generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_mover.c.obj /c src\games\game\g_mover.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj

```
  500 |         float texCoordScale;
      |               ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
3 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src\renderer\tr_shader.c(2205,55): error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src\renderer\tr_shader.c(2156,56): note: to match this '{'
 2156 |         for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
      |                                                               ^
src\renderer\tr_shader.c(2205,55): error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src\renderer\tr_shader.c(2131,39): note: to match this '{'
 2131 | static shader_t *FinishShader( void ) {
      |                                       ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj

```
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Shadow.cpp.obj /c src\renderer-bfg\Shadow.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\s
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Backend.cpp.obj /c src\renderer-bfg\Backend.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess.cpp.obj /c src\renderer-bfg\Tess.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Tess_calc.cpp.obj /c src\renderer-bfg\Tess_calc.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Lighting.cpp.obj /c src\renderer-bfg\Lighting.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Is
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Surface.cpp.obj /c src\renderer-bfg\Surface.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\ImageManager.cpp.obj /c src\renderer-bfg\ImageManager.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spl
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splin
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Is
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj /c src\renderer-bfg\Image_process.cpp /TP /W4 -m64 /O2 /std:c++14 /W0 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\s
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /I
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isr
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj

```
 1438 |         {"", 0,      1,      0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (no flags, idle)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1439,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1439 |         {"", 0,      15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1440,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1440 |         {"", 490,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1441,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1441 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1442 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1443 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1444 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src\games\cgame\cg_ents.c(2254,126): note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
18 warnings and 1 error generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj

```
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /I
src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
13 warnings generated.
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1667,35): note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1648,93): note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj

```
 5118 |         int markDuration;
      |             ^
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj

```
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isr
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isrc\game
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj

```
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isrc\game
src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
6 warnings generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```


### warning kinds

- [185x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2004,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2104,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(66,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(498,16): warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(921,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(996,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(989,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(1829,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2179,19): warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2108,27): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2109,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2115,16): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2116,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2323,14): warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2327,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3331,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3700,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4355,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4361,6): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4663,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4714,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(2698,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(227,28): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(569,17): warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(172,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,18): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.c(577,8): warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.c(1568,23): warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_main.c(410,35): warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_missile.c(432,6): warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_props.c(888,11): warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(1698,8): warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(2150,6): warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_target.c(990,17): warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_tramcar.c(212,8): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(160,13): warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(867,13): warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1078,8): warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1337,6): warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_chat.c(1050,6): warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_cmd.c(1272,42): warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1186,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_effects.c(525,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(173,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(181,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(407,6): warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(960,8): warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(196,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
- [60x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
- [35x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1762,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1764,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1766,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1769,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1803,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1839,25): warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

## windows-latest-x64-release-ui

status: cancelled

errors: 20
warnings: 321 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
src\games\ui\ui_shared.c(2468,24): error: expected '}'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2387,25): error: expected '}'
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1667,84): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
src\renderer\tr_shader.c(2205,55): error: expected '}'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_cin.c.obj /c src\client\cl_cin.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj

```
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_log.c.obj /c src\games\botlib\l_log.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_memory.c.obj /c src\games\botlib\l_memory.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
 1656 |         int lastoperatortype = 0;
      |             ^
src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  384 |         int c, val, i;
      |                     ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj

```
      |             ^
src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj /c src\games\ui\ui_syscalls.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\g
src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
 1289 |                         int dec = 0;
      |                             ^
src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
3 warnings and 2 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\bg_misc.c.obj

```
src\games\game\ai_cast_think.c(946,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  946 |         int i, elapsed, count, clCount, activeCount;
      |                                ^
src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
 1241 |         float yaw, oldyaw, distmoved, bestmoved, bestyaw;
      |                                                  ^
src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
6 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\g_main.c.obj

```
src\games\game\g_active.c(1568,23): warning: variable 'pers' set but not used [-Wunused-but-set-variable]
 1568 |         clientPersistant_t  *pers;
      |                              ^
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_alarm.c.obj /c src\games\game\g_alarm.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_bot.c.obj /c src\games\game\g_bot.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_client.c.obj /c src\games\game\g_client.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_cmds.c.obj /c src\games\game\g_cmds.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_combat.c.obj /c src\games\game\g_combat.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
src\games\game\g_main.c(410,35): warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  410 |         int hintType, hintDist, hintVal, oldHintType;
      |                                          ^
src\games\game\g_main.c(2387,25): error: expected '}'
 2387 |         level.time = levelTime;
      |                                ^
src\games\game\g_main.c(2374,34): note: to match this '{'
 2374 | void G_RunFrame( int levelTime ) {
      |                                  ^
1 warning and 1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj

```
src\games\botai\ai_cmd.c(1272,42): warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
4 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj /c src\games\botai\ai_dmq3.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
1 warning generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_main.c.obj /c src\games\botai\ai_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_team.c.obj /c src\games\botai\ai_team.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-release\game\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isrc\
clang-cl /Fobuild\windows-x64-release\game\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isr
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      | ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isr
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj

```
 1438 |         {"", 0,      1,      0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (no flags, idle)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1439,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1439 |         {"", 0,      15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1440,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1440 |         {"", 490,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1441,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1441 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1442 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1443 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1444 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
 1814 |         lerpFrame_t         *traplf;
      |                              ^
src\games\cgame\cg_ents.c(2256,40): error: expected '}'
 2256 |         vec3_t oldOrigin, origin, deltaOrigin;
      |                                               ^
src\games\cgame\cg_ents.c(2254,126): note: to match this '{'
 2254 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
18 warnings and 1 error generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj

```
      |                                ^
src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win3
13 warnings generated.
src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  189 |         int lastLow, low, numSteps, lastFirst, thisFirst;
      |             ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1667,35): note: to match this '{'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1667,84): error: expected '}'
 1667 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1648,93): note: to match this '{'
 1648 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
1 warning and 2 errors generated.
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj

```
 1289 |                         int dec = 0;
      |                             ^
src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
 1790 |         listBoxDef_t *listPtr;
      |                       ^
src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
 1792 |         int count;
      |             ^
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2462,52): note: to match this '{'
 2462 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2468,24): error: expected '}'
 2468 |                 r.h = SCROLLBAR_SIZE;
      |                                      ^
src\games\ui\ui_shared.c(2456,49): note: to match this '{'
 2456 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
3 warnings and 2 errors generated.
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj

```
  500 |         float texCoordScale;
      |               ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
3 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src\renderer\tr_shader.c(2205,55): error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src\renderer\tr_shader.c(2156,56): note: to match this '{'
 2156 |         for ( stage = 0; stage < MAX_SHADER_STAGES; stage++ ) {
      |                                                               ^
src\renderer\tr_shader.c(2205,55): error: expected '}'
 2205 |                 // not a true lightmap but we want to leave existing
      |                                                                     ^
src\renderer\tr_shader.c(2131,39): note: to match this '{'
 2131 | static shader_t *FinishShader( void ) {
      |                                       ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Error 1
```


### warning kinds

- [185x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2004,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2104,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(66,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(498,16): warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(921,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(996,20): warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(989,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(1829,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2179,19): warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2108,27): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2109,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2115,16): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2116,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2323,14): warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2327,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3331,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3700,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4355,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4361,6): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4663,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4714,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(2698,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(227,28): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(569,17): warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(172,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,18): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(946,25): warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1241,43): warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.c(577,8): warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_active.c(1568,23): warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_main.c(410,35): warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_missile.c(432,6): warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(1698,8): warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(2150,6): warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_props.c(888,11): warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_target.c(990,17): warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_tramcar.c(212,8): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(160,13): warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(867,13): warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1078,8): warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1337,6): warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_chat.c(1050,6): warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_cmd.c(1272,42): warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_effects.c(525,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(173,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(181,6): warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(407,6): warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(960,8): warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_ents.c(1814,23): warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(196,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1186,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
- [60x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
- [35x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_info.c(79,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1719,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1721,5): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1723,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1755,23): warning: initializing 'const unsigned char *' with an expression of type 'char[1]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1758,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1762,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1764,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1766,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1769,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1803,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1839,25): warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

## windows-latest-x86-debug-

status: cancelled

errors: 2
warnings: 150 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_main.c.obj

```
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
2 warnings generated.
1 warning generated.
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
1 warning generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [55x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
- [47x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [7x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [7x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x86-release-

status: cancelled

errors: 2
warnings: 150 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_main.c.obj

```
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_cin.c.obj /c src\client\cl_cin.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_console.c.obj /c src\client\cl_console.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_input.c.obj /c src\client\cl_input.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [56x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1143,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1188,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1237,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - 74 |         {"acceleration", WEAPON_OFS( acceleration ), FT_FLOAT, 0 }, //"acceleration" * time (in seconsrc\games\botlib\be_ai_move.cds()1553 ,+8 )":s pwarning: evariable 'dist' set but not used [-Wunused-but-set-variable]e
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
- [47x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,14): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,44): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,56): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,61): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,63): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,53): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,49): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,47): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,51): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
- [30x] -writable-strings
  - src\splines\splines.cpp(488,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(492,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(496,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(569,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(573,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(582,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(585,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(870,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(873,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(876,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(977,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(979,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(981,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(983,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1261,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1264,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1267,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1270,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1273,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1283,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1286,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1289,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1292,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1296,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1303,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1306,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1316,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1318,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1325,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [7x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

