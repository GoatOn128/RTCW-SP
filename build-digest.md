# Build digest

commit: 74208505fe3e

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: cancelled
- ubuntu-latest-x64-release-game,renderer: cancelled
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game,renderer: cancelled
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: cancelled
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 20
warnings: 227 in 6 kinds

### errors

src/client/cl_main.c:2637:52: error: expected '}'
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2389:1: error: expected '}'
scons: *** [build/linux-x64-debug/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1665:84: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2465:5: error: expected '}'
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_main.c.o

```
scons: done reading SConscript files.
scons: Building targets ...
Compiling src/client/cl_cgame.c
Compiling src/client/cl_cin.c
Compiling src/client/cl_console.c
Compiling src/client/cl_input.c
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
Compiling src/client/cl_keys.c
Compiling src/client/cl_main.c
1 warning generated.
Compiling src/client/cl_net_chan.c
src/client/cl_main.c:2637:52: error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build/linux-x64-debug/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-debug/game/obj/games/game/bg_misc.c.o

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
Compiling src/games/game/bg_misc.c (shared)
6 warnings generated.
Compiling src/games/game/bg_pmove.c (shared)
Compiling src/games/game/bg_slidemove.c (shared)
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
Linking bin/renderer_bfg_x64.so
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-debug/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-debug/game/obj/games/game/g_main.c.o

```
2 warnings generated.
Compiling src/games/game/g_cmds.c (shared)
Compiling src/games/game/g_combat.c (shared)
Compiling src/games/game/g_items.c (shared)
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
Compiling src/games/game/g_main.c (shared)
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
Compiling src/games/game/g_mem.c (shared)
1 warning generated.
Compiling src/games/game/g_misc.c (shared)
Compiling src/games/game/g_missile.c (shared)
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2388:48: note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2373:34: note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
Compiling src/games/game/g_mover.c (shared)
scons: *** [build/linux-x64-debug/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o

```
src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
 1050 |         int cpm;
      |             ^
1 warning generated.
Compiling src/games/botai/ai_main.c (shared)
src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
1 warning generated.
Compiling src/games/botai/ai_team.c (shared)
Compiling src/qcommon/q_math.c (shared)
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
Compiling src/games/game/bg_pmove.c (shared)
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
scons: *** [build/linux-x64-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o

```
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  466 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  508 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  518 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  526 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  542 |         s = string;
      |           ^ ~~~~~~
8 warnings generated.
src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  525 |         int tagIndex;
      |             ^
Compiling src/games/cgame/cg_event.c (shared)
3 warnings generated.
Compiling src/games/cgame/cg_flamethrower.c (shared)
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
 2260 | 
      | ^
src/games/cgame/cg_ents.c:2245:126: note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 error generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o

```
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
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
13 warnings generated.
Compiling src/games/cgame/cg_playerstate.c (shared)
Compiling src/games/cgame/cg_predict.c (shared)
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1665:35: note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1646:93: note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o

```
2 warnings generated.
src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 2932 |         weaponInfo_t    *weapon;
      |                          ^
src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
 2935 |         static int oldtime = 0;
      |                    ^
Compiling src/qcommon/q_shared.c (shared)
src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-debug/ui/obj/games/game/bg_misc.c.o

```
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
Compiling src/games/game/bg_misc.c (shared)
Compiling src/games/ui/ui_atoms.c (shared)
Compiling src/games/ui/ui_gameinfo.c (shared)
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
src/games/ui/ui_main.c:5085:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
 5085 |         static int numinvisible;
      |                    ^
src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
 5395 |         static int numFound, numTimeOuts;
      |                              ^
src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
Compiling src/games/ui/ui_util.c (shared)
src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->iCompiling src/qcommon/q_math.c (shared)
tem->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-debug/renderer/obj/renderer/tr_shader.c.o

```
Compiling src/renderer/tr_shade.c (shared)
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
Compiling src/renderer/tr_shade_calc.c (shared)
1 warning generated.
Compiling src/renderer/tr_shader.c (shared)
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
Compiling src/renderer/tr_shadows.c (shared)
1 warning generated.
Compiling src/renderer/tr_sky.c (shared)
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning generated.
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

- [164x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:172:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:227:28: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:18: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:946:25: warning: variable 'clCount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:569:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1241:43: warning: variable 'bestyaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1247:27: warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:1251:16: warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:577:8: warning: variable 'fallSoundMul' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_active.c:1568:23: warning: variable 'pers' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.c:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.c:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]Compiling src/games/game/g_weapon.c (shared)
  - src/games/game/g_weapon.c:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
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

## ubuntu-latest-x64-release-

status: cancelled

errors: 18
warnings: 216 in 6 kinds

### errors

src/client/cl_main.c:2637:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2389:1: error: expected '}'
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1665:84: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2465:5: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
scons: Building targets ...
Compiling src/client/cl_cgame.c
Compiling src/client/cl_cin.c
Compiling src/client/cl_console.c
Compiling src/client/cl_input.c
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
Compiling src/client/cl_keys.c
2 warnings generated.
Compiling src/client/cl_main.c
Compiling src/client/cl_net_chan.c
Compiling src/client/cl_parse.c
src/client/cl_main.c:2637:52: error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/bg_misc.c.o

```
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
Compiling src/games/game/bg_misc.c (shared)
Compiling src/games/game/bg_pmove.c (shared)
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
Compiling src/games/game/g_alarm.c (shared)
Compiling src/games/game/g_bot.c (shared)
Compiling src/games/game/g_client.c (shared)
Compiling src/games/game/g_cmds.c (shared)
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
Compiling src/games/game/g_combat.c (shared)
1 warning generated.
Compiling src/games/game/g_items.c (shared)
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
Compiling src/games/game/g_main.c (shared)
Compiling src/games/game/g_mem.c (shared)
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2388:48: note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2373:34: note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
Compiling src/games/game/g_misc.c (shared)
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o

```
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
Compiling src/games/botai/ai_dmnet.c (shared)
1 warning generated.
4 warnings generated.
1 warning generated.
Compiling src/games/botai/ai_dmq3.c (shared)
Compiling src/games/botai/ai_main.c (shared)
Compiling src/games/botai/ai_team.c (shared)
Compiling src/qcommon/q_math.c (shared)
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
Compiling src/games/game/bg_pmove.c (shared)
Compiling src/games/game/bg_slidemove.c (shared)
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
src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  450 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  466 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  508 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  518 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  526 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  542 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  525 |         int tagIndex;
      |             ^
8 warnings generated.
Compiling src/games/cgame/cg_ents.c (shared)
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
 2260 | 
      | ^
src/games/cgame/cg_ents.c:2245:126: note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 error generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o

```
src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
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
Compiling src/games/cgame/cg_players.c (shared)
Compiling src/games/cgame/cg_playerstate.c (shared)
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1665:35: note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1646:93: note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o

```
 2013 |         float ramp;
      |               ^
src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 2932 |         weaponInfo_t    *weapon;
      |                          ^
src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
 2935 |         static int oldtime = 0;
      |                    ^
src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/game/bg_misc.c.o

```
2 errors generated.
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
Compiling src/qcommon/q_math.c (shared)
src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
Compiling src/qcommon/q_shared.c (shared)
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
2 warnings generated.
Compiling src/games/game/bg_misc.c (shared)
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
 5082 |         int i, count, clients, maxClients, ping, game, len, visible;
      |                                                  ^
src/games/ui/ui_main.c:5085:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
 5085 |         static int numinvisible;
      |                    ^
src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
 5395 |         static int numFound, numTimeOuts;
      |                              ^
src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1
```


### warning kinds

- [153x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - 1940 |         Q_strncpyz( cg.centerPrint, CG_translateString( (char*)str ), sisrc/games/cgame/cg_drawtools.cze:o387f:(5 :c gwarning: .cassigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]e
  - src/games/cgame/cg_draw.c:1955:20:src/games/cgame/cg_drawtools.c warning: :passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]403
  - :4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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

status: cancelled

errors: 20
warnings: 229 in 6 kinds

### errors

src/client/cl_main.c:2637:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2389:1: error: expected '}'
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o] Error 1
scons: *** [build/linux-x64-release/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1665:84: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2465:5: error: expected '}'
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
scons: Building targets ...
Compiling src/client/cl_cgame.c
Compiling src/client/cl_cin.c
Compiling src/client/cl_console.c
Compiling src/client/cl_input.c
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
2 warnings generated.
1 warning generated.
Compiling src/client/cl_keys.c
Compiling src/client/cl_main.c
Compiling src/client/cl_net_chan.c
Compiling src/client/cl_parse.c
src/client/cl_main.c:2637:52: error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/bg_misc.c.o

```
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
2 warnings generated.
Compiling src/games/game/bg_animation.c
2 warnings generated.
Compiling src/games/game/bg_misc.c
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
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x64-release/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/g_main.c.o

```
      |                              ^
Compiling src/games/game/g_client.c
Compiling src/games/game/g_cmds.c
2 warnings generated.
Compiling src/games/game/g_combat.c
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
Compiling src/games/game/g_items.c
Compiling src/games/game/g_main.c
1 warning generated.
Compiling src/games/game/g_mem.c
1 warning generated.
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2388:48: note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2373:34: note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
Compiling src/games/game/g_misc.c
scons: *** [build/linux-x64-release/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o

```
Compiling src/renderer/tr_noise.c
1 warning generated.
Compiling src/renderer/tr_scene.c
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
Compiling src/renderer/tr_shade.c
3 warnings generated.
Compiling src/renderer/tr_shade_calc.c
Compiling src/renderer/tr_shader.c
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
Compiling src/renderer-bfg/Material_shader.cpp (shared)
Compiling src/renderer-bfg/Shadow.cpp (shared)
Compiling src/renderer-bfg/Backend.cpp (shared)
Compiling src/renderer-bfg/Tess.cpp (shared)
Compiling src/renderer-bfg/Tess_calc.cpp (shared)
Compiling src/renderer-bfg/Lighting.cpp (shared)
Compiling src/renderer-bfg/Surface.cpp (shared)
Compiling src/renderer-bfg/ImageManager.cpp (shared)
Compiling src/renderer-bfg/Image_files.cpp (shared)
Compiling src/renderer-bfg/Image_intrinsic.cpp (shared)
Compiling src/renderer-bfg/Image_process.cpp (shared)
Compiling src/third-party/glad/src/gl.c (shared)
Compiling src/third-party/stb/stb_impl.c (shared)
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
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
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  466 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  508 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  518 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  526 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  542 |         s = string;
      |           ^ ~~~~~~
8 warnings generated.
Compiling src/games/cgame/cg_effects.c (shared)
src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  525 |         int tagIndex;
      |             ^
1 warning generated.
Compiling src/games/cgame/cg_ents.c (shared)
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
 2260 | 
      | ^
src/games/cgame/cg_ents.c:2245:126: note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 error generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o

```
      |                                                     ^
src/games/cgame/cg_local.h:1897:32: note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
13 warnings generated.
Compiling src/games/cgame/cg_particles.c (shared)
src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
3 warnings generated.
Compiling src/games/cgame/cg_players.c (shared)
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1665:35: note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1646:93: note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o

```
src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
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
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
2 warnings generated.
Compiling src/games/ui/ui_shared.c (shared)
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/game/bg_misc.c.o

```
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
Compiling src/qcommon/q_math.c (shared)
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_misc.c (shared)
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
      |                    ^
src/games/ui/ui_main.c:5395:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
 5395 |         static int numFound, numTimeOuts;
      |                              ^
src/games/ui/ui_main.c:5708:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
src/games/ui/ui_main.c:6491:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
11 warnings generated.
6 warnings generated.
Compiling src/games/ui/ui_shared.c (shared)
Compiling src/games/ui/ui_syscalls.c (shared)
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_shared.c.o] Error 1
```


### warning kinds

- [166x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:1698:8: warning: variable 'distance' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
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

status: failure

errors: 21
warnings: 227 in 6 kinds

### errors

src/client/cl_main.c:2637:52: error: expected '}'
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x86-debug/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2389:1: error: expected '}'
scons: *** [build/linux-x86-debug/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x86-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1665:84: error: expected '}'
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2465:5: error: expected '}'
scons: *** [build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-debug/ui/obj/games/game/bg_misc.c.o] Error 1
:2465:5: error: expected '}'
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_main.c.o

```
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
Compiling src/client/cl_keys.c
Compiling src/client/cl_main.c
1 warning generated.
Compiling src/client/cl_net_chan.c
2 warnings generated.
Compiling src/client/cl_parse.c
Compiling src/client/cl_qgl.c
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src/client/cl_main.c:2637:52: error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x86-debug/game/obj/games/game/bg_misc.c.o

```
clCount, activeCount;
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
Compiling src/games/game/bg_misc.c (shared)
6 warnings generated.
Compiling src/games/game/bg_pmove.c (shared)
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
Compiling src/games/game/bg_slidemove.c (shared)
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
scons: *** [build/linux-x86-debug/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-debug/game/obj/games/game/g_main.c.o

```
      |                              ^
2 warnings generated.
Compiling src/games/game/g_bot.c (shared)
Compiling src/games/game/g_client.c (shared)
Compiling src/games/game/g_cmds.c (shared)
Compiling src/games/game/g_combat.c (shared)
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
1 warning generated.
Compiling src/games/game/g_items.c (shared)
Compiling src/games/game/g_main.c (shared)
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
Compiling src/games/game/g_mem.c (shared)
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2388:48: note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2373:34: note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build/linux-x86-debug/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/game/bg_misc.c.o

```
src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
1 warning generated.
1 warning generated.
Compiling src/games/botai/ai_dmq3.c (shared)
4 warnings generated.
Compiling src/games/botai/ai_main.c (shared)
Compiling src/games/botai/ai_team.c (shared)
Compiling src/qcommon/q_math.c (shared)
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
Compiling src/games/game/bg_pmove.c (shared)
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
Compiling src/games/game/bg_slidemove.c (shared)
scons: *** [build/linux-x86-debug/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/cgame/cg_ents.c.o

```
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  466 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  508 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  518 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  526 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  542 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  525 |         int tagIndex;
      |             ^
8 warnings generated.
Compiling src/games/cgame/cg_event.c (shared)
3 warnings generated.
Compiling src/games/cgame/cg_flamethrower.c (shared)
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
 2260 | 
      | ^
src/games/cgame/cg_ents.c:2245:126: note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 error generated.
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/cgame/cg_players.c.o

```
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
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
Compiling src/games/cgame/cg_playerstate.c (shared)
13 warnings generated.
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1665:35: note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1646:93: note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
Compiling src/games/cgame/cg_predict.c (shared)
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o

```
2 warnings generated.
Compiling src/qcommon/q_shared.c (shared)
src/games/cgame/cg_weapons.c:2013:8: warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
 2013 |         float ramp;
      |               ^
src/games/cgame/cg_weapons.c:2932:19: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
 2932 |         weaponInfo_t    *weapon;
      |                          ^
src/games/cgame/cg_weapons.c:2935:13: warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
 2935 |         static int oldtime = 0;
      |                    ^
src/games/cgame/cg_weapons.c:3746:8: warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x86-debug/ui/obj/games/game/bg_misc.c.o

```
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o] Error 1
Compiling src/games/game/bg_misc.c (shared)
src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
Compiling src/games/ui/ui_atoms.c (shared)
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
Compiling src/games/ui/ui_gameinfo.c (shared)
scons: *** [build/linux-x86-debug/ui/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o

```
 1275 |         char        *text_p, *prev;
      |                               ^
src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
 1277 |         int i;
      |             ^
src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
 1278 |         char        *token;
      |                      ^
src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
 1279 |         float fps;
      |               ^
src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
6 warnings generated.
Compiling src/games/ui/ui_util.c (shared)
src/games/ui/ui_shared.cCompiling src/qcommon/q_math.c (shared)
:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o

```
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning generated.
Compiling src/renderer/tr_shade.c (shared)
1 warning generated.
Compiling src/renderer/tr_shade_calc.c (shared)
Compiling src/renderer/tr_shader.c (shared)
Compiling src/renderer/tr_shadows.c (shared)
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning generated.
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
Compiling src/renderer/tr_sky.c (shared)
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
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [164x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:66:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - 600 | void    Q_strncpyz( char *dest, const char *srcsrc/games/cgame/cg_flamethrower.c,:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
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

## ubuntu-latest-x86-release-

status: failure

errors: 20
warnings: 229 in 6 kinds

### errors

src/client/cl_main.c:2637:52: error: expected '}'
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1
src/games/game/bg_misc.c:2516:1: error: unterminated /* comment
src/games/game/bg_misc.c:2518:54: error: expected expression
src/games/game/bg_misc.c:2518:54: error: expected '}'
src/games/game/bg_misc.c:2507:4: error: expected ';' after top level declarator
scons: *** [build/linux-x86-release/game/obj/games/game/bg_misc.c.o] Error 1
src/games/game/g_main.c:2389:1: error: expected '}'
scons: *** [build/linux-x86-release/game/obj/games/game/g_main.c.o] Error 1
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_misc.c.o] Error 1
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
src/games/cgame/cg_players.c:1665:84: error: expected '}'
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
src/games/ui/ui_shared.c:2465:5: error: expected '}'
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/game/bg_misc.c.o] Error 1
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o] Error 1
src/renderer/tr_shader.c:2205:55: error: expected '}'
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o] Error 1

### failure context

- build/linux-x86-release/client/obj/client/cl_main.c.o

```
scons: done reading SConscript files.
scons: Building targets ...
Compiling src/client/cl_cgame.c
Compiling src/client/cl_cin.c
Compiling src/client/cl_console.c
Compiling src/client/cl_input.c
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
Compiling src/client/cl_keys.c
2 warnings generated.
Compiling src/client/cl_main.c
Compiling src/client/cl_net_chan.c
src/client/cl_main.c:2637:52: error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2523:22: note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1
```

- build/linux-x86-release/game/obj/games/game/bg_misc.c.o

```
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
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
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
scons: *** [build/linux-x86-release/game/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-release/game/obj/games/game/g_main.c.o

```
      |                              ^
2 warnings generated.
Compiling src/games/game/g_alarm.c (shared)
Compiling src/games/game/g_bot.c (shared)
Compiling src/games/game/g_client.c (shared)
Compiling src/games/game/g_cmds.c (shared)
Compiling src/games/game/g_combat.c (shared)
src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
1 warning generated.
Compiling src/games/game/g_items.c (shared)
Compiling src/games/game/g_main.c (shared)
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2388:48: note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src/games/game/g_main.c:2389:1: error: expected '}'
 2389 | 
      | ^
src/games/game/g_main.c:2373:34: note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build/linux-x86-release/game/obj/games/game/g_main.c.o] Error 1
```

- build/linux-x86-release/cgame/obj/games/game/bg_misc.c.o

```
Compiling src/games/botai/ai_cmd.c (shared)
4 warnings generated.
Compiling src/games/botai/ai_dmnet.c (shared)
src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
 1272 |         int i, bestitem, redflagtt, blueflagtt, redtobluett;
      |                                                 ^
1 warning generated.
Compiling src/games/botai/ai_dmq3.c (shared)
1 warning generated.
Compiling src/games/botai/ai_main.c (shared)
Compiling src/games/botai/ai_team.c (shared)
Compiling src/qcommon/q_math.c (shared)
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_animation.c (shared)
Compiling src/games/game/bg_misc.c (shared)
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
scons: *** [build/linux-x86-release/cgame/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o

```
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  518 |         s = string;
      |           ^ ~~~~~~
src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  526 |                 s = string;
      |                   ^ ~~~~~~
src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  542 |         s = string;
      |           ^ ~~~~~~
8 warnings generated.
Compiling src/games/cgame/cg_ents.c (shared)
1 warning generated.
Compiling src/games/cgame/cg_event.c (shared)
src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  738 |         int howmany, total;
      |                      ^
src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
 1072 |         int mass;
      |             ^
src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
 1363 |         int type;
      |             ^
src/games/cgame/cg_ents.c:2260:1: error: expected '}'
 2260 | 
      | ^
src/games/cgame/cg_ents.c:2245:126: note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 error generated.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_ents.c.o] Error 1
```

- build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o

```
      |                                      ^   ~~~~
src/games/cgame/cg_newDraw.c:1839:25: warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
src/games/cgame/cg_local.h:1897:32: note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
Compiling src/games/cgame/cg_players.c (shared)
src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1665:35: note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src/games/cgame/cg_players.c:1665:84: error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src/games/cgame/cg_players.c:1646:93: note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build/linux-x86-release/cgame/obj/games/cgame/cg_players.c.o] Error 1
```

- build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o

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
src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
Compiling src/games/ui/ui_shared.c (shared)
2 warnings generated.
Compiling src/qcommon/q_math.c (shared)
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x86-release/ui/obj/games/game/bg_misc.c.o

```
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-release/cgame/obj/games/ui/ui_shared.c.o] Error 1
Compiling src/qcommon/q_shared.c (shared)
Compiling src/games/game/bg_misc.c (shared)
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
scons: *** [build/linux-x86-release/ui/obj/games/game/bg_misc.c.o] Error 1
```

- build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o

```
      |                               ^
src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
 1277 |         int i;
      |             ^
src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
 1278 |         char        *token;
      |                      ^
src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
 1279 |         float fps;
      |               ^
src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
6 warnings generated.
Compiling src/games/ui/ui_shared.c (shared)
11 warnings generated.
Compiling src/games/ui/ui_syscalls.c (shared)
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2456:52: note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src/games/ui/ui_shared.c:2465:5: error: expected '}'
 2465 |                 //
      |                   ^
src/games/ui/ui_shared.c:2450:49: note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build/linux-x86-release/ui/obj/games/ui/ui_shared.c.o] Error 1
```

- build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o

```
Compiling src/renderer/tr_model.c (shared)
1 warning generated.
Compiling src/renderer/tr_noise.c (shared)
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
Compiling src/renderer/tr_scene.c (shared)
Compiling src/renderer/tr_shade.c (shared)
1 warning generated.
Compiling src/renderer/tr_shade_calc.c (shared)
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
Compiling src/renderer/tr_shader.c (shared)
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
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o] Error 1
```


### warning kinds

- [166x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - 6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
  - src/qcommon/files.c:2766:20: warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/net_chan.c:318:6: warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src/qcommon/unzip.c:2139:16: warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:6: warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src/server/sv_game.c:195:13: warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_snapshot.c:303:6: warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1101:26: warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:1638:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:471:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_localents.c:498:7: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:202:15: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_newDraw.c:391:19: warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:271:10: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:936:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_particles.c:938:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
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

## uncrustify

status: success

errors: 7
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/games/cgame/cg_ents.c
UNCRUSTIFY_FAILED: src/games/cgame/cg_players.c
UNCRUSTIFY_FAILED: src/games/ui/ui_shared.c
UNCRUSTIFY_FAILED: src/games/game/bg_misc.c
UNCRUSTIFY_FAILED: src/games/game/g_main.c
UNCRUSTIFY_FAILED: src/renderer/tr_shader.c
UNCRUSTIFY_FAILED: src/client/cl_main.c

### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 20
warnings: 303 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2389,1): error: expected '}'
scons: *** [build\windows-x64-debug\game\obj\games\game\g_main.c.obj] Error 1
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1665,84): error: expected '}'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2465,5): error: expected '}'
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj] Error 1
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1
src\renderer\tr_shader.c(2205,55): error: expected '}'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_main.c.obj

```
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
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
cl_keys.c
cl_main.c
cl_net_chan.c
cl_parse.c
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-debug\game\obj\games\game\bg_misc.c.obj

```
src\games\game\ai_cast_think.c(1247,27): warning: variable 'besttraveltime' set but not used [-Wunused-but-set-variable]
 1247 |         int starttraveltime = 0, besttraveltime, traveltime;         // TTimo: init
      |                                  ^
src\games\game\ai_cast_think.c(1251,16): warning: variable 'simTime' set but not used [-Wunused-but-set-variable]
 1251 |         float maxYaw, simTime;
      |                       ^
bg_misc.c
6 warnings generated.
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp96khwiv8.lnk for command line:
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEBUG /dll /out:bin\renderer_bfg_x64.dll /implib:bin\renderer_bfg_x64.lib build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj build\windows-x64-debug\renderer-bfg\obj\renderer-bfg\Rend
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp96khwiv8.lnk
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
 2516 | /* holdable_medkit (.3 .3 1) (-16 -16 -16) (16 16 16) SUSPENDED SPIN - RESPAWN
      | ^
src\games\game\bg_misc.c(2518,54): error: expected expression
 2518 | pickup sound : "sound/pickup/holdable/get_medkit.wav"
      |                                                      ^
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(464,1): note: to match this '{'
  464 | {
      bg_pmove.c
| ^
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
 2507 |         },
      |           ^
      |           ;
4 errors generated.
bg_slidemove.c
scons: *** [build\windows-x64-debug\game\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-debug\game\obj\games\game\g_main.c.obj

```
g_combat.c
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /I
g_items.c
src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isr
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
g_main.c
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
g_mem.c
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_misc.c.obj /c src\games\game\g_misc.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isr
g_misc.c
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2388,48): note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2373,34): note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj

```
1 warning generated.
ai_main.c
clang-cl /Fobuild\windows-x64-debug\game\obj\games\botai\ai_team.c.obj /c src\games\botai\ai_team.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 
ai_team.c
clang-cl /Fobuild\windows-x64-debug\game\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
q_math.c
clang-cl /Fobuild\windows-x64-debug\game\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\
q_shared.c
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 
bg_animation.c
bg_misc.c
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win3
bg_pmove.c
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
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
scons: *** [build\windows-x64-debug\cgame\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj

```
      |                                                                        ^
src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1431 |         {"", 0,      1,      0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (no flags, idle)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1432 |         {"", 0,      15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1433 |         {"", 490,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1434 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1435 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1436 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1437 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
 2260 | 
      | ^
src\games\cgame\cg_ents.c(2245,126): note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
13 warnings and 1 error generated.
cg_flamethrower.c
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj

```
src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  271 |                         float dot, distSqrd;
      |                               ^
cg_players.c
src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
13 warnings generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
cg_playerstate.c
cg_predict.c
3 warnings generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1665,35): note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1646,93): note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj

```
 2935 |         static int oldtime = 0;
      |                    ^
src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj

```
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
bg_misc.c
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
11 warnings generated.
ui_atoms.c
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj /c src\games\ui\ui_gameinfo.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj /c src\games\ui\ui_main.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
ui_gameinfo.c
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
scons: *** [build\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj

```
 1280 |         int skip;
      |             ^
src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
 5395 |         static int numFound, numTimeOuts;
      |                              ^
src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
6 warnings generated.
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_util.c.obj /c src\games\ui\ui_util.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
ui_util.c
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj

```
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
tr_shader.c
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
tr_shadows.c
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
tr_sky.c
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
src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |             ^
src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |                      ^
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj] Error 1
```


### warning kinds

- [166x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]sv_world.c
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
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - 77 |         {"angleoffset", WEAPON_OFS( angleoffset ), FT_FLOAT | FT_src\games\botlib\be_ai_move.cA(R1553R,AY,8 3},  //offset of the ): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_ents.c(1409,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

## windows-latest-x64-release-

status: cancelled

errors: 18
warnings: 290 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2389,1): error: expected '}'
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1665,84): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2465,5): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
cl_cin.c
cl_input.c
cl_console.c
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
cl_keys.c
cl_main.c
cl_net_chan.c
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\game\obj\games\game\bg_misc.c.obj

```
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
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
bg_animation.c
6 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
bg_misc.c
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
g_cmds.c
src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_combat.c.obj /c src\games\game\g_combat.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
g_combat.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
g_items.c
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
g_main.c
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
g_mem.c
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2388,48): note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2373,34): note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj

```
ai_dmq3.c
ai_main.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_team.c.obj /c src\games\botai\ai_team.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
ai_team.c
clang-cl /Fobuild\windows-x64-release\game\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
q_math.c
clang-cl /Fobuild\windows-x64-release\game\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
bg_animation.c
q_shared.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
bg_misc.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
bg_pmove.c
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
src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1434 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1435 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1436 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1437 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_flamethrower.c.obj /c src\games\cgame\cg_flamethrower.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isr
src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  738 |         int howmany, total;
      |                      ^
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
 2260 | 
      | ^
src\games\cgame\cg_ents.c(2245,126): note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
1 warning generated.
13 warnings and 1 errorsrc\games\cgame\cg_event.c generated(.
1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
 1072 |         int mass;
      |             ^
src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
 1363 |         int type;
      |             ^
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj

```
      |                                      ^   ~~~~
src\games\cgame\cg_newDraw.c(1839,25): warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
 1839 |                                 if ( CG_Text_Width( s, font, useScale, 1 ) + x > max ) {
      |                                                     ^
src\games\cgame\cg_local.h(1897,32): note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  936 |         int color;
      |             ^
src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  938 |         int type;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
cg_players.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\
cg_playerstate.c
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1665,35): note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1646,93): note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj

```
      |                    ^
src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj

```
      |                                                 ^
2 errors generated.
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
q_math.c
2 warnings generated.
q_shared.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
bg_misc.c
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
 1275 |         char        *text_p, *prev;
      |                               ^
src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
 1277 |         int i;
      |             ^
src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
 1278 |         char        *token;
      |                      ^
src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
 1279 |         float fps;
      |               ^
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```


### warning kinds

- [154x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - 1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_ents.c(1409,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
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
  - src\games\cgame\cg_particles.csrc\games\cgame\cg_newDraw.c((1764271,,610))::  warning: warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(1766,6): warning: assigning to 'const unsigned char *' from 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1769,9): warning: returning 'const unsigned char *' from a function with result type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1803,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_newDraw.c(1839,25): warning: passing 'const unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - (308,23): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(381,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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

## windows-latest-x64-release-cgame

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-game,renderer

status: cancelled

errors: 20
warnings: 304 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2389,1): error: expected '}'
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
src\renderer\tr_shader.c(2205,55): error: expected '}'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj] Error 1
scons: *** [build\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1665,84): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2465,5): error: expected '}'
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
cl_input.c
cl_cin.c
cl_cgame.c
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
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isr
2 warnings generated.
cl_keys.c
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\rende
cl_main.c
cl_net_chan.c
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
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
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc
bg_misc.c
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
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_combat.c.obj /c src\games\game\g_combat.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Is
g_combat.c
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc
g_items.c
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\s
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys
g_main.c
g_mem.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_misc.c.obj /c src\games\game\g_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\s
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_missile.c.obj /c src\games\game\g_missile.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /DGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /
g_misc.c
g_missile.c
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2388,48): note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2373,34): note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj

```
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
tr_shade.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
tr_shade_calc.c
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spline
tr_shader.c
1 warning generated.
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning generated.
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
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_files.cpp.obj /c src\renderer-bfg\Image_files.cpp /TP /W4 -m64 /nologo /showFilenames /O2 /std:c++14 /W0 /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\q
Image_files.cpp
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_intrinsic.cpp.obj /c src\renderer-bfg\Image_intrinsic.cpp /TP /W4 -m64 /nologo /showFilenames /O2 /std:c++14 /W0 /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client
Image_intrinsic.cpp
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\renderer-bfg\Image_process.cpp.obj /c src\renderer-bfg\Image_process.cpp /TP /W4 -m64 /nologo /showFilenames /O2 /std:c++14 /W0 /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Is
Image_process.cpp
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\glad\src\gl.c.obj /c src\third-party\glad\src\gl.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sy
gl.c
clang-cl /Fobuild\windows-x64-release\renderer-bfg\obj\third-party\stb\stb_impl.c.obj /c src\third-party\stb\stb_impl.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /W0 /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\
stb_impl.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
bg_animation.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
bg_misc.c
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
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
 1414 |         {"", 66, 1,  0,  1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (starting position)
      |                                                                        ^
src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1431 |         {"", 0,      1,      0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (no flags, idle)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1432 |         {"", 0,      15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1433 |         {"", 490,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag rising)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1434 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1435 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1436 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1437 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
 2260 | 
      | ^
src\games\cgame\cg_ents.c(2245,126): note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
13 warnings and 1 error generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj

```
src\games\cgame\cg_local.h(1897,32): note: passing argument to parameter 'text' here
 1897 | int CG_Text_Width( const char *text, int font, float scale, int limit );
      |                                ^
