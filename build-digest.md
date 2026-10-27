# Build digest

commit: c988d8d80ae1

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: failure
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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release-

status: failure

errors: 4
warnings: 225 in 5 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
clang -o build/linux-x64-release/client/obj/client/cl_cin.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
clang -o build/linux-x64-release/client/obj/client/cl_console.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x64-release/client/obj/client/cl_input.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
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
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/client/obj/splines/splines.cpp.o

```
clang++ -o build/linux-x64-release/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/
src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
  148 | static const char *Q_stristr( const char *s, const char *find ) {
      |                    ^~~~~~~~~
clang++ -o build/linux-x64-release/client/obj/splines/math_quaternion.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -I
1 warning generated.
clang++ -o build/linux-x64-release/client/obj/splines/math_vector.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/
clang++ -o build/linux-x64-release/client/obj/splines/q_parse.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/
clang++ -o build/linux-x64-release/client/obj/splines/q_shared.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys
clang++ -o build/linux-x64-release/client/obj/splines/splines.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/
clang++ -o build/linux-x64-release/client/obj/splines/util_str.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys
src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
In file included from src/splines/splines.cpp:30:
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
clang -o build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isr
clang -o build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -I
1 error generated.
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1
```


### warning kinds

- [192x] -unused-but-set-variable
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
  - src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_main.c:2377:6: warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_players.c:1774:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2438:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2596:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4553:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:3712:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4173:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4820:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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

errors: 4
warnings: 225 in 5 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
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
clang -o build/linux-x64-release/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32
src/client/cl_main.c:2636:52: error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/client/obj/splines/splines.cpp.o

```
clang++ -o build/linux-x64-release/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/
clang++ -o build/linux-x64-release/client/obj/splines/math_quaternion.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -I
src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
  148 | static const char *Q_stristr( const char *s, const char *find ) {
      |                    ^~~~~~~~~
clang++ -o build/linux-x64-release/client/obj/splines/math_vector.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/
clang++ -o build/linux-x64-release/client/obj/splines/q_parse.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/rend
1 warning generated.
clang++ -o build/linux-x64-release/client/obj/splines/q_shared.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/ren
clang++ -o build/linux-x64-release/client/obj/splines/splines.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/rend
clang++ -o build/linux-x64-release/client/obj/splines/util_str.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/ren
In file included from src/splines/splines.cpp:30:
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
src/splines/util_str.cpp:437:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
clang -o build/linux-x64-release/client/obj/games/botlib/be_aas_bspq3.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/u
clang -o build/linux-x64-release/client/obj/games/botlib/be_aas_cluster.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DGAME_HARD_LINKED -DRENDERER_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys
1 error generated.
scons: *** [build/linux-x64-release/client/obj/splines/splines.cpp.o] Error 1
```


### warning kinds

- [192x] -unused-but-set-variable
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
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - warning: | variable 'ent' set but not used [-Wunused-but-set-variable]             ^
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_main.c:2377:6: warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:1774:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2438:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2596:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4553:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:3712:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4173:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4820:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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

status: failure

errors: 4
warnings: 223 in 5 kinds

### errors

src/client/cl_main.c:2636:52: error: expected '}'
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_main.c.o

