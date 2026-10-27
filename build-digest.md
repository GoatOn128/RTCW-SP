# Build digest

commit: f252053b8d4c

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: cancelled
- ubuntu-latest-x64-release-game,renderer: cancelled
- ubuntu-latest-x86-debug-: cancelled
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: cancelled
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game,renderer: cancelled
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: cancelled
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release-

status: cancelled

errors: 2
warnings: 239 in 6 kinds

### errors

src/client/cl_main.c:2630:52: error: expected '}'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_main.c.o

```
scons: Building targets ...
Compiling 'src/client/cl_cgame.c'
Compiling 'src/client/cl_cin.c'
Compiling 'src/client/cl_console.c'
Compiling 'src/client/cl_input.c'
src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
1 warning generated.
Compiling 'src/client/cl_keys.c'
2 warnings generated.
Compiling 'src/client/cl_main.c'
Compiling 'src/client/cl_net_chan.c'
src/client/cl_main.c:2630:52: error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2516:22: note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
Compiling 'src/client/cl_parse.c'
scons: *** [build/linux-x64-release/client/obj/client/cl_main.c.o] Error 1
```


### warning kinds

- [176x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_players.c:1772:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2436:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2594:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4551:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:3706:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4167:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4814:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5029:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5032:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5342:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5655:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6438:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1881:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1345:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: cancelled

errors: 2
warnings: 237 in 6 kinds

### errors

src/client/cl_main.c:2630:52: error: expected '}'
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_main.c.o

```
  442 |         int movespeed;
      |             ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
Compiling 'src/client/cl_keys.c'
Compiling 'src/client/cl_main.c'
1 warning generated.
2 warnings generated.
Compiling 'src/client/cl_net_chan.c'
Compiling 'src/client/cl_parse.c'
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src/client/cl_main.c:2630:52: error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2516:22: note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
1 warning generated.
Compiling 'src/client/cl_qgl.c'
scons: *** [build/linux-x86-debug/client/obj/client/cl_main.c.o] Error 1
```


### warning kinds

- [174x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_script_actions.c:764:29: warning: variable 'setAngles' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3331:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:3700:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4355:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4361:6: warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4663:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_script_actions.c:2698:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_players.c:1772:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2436:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2594:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4551:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:3706:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4167:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4814:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:15: warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1275:24: warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1277:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1278:15: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1279:8: warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_players.c:1280:6: warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5029:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5032:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5342:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5655:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6438:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1881:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1345:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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

## ubuntu-latest-x86-release-

status: cancelled

errors: 2
warnings: 239 in 6 kinds

### errors

src/client/cl_main.c:2630:52: error: expected '}'
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1

### failure context

- build/linux-x86-release/client/obj/client/cl_main.c.o

```
Compiling 'src/client/cl_cgame.c'
Compiling 'src/client/cl_cin.c'
Compiling 'src/client/cl_console.c'
Compiling 'src/client/cl_input.c'
src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
Compiling 'src/client/cl_keys.c'
Compiling 'src/client/cl_main.c'
2 warnings generated.
Compiling 'src/client/cl_net_chan.c'
src/client/cl_main.c:2630:52: error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src/client/cl_main.c:2516:22: note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 warning generated.
1 error generated.
Compiling 'src/client/cl_parse.c'
scons: *** [build/linux-x86-release/client/obj/client/cl_main.c.o] Error 1
```


### warning kinds

- [176x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:953:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_players.c:1772:26: warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2436:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:2594:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_players.c:4551:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:3706:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4167:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4814:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:2412:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5029:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5032:13: warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5342:23: warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:5655:33: warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_main.c:6438:6: warning: variable 'start' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1881:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1345:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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

errors: 1
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/client/cl_main.c

### failure context


### warning kinds

## windows-latest-x64-debug-

status: cancelled

errors: 2
warnings: 265 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_main.c.obj

```
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
2 warnings generated.
1 warning generated.
Compiling 'src\client\cl_keys.c'
1 warning generated.
Compiling 'src\client\cl_main.c'
Compiling 'src\client\cl_net_chan.c'
Compiling 'src\client\cl_parse.c'
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [131x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_aas_reach.c(972,42): warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_reach.c(972,61): warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_aas_route.c(415,6): warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(1772,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2436,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2594,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4551,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
- [63x] -missing-field-initializers
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
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1409,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2912,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
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
- [7x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(615,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-

status: cancelled

errors: 2
warnings: 194 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src\client\cl_cgame.c'
Compiling 'src\client\cl_cin.c'
Compiling 'src\client\cl_console.c'
Compiling 'src\client\cl_input.c'
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
1 warning generated.
Compiling 'src\client\cl_keys.c'
Compiling 'src\client\cl_main.c'
2 warnings generated.
Compiling 'src\client\cl_net_chan.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [99x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
- [48x] -missing-field-initializers
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
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
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
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-cgame

status: cancelled

errors: 2
warnings: 346 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
scons: Building targets ...
Compiling 'src\client\cl_cgame.c'
Compiling 'src\client\cl_cin.c'
Compiling 'src\client\cl_console.c'
Compiling 'src\client\cl_input.c'
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
Compiling 'src\client\cl_keys.c'
2 warnings generated.
Compiling 'src\client\cl_main.c'
Compiling 'src\client\cl_net_chan.c'
Compiling 'src\client\cl_parse.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [168x] -missing-field-initializers
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
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1409,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2912,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3436,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3437,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3438,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3439,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3440,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3441,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
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
  - src\games\ui\ui_shared.c(3494,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3536,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3539,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
- [108x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1772,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2436,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2594,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4551,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3706,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4167,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4814,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-game,renderer

status: cancelled

errors: 2
warnings: 224 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src\client\cl_cgame.c'
Compiling 'src\client\cl_cin.c'
Compiling 'src\client\cl_console.c'
Compiling 'src\client\cl_input.c'
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
Compiling 'src\client\cl_keys.c'
Compiling 'src\client\cl_main.c'
2 warnings generated.
Compiling 'src\client\cl_net_chan.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [127x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\ai_cast_func_boss1.c(66,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1881,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
- [48x] -missing-field-initializers
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
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
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
- [9x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-ui

status: failure

errors: 2
warnings: 530 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_main.c.obj

```
scons: Building targets ...
Compiling 'src\client\cl_cgame.c'
Compiling 'src\client\cl_cin.c'
Compiling 'src\client\cl_console.c'
Compiling 'src\client\cl_input.c'
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
1 warning generated.
2 warnings generated.
Compiling 'src\client\cl_keys.c'
Compiling 'src\client\cl_main.c'
Compiling 'src\client\cl_net_chan.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
Compiling 'src\client\cl_parse.c'
scons: *** [build\windows-x64-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [276x] -missing-field-initializers
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
  - src\games\game\bg_misc.c(3458,7): warning: missing field 'pickup_sound' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3436,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3437,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3438,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3439,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3440,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3441,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3442,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3443,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3444,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3445,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3446,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3447,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3448,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3449,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3450,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3451,50): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3452,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3453,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3455,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3456,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3457,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3458,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3459,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3460,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3461,46): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3462,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3463,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3464,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3465,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3466,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3467,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3468,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3469,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3470,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3471,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3472,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3473,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3474,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3475,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3476,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
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
  - src\games\ui\ui_shared.c(3494,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3495,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3496,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3497,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3498,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3499,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3500,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3501,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3502,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3503,42): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3504,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3505,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3506,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3507,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3508,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3509,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3510,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3511,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3512,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3513,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3514,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3515,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3516,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3517,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3518,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3519,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3520,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3521,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3522,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3523,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3524,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3525,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3526,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3527,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3528,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3529,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3531,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3532,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3534,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3535,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3536,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3537,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3538,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3539,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3540,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3542,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3543,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3544,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1409,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1410,63): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1411,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1412,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1413,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1414,64): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1431,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1432,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1433,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1434,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1435,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1436,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_ents.c(1437,76): warning: missing field 'stepGap' initializer [-Wmissing-field-initializers]
  - src\games\cgame\cg_players.c(2912,11): warning: missing field 'maxdist' initializer [-Wmissing-field-initializers]