cg_particles.c
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
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
cg_players.c
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1665,35): note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1646,93): note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
3 warnings generated.
scons: *** [build\windows-x64-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj

```
src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
ui_shared.c
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj

```
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
clang-cl /Fobuild\windows-x64-release\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
q_math.c
q_shared.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
bg_misc.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\g
ui_atoms.c
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
 1275 |         char        *text_p, *prev;
      |                      ^
src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
 1275 |         char        *text_p, *prev;
      |                               ^
src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
 1277 |         int i;
      |             ^
src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
 1278 |         char        *token;
      |                      ^
src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
 1279 |         float fps;
      |               ^
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```


### warning kinds

- [168x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_ents.c(1409,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
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

errors: 9
warnings: 164 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
src\games\ui\ui_shared.c(2465,5): error: expected '}'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
cl_cgame.c
cl_input.c
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  960 |         int resetTime;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
cl_keys.c
cl_main.c
cl_net_chan.c
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\
l_script.c
src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
 1656 |         int lastoperatortype = 0;
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /DBOTLIB /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\
l_struct.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
ui_atoms.c
bg_misc.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj /c src\games\ui\ui_gameinfo.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
1 warning generated.
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
ui_gameinfo.c
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_main.c.obj /c src\games\ui\ui_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
scons: *** [build\windows-x64-release\ui\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj

```
      |                      ^
src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
 1275 |         char        *text_p, *prev;
      |                               ^
src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
 1277 |         int i;
      |             ^
src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
 1278 |         char        *token;
      |                      ^
src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
 1279 |         float fps;
      |               ^
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
ui_syscalls.c
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```


### warning kinds

- [66x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_aas_route.c(2409,40): warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - 2409 |         unsigned short int t, besttraveltisrc\games\botlib\be_aas_reach.cm(e3372,, 21e)n:e mwarning: yvariable 'hordist' set but not used [-Wunused-but-set-variable]t
  - src\games\botlib\be_aas_reach.c(3926,21): warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,7): warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,25): warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(841,103): warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(487,14): warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_routetable.c(490,15): warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - 2782,19):src\games\botlib\be_ai_goal.c (warning: 152variable 'cs' set but not used [-Wunused-but-set-variable],
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
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
- [47x] -missing-field-initializers
  - src\games\botlib\be_ai_goal.c(144,46): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(145,48): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(146,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(147,43): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(148,45): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(149,59): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(150,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - src\games\botlib\be_ai_goal.c(151,55): warning: missing field 'floatmin' initializer [-Wmissing-field-initializers]
  - 14):  2782warning:  | missing field 'floatmin' initializer [-Wmissing-field-initializers]
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
- [10x] -pointer-sign
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
warnings: 147 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_main.c.obj

```
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
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
cl_keys.c
cl_main.c
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
cl_net_chan.c
cl_parse.c
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [52x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,15): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(829,23): warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
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

errors: 20
warnings: 304 in 7 kinds

### errors

src\client\cl_main.c(2637,52): error: expected '}'
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
src\games\game\bg_misc.c(2516,1): error: unterminated /* comment
src\games\game\bg_misc.c(2518,54): error: expected expression
src\games\game\bg_misc.c(2518,54): error: expected '}'
src\games\game\bg_misc.c(2507,4): error: expected ';' after top level declarator
scons: *** [build\windows-x86-release\game\obj\games\game\bg_misc.c.obj] Error 1
src\games\game\g_main.c(2389,1): error: expected '}'
scons: *** [build\windows-x86-release\game\obj\games\game\g_main.c.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
src\games\cgame\cg_players.c(1665,84): error: expected '}'
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
src\games\ui\ui_shared.c(2465,5): error: expected '}'
scons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\game\bg_misc.c.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
src\renderer\tr_shader.c(2205,55): error: expected '}'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_main.c.obj

```
cl_input.c
cl_console.c
cl_cgame.c
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
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_keys.c.obj /c src\client\cl_keys.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_main.c.obj /c src\client\cl_main.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_net_chan.c.obj /c src\client\cl_net_chan.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\u
cl_keys.c
cl_main.c
cl_net_chan.c
src\client\cl_main.c(2637,52): error: expected '}'
 2637 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2523,22): note: to match this '{'
 2523 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
```

- build\windows-x86-release\game\obj\games\game\bg_misc.c.obj

```
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
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
bg_animation.c
6 warnings generated.
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
bg_misc.c
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
scons: *** [build\windows-x86-release\game\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x86-release\game\obj\games\game\g_main.c.obj

```
g_cmds.c
src\games\game\g_cmds.c(2019,6): warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
 2019 |         int spawnIndex;
      |             ^
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_combat.c.obj /c src\games\game\g_combat.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
g_combat.c
1 warning generated.
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_items.c.obj /c src\games\game\g_items.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
src\games\game\g_combat.c(898,6): warning: variable 'save' set but not used [-Wunused-but-set-variable]
  898 |         int save;
      |             ^
g_items.c
1 warning generated.
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_main.c.obj /c src\games\game\g_main.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
g_main.c
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_mem.c.obj /c src\games\game\g_mem.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
g_mem.c
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2388,48): note: to match this '{'
 2388 |         if ( g_gametype.integer == GT_SINGLE_PLAYER ) {
      |                                                       ^
src\games\game\g_main.c(2389,1): error: expected '}'
 2389 | 
      | ^
src\games\game\g_main.c(2373,34): note: to match this '{'
 2373 | void G_RunFrame( int levelTime ) {
      |                                  ^
2 errors generated.
scons: *** [build\windows-x86-release\game\obj\games\game\g_main.c.obj] Error 1
```

- build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj

```
ai_team.c
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmpidi0g6n8.lnk for command line:
lld-link /nologo /DYNAMICBASE /dll /out:bin\renderer_bfg_x86.dll /implib:bin\renderer_bfg_x86.lib build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderWorld.cpp.obj build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderEntity.cpp.obj build\windows-x86-release\renderer-bfg\obj\renderer-bfg\ScreenRect.cpp.obj build\windows-x86-release\renderer-bfg\obj\renderer-bfg\RenderSystem.cpp.o
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmpidi0g6n8.lnk
clang-cl /Fobuild\windows-x86-release\game\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x86-release\game\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
q_math.c
q_shared.c
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
bg_animation.c
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
bg_misc.c
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
bg_pmove.c
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
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
scons: *** [build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj

```
      |                                                                                    ^
src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1434 |         {"", 20,     211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1435 |         {"", 255,    211,    211,    1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american flag raised)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1436 |         {"", 235,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (nazi switching to american)
      |                                                                                    ^
src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
 1437 |         {"", 470,    15,     0,      1000 / 15,    1000 / 15 , 0, 0, 0, 0, 0, 0, 0 }, // (american switching to nazi)
      |                                                                                    ^
src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  738 |         int howmany, total;
      |                      ^
src\games\cgame\cg_ents.c(2260,1): error: expected '}'
 2260 | 
      | ^
src\games\cgame\cg_ents.c(2245,126): note: to match this '{'
 2245 | void CG_AdjustPositionForMover( const vec3_t in, int moverNum, int fromTime, int toTime, vec3_t out, vec3_t outDeltaAngles ) {
      |                                                                                                                              ^
13 warnings and 1 error generated.
src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
 1072 |         int mass;
      |             ^
src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
 1363 |         int type;
      |             ^
cg_flamethrower.c
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj] Error 1
```

- build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj

```
src\games\cgame\cg_local.h(1897,32): note: passing argument to parameter 'text' here
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
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
cg_players.c
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\
cg_playerstate.c
13 warnings generated.
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1665,35): note: to match this '{'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                          ^
src\games\cgame\cg_players.c(1665,84): error: expected '}'
 1665 |         if ( cg_debugAnim.integer == 1 ) {              // DHM - Nerve :: extra debug info
      |                                                                                           ^
src\games\cgame\cg_players.c(1646,93): note: to match this '{'
 1646 | static void CG_SetLerpFrameAnimation( clientInfo_t *ci, lerpFrame_t *lf, int newAnimation ) {
      |                                                                                             ^
2 errors generated.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj] Error 1
```

- build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj

```
src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
 3746 |         float shake = 0;
      |               ^
src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
 4167 |         int lastweap;
      |             ^
src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
 5118 |         int markDuration;
      |             ^
src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
 6041 |         int anim;
      |             ^
src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
 6088 |         centity_t *cent;
      |                    ^
q_math.c
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
2 warnings generated.
scons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x86-release\ui\obj\games\game\bg_misc.c.obj

```
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
2 warnings generated.
scons: *** [build\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DCGAMEDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
clang-cl /Fobuild\windows-x86-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
q_shared.c
bg_misc.c
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
scons: *** [build\windows-x86-release\ui\obj\games\game\bg_misc.c.obj] Error 1
```

- build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj

```
 5082 |         int i, count, clients, maxClients, ping, game, len, visible;
      |                                                  ^
src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
 5085 |         static int numinvisible;
      |                    ^
src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
 5395 |         static int numFound, numTimeOuts;
      |                              ^
src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
 5708 |         static int lastServerTime = 0, lastSaveTime = 0;
      |                                        ^
src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
 6491 |         int start;
      |             ^
src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
   70 | static const int numNetSources = sizeof( netSources ) / sizeof( const char* );
      |                  ^~~~~~~~~~~~~
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2456,52): note: to match this '{'
 2456 |         if ( si->item->window.flags & WINDOW_HORIZONTAL ) {
      |                                                           ^
src\games\ui\ui_shared.c(2465,5): error: expected '}'
 2465 |                 //
      |                   ^
src\games\ui\ui_shared.c(2450,49): note: to match this '{'
 2450 | static void Scroll_ListBox_ThumbFunc( void *p ) {
      |                                                 ^
2 errors generated.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_shared.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj

```
1 warning generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_scene.c
3 warnings generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
tr_shade.c
tr_shade_calc.c
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
tr_shader.c
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
1 warning generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj] Error 1
```


### warning kinds

- [168x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_ents.c(1409,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,65): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,77): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
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
  - 18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - 414src\sys\win32\win_input.c | (249,#21)d: warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.ce(258,t22V): warning: unused variable 'g_pdi' [-Wunused-variable]e
  - esrc\sys\win32\win_input.cr(s259i,o28n): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

