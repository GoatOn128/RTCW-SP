# Build digest

commit: 7a074c08e626

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: cancelled
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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release-game,renderer

status: failure

errors: 11
warnings: 123 in 4 kinds

### errors

src/renderer/tr_cmesh.c:417:81: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_cmesh.c:439:77: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o] Error 1
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o] Error 1
src/renderer/tr_model.c:150:7: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_model.c:154:8: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_model.c.o] Error 1
src/games/ui/ui_main.c:2413:41: error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Error 1

### failure context

- build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o

```
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_chat.c.o' from cache
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_cmd.c.o' from cache
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_dmnet.c.o' from cache
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_dmq3.c.o' from cache
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_main.c.o' from cache
Retrieved `build/linux-x64-release/game/obj/games/botai/ai_team.c.o' from cache
Compiling src/renderer/tr_animation.c
Compiling src/renderer/tr_backend.c
Compiling src/renderer/tr_bsp.c
src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling src/renderer/tr_cmds.c
Compiling src/renderer/tr_cmesh.c
2 warnings generated.
Compiling src/renderer/tr_curve.c
src/renderer/tr_cmesh.c:417:81: error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_cmesh.c:439:77: error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
Compiling src/renderer/tr_flares.c
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_cmesh.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o

```
Compiling src/renderer/tr_image.c
1 warning generated.
Compiling src/renderer/tr_init.c
1 warning generated.
Compiling src/renderer/tr_light.c
src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1823 |         float g;
      |               ^
src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
Compiling src/renderer/tr_main.c
Compiling src/renderer/tr_marks.c
Compiling src/renderer/tr_mesh.c
src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_model.c.o

```
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
Compiling src/renderer/tr_main.c
Compiling src/renderer/tr_marks.c
Compiling src/renderer/tr_mesh.c
src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_mesh.c.o] Error 1
Compiling src/renderer/tr_model.c
src/renderer/tr_model.c:150:7: error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src/renderer/tr_model.c:154:8: error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_model.c.o] Error 1
```

- build/linux-x64-release/ui/obj/games/ui/ui_main.c.o

```
      |                                      ^   ~~~~
src/games/ui/ui_main.c:462:24: warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  462 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src/games/ui/ui_main.c:2413:41: error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src/games/ui/ui_main.c:5082:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
Compiling src/games/ui/ui_players.c (shared)
10 warnings and 1 error generated.
scons: *** [build/linux-x64-release/ui/obj/games/ui/ui_main.c.o] Error 1
```


### warning kinds

- [92x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2812:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2916:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3615:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3616:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1345:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-function
  - src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]

## ubuntu-latest-x86-debug-

status: failure

errors: 11
warnings: 122 in 4 kinds

### errors

src/games/ui/ui_main.c:2413:41: error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o] Error 1
src/renderer/tr_cmesh.c:417:81: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_cmesh.c:439:77: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o] Error 1
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_mesh.c.o] Error 1
src/renderer/tr_model.c:150:7: error: no member named 'ATI_tess' in 'struct model_s'
src/renderer/tr_model.c:154:8: error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_model.c.o] Error 1

### failure context

- build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o

```
      |             ^
11 warnings generated.
6 warnings generated.
Compiling src/games/ui/ui_shared.c (shared)
Compiling src/games/ui/ui_syscalls.c (shared)
src/games/ui/ui_main.c:2413:41: error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src/games/ui/ui_main.c:2465:14: warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src/games/ui/ui_main.c:2465:17: warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src/games/ui/ui_main.c:5082:43: warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build/linux-x86-debug/ui/obj/games/ui/ui_main.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o

```
src/games/ui/ui_shared.c:4167:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
 4167 |         menuDef_t *parent;
      |                    ^
src/games/ui/ui_shared.c:4814:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
 4814 |         modelDef_t *modelPtr;
      |                     ^
Compiling src/renderer/tr_bsp.c (shared)
src/renderer/tr_animation.c:1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling src/renderer/tr_cmds.c (shared)
2 warnings generated.
Compiling src/renderer/tr_cmesh.c (shared)
src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
3 warnings generated.
Compiling src/renderer/tr_curve.c (shared)
1 warning generated.
Compiling src/renderer/tr_flares.c (shared)
src/renderer/tr_cmesh.c:417:81: error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_cmesh.c:439:77: error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_cmesh.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_mesh.c.o

```
1 warning generated.
Compiling src/renderer/tr_main.c (shared)
src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1823 |         float g;
      |               ^
src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
Compiling src/renderer/tr_marks.c (shared)
3 warnings generated.
Compiling src/renderer/tr_mesh.c (shared)
Compiling src/renderer/tr_model.c (shared)
src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
1 warning generated.
Compiling src/renderer/tr_noise.c (shared)
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_mesh.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_model.c.o