```
 1796 |         qboolean holdatend;
      |                  ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
1 warning generated.
clang -o build/linux-x86-debug/client/obj/client/cl_keys.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
2 warnings generated.
clang -o build/linux-x86-debug/client/obj/client/cl_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
1 warning generated.
clang -o build/linux-x86-debug/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
clang -o build/linux-x86-debug/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -I
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src/client/cl_main.c:2636:52: error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 warning and 1 error generated.
1 warning generated.
clang -o build/linux-x86-debug/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x86-debug/client/obj/splines/splines.cpp.o

```
clang++ -o build/linux-x86-debug/client/obj/splines/math_angles.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
clang++ -o build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
clang++ -o build/linux-x86-debug/client/obj/splines/math_quaternion.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -I
src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]
  148 | static const char *Q_stristr( const char *s, const char *find ) {
      |                    ^~~~~~~~~
1 warning generated.
clang++ -o build/linux-x86-debug/client/obj/splines/math_vector.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
clang++ -o build/linux-x86-debug/client/obj/splines/q_parse.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/game
clang++ -o build/linux-x86-debug/client/obj/splines/q_shared.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/gam
clang++ -o build/linux-x86-debug/client/obj/splines/splines.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/game
clang++ -o build/linux-x86-debug/client/obj/splines/util_str.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/gam
In file included from src/splines/splines.cpp:30:
src/splines/splines.h:36:12: fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
clang -o build/linux-x86-debug/client/obj/games/botlib/be_aas_bspq3.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgam
3 warnings generated.
clang -o build/linux-x86-debug/client/obj/games/botlib/be_aas_cluster.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cg
1 error generated.
clang -o build/linux-x86-debug/client/obj/games/botlib/be_aas_debug.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgam
scons: *** [build/linux-x86-debug/client/obj/splines/splines.cpp.o] Error 1
```


### warning kinds

- [190x] -unused-but-set-variable
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
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - 2094 |         intsrc/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:498:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:921:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:996:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:989:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:1829:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2179:19: warning: variable 'shouldAttack' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2108:27: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2109:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2115:16: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2116:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2323:14: warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:2327:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:2377:6: warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - 466 |         s = stringsrc/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_info.c:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - 1101 |         qboolean isClientFsrc/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:189:6: warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:1774:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2438:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2596:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4553:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:3712:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4173:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4820:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconf
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

## ubuntu-latest-x86-release-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## uncrustify

status: success

errors: 1
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/client/cl_main.c

### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 10
warnings: 732 in 7 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_main.c.obj

```
2 warnings generated.
1 warning generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
1 warning generated.
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\splines\splines.cpp.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\winsock.h(817,61): note: passing argument to parameter 'buf' here
  817 |                      _In_reads_bytes_(len) const char FAR * buf,
      |                                                             ^
src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  667 |         len = recv( socks_socket, buf, 64, 0 );
      |                                   ^~~
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\winsock.h(796,95): note: passing argument to parameter 'buf' here
  796 |                      _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
      |                                                                                               ^
src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  527 |         int err;
      |             ^
src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
clang-cl /Fobuild\windows-x64-debug\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m64 /Z7 /Od /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
1 error generated.
scons: *** [build\windows-x64-debug\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [493x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - int nusrc\games\ui\ui_shared.cm(N3489e,t49S)o:u rwarning: cmissing field 'bind2' initializer [-Wmissing-field-initializers]e
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [191x] -unused-but-set-variable
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
  - src\games\game\ai_cast_script_actions.c(764,29): warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2108,27): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2109,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2115,16): warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2116,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2323,14): warning: variable 'moveDist' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(2327,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_script_actions.c(2698,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3331,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(3700,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4355,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4361,6): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4663,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_funcs.c(4714,6): warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c140( | 1275        ,{15")h:ou rwarning: svariable 'text_p' set but not used [-Wunused-but-set-variable]"}
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
- [35x] -pointer-sign
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
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [7x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - 3488 |         {"weapon 21",        -src\games\ui\ui_main.c1(,70 , 18 ) :   warning:  unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj /c src\games\ui\ui_syscalls.c 
  - src\games\ui\ui_shared.c(3480,49): warning: clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj /c src\games\ui\ui_syscalls.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc

## windows-latest-x64-release-

status: failure

errors: 10
warnings: 732 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
9 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Is
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
clang-cl /Fobuild\windows-x64-release\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
1 error generated.
4 warnings generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - 112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(src\games\cgame\cg_weapons.c122(,608818,)13:) :warning:  missing field 'localname' initializer [-Wmissing-field-initializers]warning:
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [192x] -unused-but-set-variable
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
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_goal.c(241,19): warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\ai_cast_funcs.c(3700,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]clang-cl /Fobuild\windows-x64-release\game\obj\games\game\ai_cast_script.c.obj /c src\games\game\ai_cast_script.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\gam
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - 111 |         {"missionfail3"},            // "Mission src\games\cgame\cg_weapons.cF(ailed\nYou Kille6041d, 6K)e:s swarning: lvariable 'anim' set but not used [-Wunused-but-set-variable]e
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
- [35x] -pointer-sign
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
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
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

## windows-latest-x64-release-cgame

status: failure

errors: 10
warnings: 733 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\serv
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splin
clang-cl /Fobuild\windows-x64-release\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines
clang-cl /Fobuild\windows-x64-release\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splin
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc
src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - int masrc\games\ui\ui_shared.cr(k3457D,u50r)a:t iwarning: omissing field 'bind2' initializer [-Wmissing-field-initializers]n
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]src\games\cgame\cg_weapons.c
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - 5082 |         int i, count, clients, maxCli103en,t15s): ,warning:  missing field 'localname' initializer [-Wmissing-field-initializers]p
  - ,src\games\ui\ui_main.c26()5085:, 13warning: )missing field 'localname' initializer [-Wmissing-field-initializers]
  - : warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [193x] -unused-but-set-variable
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
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - 3456 |         {"centerview",       K_END,          -src\games\cgame\cg_weapons.c1(,5118 ,-61),:  -warning: 1variable 'markDuration' set but not used [-Wunused-but-set-variable]}
  - (6041,6) :3506  | warning:         variable 'anim' set but not used [-Wunused-but-set-variable]{
  - 3522 | src\games\cgame\cg_weapons.c        ({6088",t13a)s:k Ewarning: svariable 'cent' set but not used [-Wunused-but-set-variable]c
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_missile.c(432,6): warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(1698,8): warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(2150,6): warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_props.c(888,11): warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_target.c(990,17): warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_tramcar.c(212,8): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_chat.c(1050,6): warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(160,13): warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(867,13): warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1078,8): warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_weapon.c(1337,6): warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src\games\botai\ai_cmd.c(1272,42): warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - : warning:   variable 'numinvisible' set but not used [-Wunused-but-set-variable]104
  - 119 |         {"misrc\games\ui\ui_main.cs(s5395i,o23n)f:a iwarning: lvariable 'numTimeOuts' set but not used [-Wunused-but-set-variable]1
  - 132 |         {"keychange"},               // "Prsrc\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
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
- [35x] -pointer-sign
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
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
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

## windows-latest-x64-release-game,renderer

status: failure

errors: 10
warnings: 733 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
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
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server 
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\rende
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\rende
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Is
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\rende
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /I
clang-cl /Fobuild\windows-x64-release\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /I
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\rende
src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
- [193x] -unused-but-set-variable
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
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2004,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2104,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
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

status: failure

errors: 10
warnings: 733 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
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
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\splines\splines.cpp.obj

```
  817 |                      _In_reads_bytes_(len) const char FAR * buf,
      |                                                             ^
src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  667 |         len = recv( socks_socket, buf, 64, 0 );
      |                                   ^~~
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\winsock.h(796,95): note: passing argument to parameter 'buf' here
  796 |                      _Out_writes_bytes_to_(len, return) __out_data_source(NETWORK) char FAR * buf,
      |                                                                                               ^
src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  527 |         int err;
      |             ^
src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server 
clang-cl /Fobuild\windows-x64-release\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
clang-cl /Fobuild\windows-x64-release\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m64 /O2 /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - : warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]src\games\cgame\cg_weapons.c
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [193x] -unused-but-set-variable
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
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2094,6): warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2188,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - 125 |         {src\games\ui\ui_main.c"(e5082n,d43_)t:i twarning: lvariable 'game' set but not used [-Wunused-but-set-variable]e
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - 133 |         {"pleasewait"},              // src\games\ui\ui_main.c"P(l5708e,a33s)e:  Wwarning: avariable 'lastSaveTime' set but not used [-Wunused-but-set-variable]i
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - (6041,  6112) | :         {warning: "variable 'anim' set but not used [-Wunused-but-set-variable]m
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

status: failure

errors: 10
warnings: 732 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_main.c.obj

```
1 warning generated.
2 warnings generated.
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
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
1 warning generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\splines\splines.cpp.obj

```
  527 |         int err;
      |             ^
src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
clang-cl /Fobuild\windows-x86-debug\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m32 /Z7 /Od /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
1 error generated.
src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
scons: *** [build\windows-x86-debug\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [191x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - : warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - warning:       variable 'w' set but not used [-Wunused-but-set-variable]|
  - src\games\ui\ui_players.c2465( | 1279        ,f8l)o:a twarning:  variable 'fps' set but not used [-Wunused-but-set-variable]x
  - ,src\games\ui\ui_players.c17()1280:, 6warning: )variable 'h' set but not used [-Wunused-but-set-variable]:
  - warning:  variable 'skip' set but not used [-Wunused-but-set-variable]2465
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
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
- [35x] -pointer-sign
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
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [7x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

## windows-latest-x86-release-

status: failure

errors: 10
warnings: 733 in 6 kinds

### errors

src\client\cl_main.c(2636,52): error: expected '}'
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
scons: *** [build\windows-x86-release\client\obj\splines\splines.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_main.c.obj

```
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2095 |         {{'s','o','u','n','d',0}, CACHE_SOUNDS},
      |                                               ^
src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2096 |         {{'m','o','d','e','l',0}, CACHE_MODELS},
      |                                               ^
src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
 2097 |         {{'i','m','a','g','e',0}, CACHE_IMAGES},
      |                                               ^
src\client\cl_main.c(2636,52): error: expected '}'
 2636 |         Cmd_AddCommand( "snd_restart", CL_Snd_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
4 warnings and 1 error generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj

```
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj

```
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  870 |         if ( GetVersionEx( &vinfo ) ) {
      |              ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
1 warning and 4 errors generated.
src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  225 | static HINSTANCE hInstDI;
      |                  ^~~~~~~
src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  249 | static DIDATAFORMAT df = {
      |                     ^~
src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  258 | static LPDIRECTINPUT g_pdi;
      |                      ^~~~~
src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x86-release\client\obj\splines\splines.cpp.obj

```
  703 |         int error;
      |             ^
9 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_wndproc.c.obj /c src\sys\win32\win_wndproc.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x86-release\client\obj\splines\math_angles.cpp.obj /c src\splines\math_angles.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x86-release\client\obj\splines\math_matrix.cpp.obj /c src\splines\math_matrix.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x86-release\client\obj\splines\math_quaternion.cpp.obj /c src\splines\math_quaternion.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Is
clang-cl /Fobuild\windows-x86-release\client\obj\splines\math_vector.cpp.obj /c src\splines\math_vector.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
clang-cl /Fobuild\windows-x86-release\client\obj\splines\q_parse.cpp.obj /c src\splines\q_parse.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x86-release\client\obj\splines\q_shared.cpp.obj /c src\splines\q_shared.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
clang-cl /Fobuild\windows-x86-release\client\obj\splines\splines.cpp.obj /c src\splines\splines.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x86-release\client\obj\splines\util_str.cpp.obj /c src\splines\util_str.cpp /TP /W4 -m32 /O2 /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_aas_bspq3.c.obj /c src\games\botlib\be_aas_bspq3.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  437 |         int len;
      |             ^
src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  475 |         int i;                              // i == ?
      |             ^
src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  480 |         const char *s1 = a.c_str(); // s1 == "\0"
      |                     ^
src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  482 |         const char *s2 = c.c_str(); // s2 == "test\0"
      |                     ^
In file included from src\splines\splines.cpp:30:
src\splines\splines.h(36,12): fatal error: '../renderer/qgl.h' file not found
   36 |   #include "../renderer/qgl.h"
      |            ^~~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-release\client\obj\splines\splines.cpp.obj] Error 1
```


### warning kinds

- [494x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(144,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(152,10): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(63,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(64,40): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(65,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(66,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(67,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(68,39): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(69,52): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(70,57): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(71,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(72,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(73,41): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(74,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(75,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(76,57): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(77,67): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(78,59): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(79,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(80,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(81,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(82,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(83,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(84,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(85,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(91,44): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(92,42): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(93,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(94,49): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(95,45): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(96,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(97,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(98,53): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(99,51): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(100,43): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(101,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(102,47): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(103,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(104,55): warning: missing field 'maxarray' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_weap.c(106,16): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\l_script.c(167,10): warning: missing field 'next' initializer [-Wmissing-field-initializers]
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(145,42): warning: missing field 'trackChange' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(148,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(149,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(150,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(151,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(154,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(157,79): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(160,47): warning: missing field 'modificationCount' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(163,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(164,90): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(165,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(166,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(167,88): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(168,98): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(172,63): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(174,97): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(175,104): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(178,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(179,95): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(180,94): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(181,100): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(183,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(185,68): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(187,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(188,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(189,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(190,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(192,61): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(193,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(195,50): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(197,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(198,49): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(199,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(200,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(201,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(202,67): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(203,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(204,52): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(205,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(206,55): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(207,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(208,65): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(209,77): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(211,74): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(214,40): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(215,45): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(217,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(218,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(220,51): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(221,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(223,69): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(225,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(227,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(229,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(231,48): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(233,56): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(235,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(236,58): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(237,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(238,62): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(241,53): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(243,64): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(244,54): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(246,82): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(248,57): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_main.c(249,59): warning: missing field 'teamShader' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(111,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(112,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(113,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(114,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(115,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(116,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(117,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(118,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(119,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(120,54): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(121,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(122,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(123,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(124,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(125,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(126,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(127,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(128,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(129,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(130,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(131,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(132,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(134,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(135,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(137,48): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(138,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(141,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(142,50): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(143,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(147,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(148,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(153,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(154,49): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(155,52): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(159,47): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(162,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(166,46): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(170,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(171,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(175,44): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(176,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(182,42): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(183,38): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(185,32): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(188,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(190,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(192,62): warning: missing field 'flags' initializer [-Wmissing-field-initializers]
  - src\games\game\g_spawn.c(194,7): warning: missing field 'ofs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1416,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1417,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1418,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1419,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1420,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1421,43): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1438,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1439,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1440,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1441,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1442,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1443,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1444,55): warning: missing field 'moveSpeed' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_info.c(189,9): warning: missing field 'YOfs' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2914,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(96,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(97,19): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(113,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(114,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(115,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(116,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(117,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(118,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(119,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(120,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(121,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(122,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(123,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(124,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(125,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(126,13): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(127,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(131,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(132,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(133,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(134,18): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(135,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(136,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(137,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(138,12): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(139,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(src\games\cgame\cg_weapons.c140,(106041),:6 )warning: :missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(141,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(142,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(144,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(145,9): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(146,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3477,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3479,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3480,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3481,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3482,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3483,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3484,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3485,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3486,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3487,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3488,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3489,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3490,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3491,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3492,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3493,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3494,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3530,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3533,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3541,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3545,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3546,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3549,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3550,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(140,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [193x] -unused-but-set-variable
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
  - src\games\botlib\be_aas_move.c(447,35): warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(717,22): warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3372,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_main.c(2377,6): warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
- [35x] -pointer-sign
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
  - src\games\ui\ui_main.c(308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
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