- [178x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(1553,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2412,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2412,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5029,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5032,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5342,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5655,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6438,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3706,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4167,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4814,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\ai_cast_think.c(172,13): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_sight.c(569,17): warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_players.c(1772,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2436,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2594,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4551,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1881,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
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
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]

## windows-latest-x86-debug-

status: cancelled

errors: 2
warnings: 147 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_main.c.obj

```
Compiling 'src\client\cl_input.c'
src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  442 |         int movespeed;
      |             ^
src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  681 |         usercmd_t   *cmd;
      |                      ^
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
      |             ^
src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
 1796 |         qboolean holdatend;
      |                  ^
2 warnings generated.
1 warning generated.
Compiling 'src\client\cl_keys.c'
1 warning generated.
Compiling 'src\client\cl_main.c'
Compiling 'src\client\cl_net_chan.c'
Compiling 'src\client\cl_parse.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
scons: *** [build\windows-x86-debug\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [52x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
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
  - src\games\botlib\be_ai_chat.c(2782,19): warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_gen.c(59,13): warning: variable 'select' set but not used [-Wunused-but-set-variable]
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
  - src\sys\win32\win_main.c(615,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
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
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x86-release-

status: cancelled

errors: 2
warnings: 147 in 7 kinds

### errors

src\client\cl_main.c(2630,52): error: expected '}'
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_main.c.obj

```
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src\client\cl_cgame.c'
Compiling 'src\client\cl_cin.c'
Compiling 'src\client\cl_console.c'
Compiling 'src\client\cl_input.c'
src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  953 |         int resetTime;
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
Compiling 'src\client\cl_keys.c'
Compiling 'src\client\cl_main.c'
2 warnings generated.
Compiling 'src\client\cl_net_chan.c'
src\client\cl_main.c(2630,52): error: expected '}'
 2630 |         Cmd_AddCommand( "vid_restart", CL_Vid_Restart_f );
      |                                                           ^
src\client\cl_main.c(2516,22): note: to match this '{'
 2516 | void CL_Init( void ) {
      |                      ^
1 error generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_main.c.obj] Error 1
```


### warning kinds

- [53x] -unused-but-set-variable
  - src\client\cl_cgame.c(953,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
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
  - src\sys\win32\win_main.c(714,22): warning: unused variable 'stream' [-Wunused-variable]
  - src\games\botlib\be_ai_goal.c(198,12): warning: unused variable 'g_gameskill' [-Wunused-variable]
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1176,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