```
Compiling src/renderer/tr_model.c (shared)
src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
1 warning generated.
Compiling src/renderer/tr_noise.c (shared)
src/renderer/tr_mesh.c:423:81: error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src/renderer/tr_mesh.c:443:77: error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_mesh.c.o] Error 1
Compiling src/renderer/tr_scene.c (shared)
src/renderer/tr_model.c:150:7: error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src/renderer/tr_model.c:154:8: error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod-1 warning generated.
>ATI_tess = qtrue;
      |                 ~~~  ^
Compiling src/renderer/tr_shade.c (shared)
src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_model.c.o] Error 1
```


### warning kinds

- [91x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2812:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2916:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3615:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3616:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_main.c:1179:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1889:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1345:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
- [29x] -pointer-sign
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:508:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:518:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:526:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:542:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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
- [1x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-function
  - src/sys/unix/linux_glimp.c:148:20: warning: unused function 'Q_stristr' [-Wunused-function]

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

status: failure

errors: 13
warnings: 360 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj

```
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
1 warning generated.
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj

```
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
10 warnings and 1 error generated.
src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
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
scons: *** [build\windows-x64-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj

```
tr_backend.c
tr_bsp.c
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
tr_cmds.c
2 warnings generated.
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
tr_cmesh.c
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
1 warning generated.
tr_curve.c
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_flares.c.obj /c src\renderer\tr_flares.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj /c src\renderer\tr_font.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
tr_flares.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
tr_font.c
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj

```
      |               ^
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
3 warnings generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
tr_marks.c
tr_mesh.c
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
tr_model.c
tr_noise.c
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj

```
      |                          ^
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
1 warning generated.
tr_shader.c
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning generated.
tr_shadows.c
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
tr_sky.c
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |             ^
src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |                      ^
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
2 warnings generated.
1 warning and 2 errors generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m64 /nologo /showFilenames /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [226x] -missing-field-initializers
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
  - 3478,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
- [93x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-variable
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-

status: failure

errors: 13
warnings: 360 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_input.c.obj

```
win_main.c
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj

```
  381 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  462 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj

```
Retrieved `build\windows-x64-release\ui\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj' from cache
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj /c src\renderer\tr_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_animation.c
tr_backend.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
tr_bsp.c
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
tr_cmds.c
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_cmesh.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj

```
      |               ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_light.c.obj /c src\renderer\tr_light.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_light.c
tr_main.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_marks.c
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_mesh.c
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
1 warning generated.
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
tr_scene.c
3 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_shade.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
tr_shade_calc.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
tr_shader.c
src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1345 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_shadows.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
tr_sky.c
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [226x] -missing-field-initializers
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
- [94x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\qcommon\unzip.c(2139,16): warning: variable 'bufBefore' set but not used [-Wunused-but-set-variable]
  - src\qcommon\net_chan.c(318,6): warning: variable 'qport' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,6): warning: variable 'area1' set but not used [-Wunused-but-set-variable]
  - src\server\sv_game.c(195,13): warning: variable 'area2' set but not used [-Wunused-but-set-variable]
  - src\server\sv_snapshot.c(303,6): warning: variable 'c_fullsend' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(406,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(527,6): warning: variable 'err' set but not used [-Wunused-but-set-variable]
  - src\sys\win32\win_net.c(703,6): warning: variable 'error' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-variable
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]

## windows-latest-x64-release-cgame

status: failure

errors: 13
warnings: 360 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_input.c.obj

```
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc
win_main.c
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj

```
 1279 |         float fps;
      |               ^
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj

```
Retrieved `build\windows-x64-release\ui\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x64-release\ui\obj\qcommon\q_shared.c.obj' from cache
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj /c src\renderer\tr_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
tr_animation.c
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_backend.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
tr_bsp.c
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
109 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_cmds.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_cmesh.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj

```
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_light.c.obj /c src\renderer\tr_light.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_light.c
tr_main.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_marks.c
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
tr_mesh.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_model.c
1 warning generated.
3 warnings generated.
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
tr_shade_calc.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
tr_shader.c
1 warning generated.
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_shadows.c
1 warning generated.
src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |             ^
src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |                      ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
2 warnings generated.
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
tr_sky.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [226x] -missing-field-initializers
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
- [94x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-variable
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]

## windows-latest-x64-release-game,renderer

status: failure

errors: 13
warnings: 360 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_input.c.obj

```
win_main.c
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj

```
Retrieved `build\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj' from cache
Retrieved `build\windows-x64-release\game\obj\games\botai\ai_main.c.obj' from cache
Retrieved `build\windows-x64-release\game\obj\games\botai\ai_team.c.obj' from cache
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj /c src\renderer\tr_animation.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\
tr_animation.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spli
tr_backend.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isr
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
tr_bsp.c
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
2 warnings generated.
tr_cmds.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
tr_cmesh.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj

```
tr_light.c
src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1823 |         float g;
      |               ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
tr_main.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
tr_marks.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
tr_mesh.c
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
1 warning generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
3 warnings generated.
tr_scene.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
tr_shade.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
tr_shade_calc.c
src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1345 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spline
tr_shader.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spli
1 warning generated.
tr_shadows.c
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isr
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj

```
  381 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  462 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
```


### warning kinds

- [226x] -missing-field-initializers
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
- [94x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_drawtools.c(387,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(403,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(450,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(466,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(508,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(518,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(526,5): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_drawtools.c(542,4): warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1940,14): warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1955,20): warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\games\cgame\cg_draw.c(1986,8): warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-variable
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]

## windows-latest-x64-release-ui

status: failure

errors: 13
warnings: 359 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_input.c.obj

```
win_input.c
win_main.c
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj

```
      |                                      ^   ~~~~
src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  462 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
scons: *** [build\windows-x64-release\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj

```
      |                    ^
src\games\ui\ui_shared.c(4167,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
 4167 |         menuDef_t *parent;
      |                    ^
src\games\ui\ui_shared.c(4814,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
 4814 |         modelDef_t *modelPtr;
      |                     ^
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_bsp.c
tr_cmds.c
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_cmesh.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj

```
1 warning generated.
src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1823 |         float g;
      |               ^
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_main.c
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
tr_marks.c
tr_mesh.c
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
1 warning generated.
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_scene.c
tr_shade.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
tr_shade_calc.c
src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1345 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
tr_shader.c
1 warning generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
1 warning generated.
tr_shadows.c
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m64 /nologo /showFilenames /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
tr_sky.c
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [225x] -missing-field-initializers
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
  - src\games\ui\ui_shared.c(3535,49):src\games\cgame\cg_weapons.c (5118,warning: 6missing field 'bind2' initializer [-Wmissing-field-initializers])
- [94x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3706,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4167,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4814,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_weapons.csrc\games\ui\ui_shared.c((34414167,,466))::  warning: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - : warning:  variable 'markDuration' set but not used [-Wunused-but-set-variable]3535
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-variable
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]

## windows-latest-x86-debug-

status: failure

errors: 13
warnings: 360 in 6 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj

```
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
1 warning generated.
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj

```
  381 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(462,24): warning: initializing 'const unsigned char *' with an expression of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  462 |                 const unsigned char *s = text;
      |                                      ^   ~~~~
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build\windows-x86-debug\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj

```
src\renderer\tr_animation.c(1249,11): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
2 warnings generated.
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
tr_backend.c
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
tr_bsp.c
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
tr_cmds.c
tr_cmesh.c
tr_curve.c
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_flares.c.obj /c src\renderer\tr_flares.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
tr_flares.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj

```
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      | clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
                          ^
tr_main.c
3 warnings generated.
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
tr_marks.c
tr_mesh.c
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj /c src\renderer\tr_model.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
tr_model.c
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
1 warning generated.
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj /c src\renderer\tr_noise.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj

```
tr_shader.c
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
tr_shadows.c
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj /c src\renderer\tr_sky.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
src\renderer\tr_shadows.c(103,6): warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |             ^
src\renderer\tr_shadows.c(103,15): warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  103 |         int c_edges, c_rejected;
      |                      ^
2 warnings generated.
tr_sky.c
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj /c src\renderer\tr_surface.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win
clang-cl /Fobuild\windows-x86-debug\renderer\obj\renderer\tr_world.c.obj /c src\renderer\tr_world.c /nologo /W4 -m32 /nologo /showFilenames /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
tr_surface.c
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
tr_world.c
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [226x] -missing-field-initializers
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
- [93x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [2x] -unused-variable
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x86-release-

status: failure

errors: 13
warnings: 360 in 7 kinds

### errors

src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_input.c.obj] Error 1
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj] Error 1
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\sys\win32\win_input.c.obj

```
win_input.c
win_main.c
src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  138 |         GetVersionEx( &vinfo );
      |         ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
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
src\sys\win32\win_input.c(484,53): error: use of undeclared identifier '_3DFX_DRIVER_NAME'
  484 |                          && strcmp( Cvar_VariableString( "r_glDriver" ), _3DFX_DRIVER_NAME ) ) {
      |                                                                          ^~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_input.c.obj] Error 1
```

- build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj

```
 1279 |         float fps;
      |               ^
src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
 1280 |         int skip;
      |             ^
src\games\ui\ui_main.c(2413,41): error: no member named 'extensions_string' in 'glconfig_t'
 2413 |         Q_strncpyz( buff, uiInfo.uiDC.glconfig.extensions_string, 4096 );
      |                           ~~~~~~~~~~~~~~~~~~~~ ^
src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                     ^
src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
 2465 |         float x, y, w, h;
      |                        ^
src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
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
10 warnings and 1 error generated.
scons: *** [build\windows-x86-release\ui\obj\games\ui\ui_main.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj

```
 1249 |         pIndexes = &tess.indexes[baseIndex];
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_animation.c(1376,13): warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
 1376 |                         pIndexes = &tess.indexes[oldIndexes];
      |                                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_backend.c.obj /c src\renderer\tr_backend.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_backend.c
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_bsp.c.obj /c src\renderer\tr_bsp.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
tr_bsp.c
109 warnings generated.
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp2dv9lba3.lnk for command line:
lld-link /nologo /DYNAMICBASE /DEF:src/games/cgame/cgame.def /dll /out:bin\main\cgame_x86.dll /implib:bin\main\cgame_x86.lib build\windows-x86-release\cgame\obj\games\game\bg_animation.c.obj build\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj build\windows-x86-release\cgame\obj\games\game\bg_pmove.c.obj build\windows-x86-release\cgame\obj\games\game\bg_slidemove.c.obj build\windows-x86-re
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp2dv9lba3.lnk
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_cmds.c.obj /c src\renderer\tr_cmds.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  147 |         double sumIntensity = 0;
      |                ^
tr_cmds.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj /c src\renderer\tr_cmesh.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_cmesh.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_curve.c.obj /c src\renderer\tr_curve.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_curve.c
src\renderer\tr_cmesh.c(417,81): error: no member named 'ATI_tess' in 'struct model_s'
  417 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_cmesh.c(439,77): error: no member named 'ATI_tess' in 'struct model_s'
  439 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_cmesh.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj

```
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_light.c.obj /c src\renderer\tr_light.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_light.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_main.c.obj /c src\renderer\tr_main.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
 1823 |         float g;
      |               ^
src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
 3065 |         char *name;
      |               ^
src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
 3223 |         image_t *bImage, *bImagePrev;
      |                           ^
tr_main.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_marks.c.obj /c src\renderer\tr_marks.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_marks.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj /c src\renderer\tr_mesh.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
src\renderer\tr_main.c(1179,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
 1179 |         unsigned int pointOr = 0;
      |                      ^
tr_mesh.c
src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  500 |         float texCoordScale;
      |               ^
src\renderer\tr_mesh.c(423,81): error: no member named 'ATI_tess' in 'struct model_s'
  423 |                         R_AddDrawSurf( (void *)surface, tr.shadowShader, 0, qfalse, tr.currentModel->ATI_tess );
      |                                                                                     ~~~~~~~~~~~~~~~  ^
src\renderer\tr_mesh.c(443,77): error: no member named 'ATI_tess' in 'struct model_s'
  443 |                         R_AddDrawSurf( (void *)surface, shader, fogNum, qfalse, tr.currentModel->ATI_tess );
      |                                                                                 ~~~~~~~~~~~~~~~  ^
2 errors generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj

```
1 warning generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj /c src\renderer\tr_scene.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_scene.c
3 warnings generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
tr_shade.c
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
tr_shade_calc.c
src\renderer\tr_shade.c(1345,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1345 |         shader_t        *shader;
      |                          ^
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\
tr_shader.c
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 /nologo /showFilenames /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
tr_shadows.c
src\renderer\tr_model.c(150,7): error: no member named 'ATI_tess' in 'struct model_s'
  150 |         mod->ATI_tess = qfalse;
      |         ~~~  ^
src\renderer\tr_model.c(154,8): error: no member named 'ATI_tess' in 'struct model_s'
  154 |                 mod->ATI_tess = qtrue;
      |                 ~~~  ^
src\renderer\tr_model.c(1889,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1889 |         static int lastPurged = 0;
      |                    ^
1 warning and 2 errors generated.
1 warning generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```


### warning kinds

- [225x] -missing-field-initializers
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
  - src\games\ui\ui_shared.c(3516,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
- [94x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2812,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2916,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3615,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3616,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
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
  - 3468 |         {"weaposrc\games\cgame\cg_weapons.cn( 51187,"6,) :   warning:  variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - warning:       variable 'anim' set but not used [-Wunused-but-set-variable]|
  - 3526 |         {"messagsrc\games\cgame\cg_weapons.ce(m6088o,d13e)":,   warning: -variable 'cent' set but not used [-Wunused-but-set-variable]1
  - src\games\ui\ui_shared.c(3706,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4167,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4814,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
- [3x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(138,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_glimp.c(870,7): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -unused-variable
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [1x] 6041 |         isrc\games\ui\ui_shared.cn(t3516 ,a49n)i:m ;warning:
  - 6041 |         isrc\games\ui\ui_shared.cn(t3516 ,a49n)i:m ;warning:

