# Build digest

commit: a495be10f6f8

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game,renderer: cancelled
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game,renderer: cancelled
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: cancelled

errors: 61
warnings: 270 in 7 kinds

### errors

src/client/cl_qgl.c:166:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:166:36: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/client/cl_qgl.c:167:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:167:34: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/client/cl_qgl.c:168:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:168:40: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/client/cl_qgl.c:169:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:169:31: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/client/cl_qgl.c:170:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:170:33: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/client/cl_qgl.c:171:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:171:33: error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src/client/cl_qgl.c:172:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:172:33: error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-debug/client/obj/client/cl_qgl.c.o] Error 1
src/sys/unix/linux_qgl.c:70:1: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:70:38: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:36: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:50: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:71:68: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:71:90: error: unknown type name 'Bool'
src/sys/unix/linux_qgl.c:71:12: error: function cannot return function type 'int (int *, int *, int, int)'
src/sys/unix/linux_qgl.c:72:31: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:72:45: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:73:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_qgl.c:73:64: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:6: error: function cannot return function type 'int (int *, int, int)'
src/sys/unix/linux_qgl.c:74:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:74:42: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:74:58: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:75:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:75:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_glimp.c:1047:11: error: incompatible integer to pointer conversion assigning to 'XVisualInfo *' from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1097:6: error: incompatible integer to pointer conversion assigning to 'GLXContext' (aka 'struct __GLXcontextRec *') from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
src/sys/unix/linux_glimp.c:1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1178:4: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1179:4: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1181:9: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1182:21: error: use of undeclared identifier 'GL_MAX_ACTIVE_TEXTURES_ARB'
src/sys/unix/linux_glimp.c:1188:6: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1189:6: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1190:6: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1207:4: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1208:4: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_qgl.c.o

```
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  795 |                                         int talkcnt, talktime;
      |                                             ^
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning generated.
scons: *** [build/linux-x64-debug/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o

```
 1097 |         ctx = qglXCreateContext( dpy, visinfo, NULL, True );
      |             ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/linux_glimp.c:1100:2: warning: implicit declaration of function 'qglXMakeCurrent' [-Wimplicit-function-declaration]
 1100 |         qglXMakeCurrent( dpy, win, ctx );
      |         ^
src/sys/unix/linux_glimp.c:1103:13: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
 1103 |         glstring = qglGetString( GL_RENDERER );
      |                    ^
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
 1103 |         glstring = qglGetString( GL_RENDERER );
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
 2677 |         qglXCreateContext            = NULL;
      |         ^~~~~~~~~~~~~~~~~
      |         qglXCopyContext
src/sys/unix/linux_qgl.c:74:9: note: 'qglXCopyContext' declared here
   74 | void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
      |         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/sys/unix/linux_glimp.c:1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
 1172 |         qglMultiTexCoord2fARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~
4 warnings and 20 errors generated.
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
 1173 |         qglActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~
      |         glad_glActiveTextureARB
src/third-party/glad/include/glad/gl.h:9585:41: note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o

```
      |                         ^~~~~~~~~~~~~~~~~~
      |                         glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                               ^~~~~~~~~~~~~~~~
      |                               glad_glLockArraysEXT
src/third-party/glad/include/glad/gl.h:12153:38: note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                                                    ^~~~~~~~~~~~~~~~~~
      |                                                    glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~~
src/games/game/../game/../../qcommon/q_shared.h:597:45: note: passing argument to parameter 'src' here
  597 | void    Q_strncpyz( char *dest, const char *src, int destsize );
      |                                             ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
7 warnings and 20 errors generated.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
```


### warning kinds

- [197x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - 1src/server/sv_world.c:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  - src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:475:6: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:480:14: warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src/splines/util_str.cpp:482:14: warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1138:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1183:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1232:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - :3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:7: warning: variable 'localRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:25: warning: variable 'parentRoutesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:841:103: warning: variable 'routeIndexesCount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:487:14: warning: variable 'srcarea' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_routetable.c:490:15: warning: variable 'totalcount' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
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
  - 1218src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:src/games/game/ai_cast_fight.c190:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - :1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
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
  - 13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:4714:6: warning: variable 'tfl' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:227:28: warning: variable 'ocs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_think.c:172:13: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_sight.c:569:17: warning: variable 'destcount' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_props.c:888:11: warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_mover.c:2150:6: warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_target.c:990:17: warning: variable 'dayaw' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_tramcar.c:212:8: warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:160:13: warning: variable 'ent2' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:867:13: warning: variable 'sniperEnt' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1078:8: warning: variable 'oldHealth' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_weapon.c:1337:6: warning: variable 'oldScore' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_chat.c:1050:6: warning: variable 'cpm' set but not used [-Wunused-but-set-variable]
  - src/games/botai/ai_cmd.c:1272:42: warning: variable 'redtobluett' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:960:8: warning: variable 'scale' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:1814:23: warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:738:15: warning: variable 'total' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1072:6: warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_event.c:1363:6: warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_flamethrower.c:701:6: warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_info.c:210:8: warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -pointer-sign
  - src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:387:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:403:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1940:14: warning: passing 'unsigned char[1024]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1955:20: warning: passing 'unsigned char *' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:450:5: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_drawtools.c:466:4: warning: assigning to 'const unsigned char *' from 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src/games/cgame/cg_draw.c:1986:8: warning: assigning to 'char *' from 'unsigned char[1024]' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
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
- [7x] -implicit-function-declaration
  - src/sys/unix/linux_glimp.c:758:4: warning: implicit declaration of function 'qglXDestroyContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1047:13: warning: implicit declaration of function 'qglXChooseVisual' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1097:8: warning: implicit declaration of function 'qglXCreateContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1100:2: warning: implicit declaration of function 'qglXMakeCurrent' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1103:13: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1182:5: warning: implicit declaration of function 'qglGetIntegerv' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
- [4x] -implicit-int
  - src/sys/unix/linux_qgl.c:71:15: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:71:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:9: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] 2 warnings generated.
  - src/games/game/ai_cast_think.c:946:18: warning: 2 warnings generated.

## ubuntu-latest-x64-release-

status: failure

errors: 61
warnings: 271 in 6 kinds

### errors

src/client/cl_qgl.c:166:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:166:36: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/client/cl_qgl.c:167:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:167:34: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/client/cl_qgl.c:168:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:168:40: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/client/cl_qgl.c:169:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:169:31: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/client/cl_qgl.c:170:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:170:33: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/client/cl_qgl.c:171:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:171:33: error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src/client/cl_qgl.c:172:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:172:33: error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
src/sys/unix/linux_qgl.c:70:1: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:70:38: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:36: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:50: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:71:68: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:71:90: error: unknown type name 'Bool'
src/sys/unix/linux_glimp.c:1047:11: error: incompatible integer to pointer conversion assigning to 'XVisualInfo *' from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1097:6: error: incompatible integer to pointer conversion assigning to 'GLXContext' (aka 'struct __GLXcontextRec *') from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
src/sys/unix/linux_qgl.c:71:12: error: function cannot return function type 'int (int *, int *, int, int)'
src/sys/unix/linux_glimp.c:1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_qgl.c:72:31: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:72:45: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:73:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_qgl.c:73:64: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:6: error: function cannot return function type 'int (int *, int, int)'
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
9585 | GLAD_API_CALL PFNGLAsrc/sys/unix/linux_qgl.cC:T74I:V28E:T Eerror: Xunknown type name 'Display'T
src/sys/unix/linux_qgl.c:74:42: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:74:58: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:75:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:75:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1178:4: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/sys/unix/linux_glimp.c:1179:4: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1181:9: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1182:21: error: use of undeclared identifier 'GL_MAX_ACTIVE_TEXTURES_ARB'
src/sys/unix/linux_glimp.c:1188:6: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1189:6: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1190:6: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1207:4: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1208:4: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_qgl.c.o

```
       |                                        ^
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  558 |         float dist_mult, dist_fullvol;
      |               ^
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o

```
      |                            ^
src/sys/unix/linux_qgl.c:75:42: error: unknown type name 'GLXDrawable'
   75 | void ( *qglXSwapBuffers )( Display *dpy, GLXDrawable drawable );
      |                                          ^
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
 1174 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src/third-party/glad/include/glad/gl.h:9945:47: note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
 2677 |         qglXCreateContext            = NULL;
      |         ^~~~~~~~~~~~~~~~~
      |         qglXCopyContext
src/sys/unix/linux_qgl.c:74:9: note: 'qglXCopyContext' declared here
   74 | void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
      |         ^
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
 1177 |                         qglMultiTexCoord2fARB = ( PFNGLMULTITEXCOORD2FARBPROC ) dlsym( glw_state.OpenGLLib, "glMultiTexCoord2fARB" );
      |                         ^~~~~~~~~~~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
4 warnings and 20 errors generated.
src/sys/unix/linux_glimp.c:1178:4: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
 1178 |                         qglActiveTextureARB = ( PFNGLACTIVETEXTUREARBPROC ) dlsym( glw_state.OpenGLLib, "glActiveTextureARB" );
      |                         ^~~~~~~~~~~~~~~~~~~
      |                         glad_glActiveTextureARB
src/third-party/glad/include/glad/gl.h:9585:41: note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o

```
      |                         ^~~~~~~~~~~~~~~~~~
      |                         glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                               ^~~~~~~~~~~~~~~~
      |                               glad_glLockArraysEXT
src/third-party/glad/include/glad/gl.h:12153:38: note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                                                    ^~~~~~~~~~~~~~~~~~
      |                                                    glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~~
src/games/game/../game/../../qcommon/q_shared.h:597:45: note: passing argument to parameter 'src' here
  597 | void    Q_strncpyz( char *dest, const char *src, int destsize );
      |                                             ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
7 warnings and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
```


### warning kinds

- [199x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
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
  - src/splines/splines.cpp:1138:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1183:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1232:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_sky.c:717:15: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
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
- [7x] -implicit-function-declaration
  - src/sys/unix/linux_glimp.c:758:4: warning: implicit declaration of function 'qglXDestroyContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1047:13: warning: implicit declaration of function 'qglXChooseVisual' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1097:8: warning: implicit declaration of function 'qglXCreateContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1100:2: warning: implicit declaration of function 'qglXMakeCurrent' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1103:13: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1182:5: warning: implicit declaration of function 'qglGetIntegerv' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
- [4x] -implicit-int
  - src/sys/unix/linux_qgl.c:71:15: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:71:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:9: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]

## ubuntu-latest-x64-release-game,renderer

status: cancelled

errors: 61
warnings: 272 in 6 kinds

### errors

src/client/cl_qgl.c:166:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:166:36: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/client/cl_qgl.c:167:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:167:34: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/client/cl_qgl.c:168:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:168:40: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/client/cl_qgl.c:169:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:169:31: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/client/cl_qgl.c:170:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:170:33: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/client/cl_qgl.c:171:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:171:33: error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src/client/cl_qgl.c:172:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:172:33: error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
src/sys/unix/linux_qgl.c:70:1: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:70:38: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:36: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:50: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:71:68: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:71:90: error: unknown type name 'Bool'
src/sys/unix/linux_qgl.c:71:12: error: function cannot return function type 'int (int *, int *, int, int)'
src/sys/unix/linux_qgl.c:72:31: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:72:45: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:73:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_qgl.c:73:64: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:6: error: function cannot return function type 'int (int *, int, int)'
src/sys/unix/linux_qgl.c:74:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:74:42: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:74:58: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:75:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:75:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_glimp.c:1047:11: error: incompatible integer to pointer conversion assigning to 'XVisualInfo *' from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1097:6: error: incompatible integer to pointer conversion assigning to 'GLXContext' (aka 'struct __GLXcontextRec *') from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/sys/unix/linux_glimp.c:1178:4: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1179:4: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1181:9: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1182:21: error: use of undeclared identifier 'GL_MAX_ACTIVE_TEXTURES_ARB'
src/sys/unix/linux_glimp.c:1188:6: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1189:6: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1190:6: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1207:4: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1208:4: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_qgl.c.o

```
      |                                        glad_glPNTrianglesfATI
src/third-party/glad/include/glad/gl.h:12845:40: note: 'glad_glPNTrianglesfATI' declared here
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o

```
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/linux_glimp.c:1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
 1172 |         qglMultiTexCoord2fARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
 1173 |         qglActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~
      |         glad_glActiveTextureARB
src/third-party/glad/include/glad/gl.h:9585:41: note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
src/sys/unix/linux_qgl.c:2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
 2677 |         qglXCreateContext            = NULL;
      |         ^~~~~~~~~~~~~~~~~
      |         qglXCopyContext
src/sys/unix/linux_qgl.c:74:9: note: 'qglXCopyContext' declared here
   74 | void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
      |         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
 1174 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src/third-party/glad/include/glad/gl.h:9945:47: note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
4 warnings and 20 errors generated.
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
 1177 |                         qglMultiTexCoord2fARB = ( PFNGLMULTITEXCOORD2FARBPROC ) dlsym( glw_state.OpenGLLib, "glMultiTexCoord2fARB" );
      |                         ^~~~~~~~~~~~~~~~~~~~~
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o

```
      |                         ^~~~~~~~~~~~~~~~~~
      |                         glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                               ^~~~~~~~~~~~~~~~
      |                               glad_glLockArraysEXT
src/third-party/glad/include/glad/gl.h:12153:38: note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                                                    ^~~~~~~~~~~~~~~~~~
      |                                                    glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~~
src/games/game/../game/../../qcommon/q_shared.h:597:45: note: passing argument to parameter 'src' here
  597 | void    Q_strncpyz( char *dest, const char *src, int destsize );
      |                                             ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
7 warnings and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
```


### warning kinds

- [200x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src/client/snd_dma.c:558:8: warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src/client/snd_mix.c:795:10: warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:738:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cm_trace.c:824:8: warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src/qcommon/cmd.c:247:6: warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:945:6: warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src/qcommon/common.c:1014:12: warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - 2 warningssrc/qcommon/common.c:2270:6: warning: variable 'key' set but not used [-Wunused-but-set-variable]
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
  - src/splines/splines.cpp:1138:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1183:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1232:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_func_attack.csrc/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
  - :836:15: warning: variable 'ent' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
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
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
- [29x] -pointer-sign
  - : warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
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
- [7x] -implicit-function-declaration
  - src/sys/unix/linux_glimp.c:758:4: warning: implicit declaration of function 'qglXDestroyContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1047:13: warning: implicit declaration of function 'qglXChooseVisual' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1097:8: warning: implicit declaration of function 'qglXCreateContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1100:2: warning: implicit declaration of function 'qglXMakeCurrent' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1103:13: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1182:5: warning: implicit declaration of function 'qglGetIntegerv' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
- [4x] -implicit-int
  - src/sys/unix/linux_qgl.c:71:15: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:71:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:9: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]

## ubuntu-latest-x86-debug-

status: failure

errors: 61
warnings: 270 in 6 kinds

### errors

src/client/cl_qgl.c:166:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:166:36: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/client/cl_qgl.c:167:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:167:34: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/client/cl_qgl.c:168:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:168:40: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/client/cl_qgl.c:169:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:169:31: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/client/cl_qgl.c:170:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:170:33: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/client/cl_qgl.c:171:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:171:33: error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src/client/cl_qgl.c:172:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:172:33: error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-debug/client/obj/client/cl_qgl.c.o] Error 1
src/sys/unix/linux_qgl.c:70:1: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:70:38: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:36: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:71:50: error: unknown type name 'XVisualInfo'
src/sys/unix/linux_qgl.c:71:68: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:71:90: error: unknown type name 'Bool'
src/sys/unix/linux_qgl.c:71:12: error: function cannot return function type 'int (int *, int *, int, int)'
src/sys/unix/linux_qgl.c:72:31: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:72:45: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:73:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_qgl.c:73:64: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:73:6: error: function cannot return function type 'int (int *, int, int)'
src/sys/unix/linux_qgl.c:74:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:74:42: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:74:58: error: unknown type name 'GLXContext'
src/sys/unix/linux_qgl.c:75:28: error: unknown type name 'Display'
src/sys/unix/linux_qgl.c:75:42: error: unknown type name 'GLXDrawable'
src/sys/unix/linux_glimp.c:1047:11: error: incompatible integer to pointer conversion assigning to 'XVisualInfo *' from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1097:6: error: incompatible integer to pointer conversion assigning to 'GLXContext' (aka 'struct __GLXcontextRec *') from 'int' [-Wint-conversion]
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
src/sys/unix/linux_qgl.c:src/sys/unix/linux_glimp.c2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
src/sys/unix/linux_glimp.c:1177:4: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1178:4: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1179:4: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1181:9: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1182:21: error: use of undeclared identifier 'GL_MAX_ACTIVE_TEXTURES_ARB'
src/sys/unix/linux_glimp.c:1188:6: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src/sys/unix/linux_glimp.c:1189:6: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src/sys/unix/linux_glimp.c:1190:6: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src/sys/unix/linux_glimp.c:1207:4: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1208:4: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_qgl.c.o

```
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src/client/cl_qgl.c:173:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:173:23: error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src/client/cl_qgl.c:174:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src/client/cl_qgl.c:174:27: error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src/client/cl_qgl.c:175:11: error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src/client/../renderer/tr_public.h:124:16: note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
clang -o build/linux-x86-debug/client/obj/qcommon/cm_load.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -I
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning generated.
scons: *** [build/linux-x86-debug/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o

```
src/sys/unix/linux_glimp.c:1103:11: error: incompatible integer to pointer conversion assigning to 'const char *' from 'int' [-Wint-conversion]
 1103 |         glstring = qglGetString( GL_RENDERER );
      |                  ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/linux_qgl.c:src/sys/unix/linux_glimp.c2677:2: error: use of undeclared identifier 'qglXCreateContext'; did you mean 'qglXCopyContext'?
 2677 |         qglXCreateContext            = NULL;
      |         ^~~~~~~~~~~~~~~~~
      |         qglXCopyContext
:src/sys/unix/linux_qgl.c:74:9: note: 'qglXCopyContext' declared here
   1172:2: error: use of undeclared identifier 'qglMultiTexCoord2fARB'
 74 | void ( *qglXCopyContext )( Display *dpy, GLXContext src, GLXContext dst, GLuint mask );
      |         ^
1172 |         qglMultiTexCoord2fARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
clang++ -o build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
src/sys/unix/linux_glimp.c:1173:2: error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
 1173 |         qglActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~
      |         glad_glActiveTextureARB
src/third-party/glad/include/glad/gl.h:9585:41: note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
src/sys/unix/linux_glimp.c:1174:2: error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
 1174 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src/third-party/glad/include/glad/gl.h:9945:47: note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
4 warnings and 20 errors generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o

```
      |                         ^~~~~~~~~~~~~~~~~~
      |                         glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1209:10: error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                               ^~~~~~~~~~~~~~~~
      |                               glad_glLockArraysEXT
src/third-party/glad/include/glad/gl.h:12153:38: note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
src/sys/unix/linux_glimp.c:1209:31: error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
 1209 |                         if ( !qglLockArraysEXT || !qglUnlockArraysEXT ) {
      |                                                    ^~~~~~~~~~~~~~~~~~
      |                                                    glad_glUnlockArraysEXT
src/third-party/glad/include/glad/gl.h:14563:40: note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^
src/sys/unix/linux_glimp.c:1396:38: error: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
 1396 |         Q_strncpyz( glConfig.vendor_string, qglGetString( GL_VENDOR ), sizeof( glConfig.vendor_string ) );
      |                                             ^~~~~~~~~~~~~~~~~~~~~~~~~
src/games/game/../game/../../qcommon/q_shared.h:597:45: note: passing argument to parameter 'src' here
  597 | void    Q_strncpyz( char *dest, const char *src, int destsize );
      |                                             ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
7 warnings and 20 errors generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
```


### warning kinds

- [198x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cgame.c:960:6: warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src/splines/splines.cpp:1138:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1183:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/splines/splines.cpp:1232:16: warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_move.c:447:35: warning: variable 'ax' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2409:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:915:13: warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1112:7: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1218:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1290:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1313:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:8: warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:1369:22: warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2004:11: warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_attack.c:68:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:2104:21: warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/g_combat.c:898:6: warning: variable 'save' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_cmds.c:2019:6: warning: variable 'spawnIndex' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:410:35: warning: variable 'oldHintType' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_missile.c:432:6: warning: variable 'etype' set but not used [-Wunused-but-set-variable]
  - src/games/game/g_main.c:2377:6: warning: variable 'msec' set but not used [-Wunused-but-set-variable]
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
  - src/games/cgame/cg_ents.c:173:16: warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_ents.c:181:6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_effects.c:525src/games/cgame/cg_ents.c:407:6: warning: variable 'offsetwhole' set but not used [-Wunused-but-set-variable]
  - :6: warning: variable 'tagIndex' set but not used [-Wunused-but-set-variable]
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
  - src/games/ui/ui_shared.c:1289:8: warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:4167:6: warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1790:16: warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:1792:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:5118:6: warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6041:6: warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src/games/cgame/cg_weapons.c:6088:13: warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:3712:14: warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4173:13: warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src/games/ui/ui_shared.c:4820:14: warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src/renderer/tr_animation.csrc/renderer/tr_bsp.c:147:9: warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_flares.c:128:23: warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_font.c:235:44: warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:1823:8: warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3065:8: warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_image.c:3223:20: warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_main.c:1181:15: warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_marks.c:500:8: warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:6: warning: variable 'c_edges' set but not used [-Wunused-but-set-variable]
  - src/renderer/tr_shadows.c:103:15: warning: variable 'c_rejected' set but not used [-Wunused-but-set-variable]
- [30x] conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings
  - src/splines/splines.cpp:483:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:487:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:491:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:564:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:568:23: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:577:38: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:580:25: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:865:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:868:36: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:871:41: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:972:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:974:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:976:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:978:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1256:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1259:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1262:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1265:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1268:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1278:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1281:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1284:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1287:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1291:11: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1298:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1301:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1308:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1311:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1313:10: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
  - src/splines/splines.cpp:1320:16: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
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
  - :1249:11: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  - src/renderer/tr_animation.c:1376:13: warning: assigning to 'int *' from 'glIndex_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
- [7x] -implicit-function-declaration
  - src/sys/unix/linux_glimp.c:758:4: warning: implicit declaration of function 'qglXDestroyContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1047:13: warning: implicit declaration of function 'qglXChooseVisual' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1097:8: warning: implicit declaration of function 'qglXCreateContext' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1100:2: warning: implicit declaration of function 'qglXMakeCurrent' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1103:13: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1182:5: warning: implicit declaration of function 'qglGetIntegerv' [-Wimplicit-function-declaration]
  - src/sys/unix/linux_glimp.c:1396:38: warning: implicit declaration of function 'qglGetString' [-Wimplicit-function-declaration]
- [4x] -implicit-int
  - src/sys/unix/linux_qgl.c:71:15: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:71:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:9: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
  - src/sys/unix/linux_qgl.c:73:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]

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

errors: 83
warnings: 771 in 9 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(389,4): error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
879,2)  :785  | error: suse of undeclared identifier 'qglMultiTexCoord2fARB't
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\renderer\tr_model.c(1723,12): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1723,41): error: use of undeclared identifier 'MEM_RESERVE'
src\renderer\tr_model.c(1723,54): error: use of undeclared identifier 'PAGE_NOACCESS'
src\renderer\tr_model.c(1766,8): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1766,51): error: use of undeclared identifier 'MEM_COMMIT'
src\renderer\tr_model.c(1766,63): error: use of undeclared identifier 'PAGE_READWRITE'
src\renderer\tr_model.c(1769,3): error: call to undeclared function 'FormatMessage'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,18): error: use of undeclared identifier 'FORMAT_MESSAGE_ALLOCATE_BUFFER'
src\renderer\tr_model.c(1769,51): error: use of undeclared identifier 'FORMAT_MESSAGE_FROM_SYSTEM'
src\renderer\tr_model.c(1769,85): error: call to undeclared function 'GetLastError'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_qgl.c.obj

```
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\snd_wavelet.c.obj /c src\client\snd_wavelet.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj

```
      |         glad_glActiveTextureARB
src\third-party\glad\include\glad/gl.h(9585,41): note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
  881 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src\third-party\glad\include\glad/gl.h(9945,47): note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj

```
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning and 20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj

```
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning and 20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj

```
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                   ^
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                   ^
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                               ^~~~~~~~~~~~
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                             ^~~~~~~~~~~~~~~
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                                                 ^~~~~~
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                 ^
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                                          ^~~~~~~~~~~
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |         ^
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |                                            ^~~~~~~~~~~~
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Error 1
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
  - warning:       | missing field 'floatmin' initializer [-Wmissing-field-initializers]              ^
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
  - src\games\ui\ui_main.csrc\games\ui\ui_shared.c((1022465,17,)17:) :warning:  missing field 'localname' initializer [-Wmissing-field-initializers]warning:
  - src\games\ui\ui_shared.c(3548,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_syscalls.c.obj /c src\games\ui\ui_syscalls.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommo
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [198x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\files.c(2766,20): warning: variable 'badchecksum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(945,6): warning: variable 'sum' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(1014,12): warning: variable 'locsize' set but not used [-Wunused-but-set-variable]
  - src\qcommon\common.c(2270,6): warning: variable 'key' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
  - 74 |         {"acceleration", WEAPON_OFS( acceleration ), FT_FLOAT}, //"acceleration" * time (in seconds) + "speed" = src\games\botlib\be_ai_move.cpr(o3013j,e8c)t:i lwarning: evariable 'dist' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
  - 100 |         {"src\games\ui\ui_main.cen(d2465_,a14t)t:e mpwarning: tsvariable 'w' set but not used [-Wunused-but-set-variable]"}
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
  - 5708 |         static int src\games\ui\ui_shared.cl(a1289s,t8S)e:r vwarning: evariable 'dec' set but not used [-Wunused-but-set-variable]r
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: src\sys\win32\win_glimp.cunused variable 'stream' [-Wunused-variable](
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [2x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]

## windows-latest-x64-release-

status: cancelled

errors: 64
warnings: 205 in 9 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
380 |                 if ( ( src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(389,4): error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
      |                                        glad_glPNTrianglesfATI
src\third-party\glad\include\glad/gl.h(12845,40): note: 'glad_glPNTrianglesfATI' declared here
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
  881 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src\third-party\glad\include\glad/gl.h(9945,47): note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
  882 |         qglLockArraysEXT = NULL;
      |         ^~~~~~~~~~~~~~~~
      |         glad_glLockArraysEXT
src\third-party\glad\include\glad/gl.h(12153,38): note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
   49 | int( WINAPI * qwglChoosePixelFormat )( HDC, CONST PIXELFORMATDESCRIPTOR * );
      |                                        ^
src\sys\win32\win_qgl.c(50,13): error: expected ')'
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
1 warning and 20 errors generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```


### warning kinds

- [105x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
- [51x] -missing-field-initializers
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
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [7x] -pointer-sign
  - src\sys\win32\win_net.c(265,31): warning: passing 'byte *' (aka 'unsigned char *') to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(583,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(590,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(630,28): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(637,29): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(660,27): warning: passing 'unsigned char[64]' to parameter of type 'const char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
  - src\sys\win32\win_net.c(667,28): warning: passing 'unsigned char[64]' to parameter of type 'char *' converts between pointers to integer types where one is of the unique plain 'char' type and the other is not [-Wpointer-sign]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]

## windows-latest-x64-release-cgame

status: failure

errors: 83
warnings: 773 in 10 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(389,4): error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\renderer\tr_model.c(1723,12): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1723,41): error: use of undeclared identifier 'MEM_RESERVE'
src\renderer\tr_model.c(1723,54): error: use of undeclared identifier 'PAGE_NOACCESS'
src\renderer\tr_model.c(1766,8): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1766,51): error: use of undeclared identifier 'MEM_COMMIT'
src\renderer\tr_model.c(1766,63): error: use of undeclared identifier 'PAGE_READWRITE'
src\renderer\tr_model.c(1769,3): error: call to undeclared function 'FormatMessage'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,18): error: use of undeclared identifier 'FORMAT_MESSAGE_ALLOCATE_BUFFER'
src\renderer\tr_model.c(1769,51): error: use of undeclared identifier 'FORMAT_MESSAGE_FROM_SYSTEM'
src\renderer\tr_model.c(1769,85): error: call to undeclared function 'GetLastError'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.cclang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Is
(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
  558 |         float dist_mult, dist_fullvol;
      |               ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src\third-party\glad\include\glad/gl.h(9945,47): note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
  882 |         qglLockArraysEXT = NULL;
      |         ^~~~~~~~~~~~~~~~
      |         glad_glLockArraysEXT
src\third-party\glad\include\glad/gl.h(12153,38): note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
      |         glad_glLockArraysEXT
src\third-party\glad\include\glad/gl.h(12153,38): note: 'glad_glLockArraysEXT' declared here
 12153 | GLAD_API_CALL PFNGLLOCKARRAYSEXTPROC glad_glLockArraysEXT;
       |                                      ^
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
  883 |         qglUnlockArraysEXT = NULL;
      |         ^~~~~~~~~~~~~~~~~~
      |         glad_glUnlockArraysEXT
src\third-party\glad\include\glad/gl.h(14563,40): note: 'glad_glUnlockArraysEXT' declared here
 14563 | GLAD_API_CALL PFNGLUNLOCKARRAYSEXTPROC glad_glUnlockArraysEXT;
       |                                        ^
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
  884 |         qwglGetDeviceGammaRamp3DFX = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
  885 |         qwglSetDeviceGammaRamp3DFX = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
  886 |         qglPNTrianglesiATI = NULL;
      |         ^~~~~~~~~~~~~~~~~~
      |         glad_glPNTrianglesiATI
src\third-party\glad\include\glad/gl.h(12847,40): note: 'glad_glPNTrianglesiATI' declared here
 12847 | GLAD_API_CALL PFNGLPNTRIANGLESIATIPROC glad_glPNTrianglesiATI;
       |                                        ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                                        ^
src\sys\win32\win_qgl.c(50,13): error: expected ')'
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
1 warning and 20 errors generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                   ^
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                   ^
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                               ^~~~~~~~~~~~
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                             ^~~~~~~~~~~~~~~
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                                                 ^~~~~~
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                 ^
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                                          ^~~~~~~~~~~
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |         ^
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |                                            ^~~~~~~~~~~~
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
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
  - ):  warning: 2932missing field 'localname' initializer [-Wmissing-field-initializers] |
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
  - warning: missing field 'localname' initializer [-Wmissing-field-initializers]
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
  - warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
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
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(143,10): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(3454,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [201x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
  - 2932,19)src\games\ui\ui_shared.c:( 106warning: ,variable 'weapon' set but not used [-Wunused-but-set-variable]11
  - src\games\cgame\cg_weapons.c ( 2935, 13 )/:/  warning: "variable 'oldtime' set but not used [-Wunused-but-set-variable]N
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - 142 |         {"days"},  src\games\cgame\cg_weapons.c ( 4167 , 6 ) :   warning:  variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [2x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
- [1x] dtsrc\games\ui\ui_shared.ci(m107e, 14=) :0 ;warning:
  - dtsrc\games\ui\ui_shared.ci(m107e, 14=) :0 ;warning:

## windows-latest-x64-release-game,renderer

status: cancelled

errors: 25
warnings: 32 in 3 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
src\third-party\glad\include\glad/gl.h(12845,40): note: 'glad_glPNTrianglesfATI' declared here
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```


### warning kinds

- [28x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
- [3x] -missing-field-initializers
  - src\client\cl_main.c(2095,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2096,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
  - src\client\cl_main.c(2097,40): warning: missing field 'lastSetIndex' initializer [-Wmissing-field-initializers]
- [1x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]

## windows-latest-x64-release-ui

status: failure

errors: 85
warnings: 773 in 9 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(389,4): error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\sys\win32\glw_win.hfatal error: (40too many errors emitted, stopping now [-ferror-limit=],
2): error: unknown type name 'HDC'
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\renderer\tr_model.c(1723,12): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1723,41): error: use of undeclared identifier 'MEM_RESERVE'
src\renderer\tr_model.c(1723,54): error: use of undeclared identifier 'PAGE_NOACCESS'
src\renderer\tr_model.c(1766,8): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1766,51): error: use of undeclared identifier 'MEM_COMMIT'
src\renderer\tr_model.c(1766,63): error: use of undeclared identifier 'PAGE_READWRITE'
src\renderer\tr_model.c(1769,3): error: call to undeclared function 'FormatMessage'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,18): error: use of undeclared identifier 'FORMAT_MESSAGE_ALLOCATE_BUFFER'
src\renderer\tr_model.c(1769,51): error: use of undeclared identifier 'FORMAT_MESSAGE_FROM_SYSTEM'
src\renderer\tr_model.c(1769,85): error: call to undeclared function 'GetLastError'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
src\third-party\glad\include\glad/gl.h(12845,40): note: 'glad_glPNTrianglesfATI' declared here
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\snd_mix.c.obj /c src\client\snd_mix.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      |                              ^
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
  879 |         qglMultiTexCoord2fARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
  880 |         qglActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~
      |         glad_glActiveTextureARB
src\third-party\glad\include\glad/gl.h(9585,41): note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
2 warnings generated.
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
   49 | int( WINAPI * qwglChoosePixelFormat )( HDC, CONST PIXELFORMATDESCRIPTOR * );
      |                                        ^
src\sys\win32\win_qgl.c(50,13): error: expected ')'
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
1 warning and 20 errors generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                   ^
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                   ^
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                               ^~~~~~~~~~~~
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                             ^~~~~~~~~~~~~~~
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                                                 ^~~~~~
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                 ^
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                                          ^~~~~~~~~~~
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |         ^
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |                                            ^~~~~~~~~~~~
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
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
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [201x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\splines\util_str.cpp(437,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(475,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(480,14): warning: variable 's1' set but not used [-Wunused-but-set-variable]
  - src\splines\util_str.cpp(482,14): warning: variable 's2' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [2x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]

## windows-latest-x86-debug-

status: failure

errors: 83
warnings: 772 in 9 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,src\sys\win32\win_glimp.c7()389:, 4error: )use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?:
error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
src\renderer\tr_model.c(1723,12): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1723,41): error: use of undeclared identifier 'MEM_RESERVE'
src\renderer\tr_model.c(1723,54): error: use of undeclared identifier 'PAGE_NOACCESS'
src\renderer\tr_model.c(1766,8): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1766,51): error: use of undeclared identifier 'MEM_COMMIT'
src\renderer\tr_model.c(1766,63): error: use of undeclared identifier 'PAGE_READWRITE'
src\renderer\tr_model.c(1769,3): error: call to undeclared function 'FormatMessage'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,18): error: use of undeclared identifier 'FORMAT_MESSAGE_ALLOCATE_BUFFER'
src\renderer\tr_model.c(1769,51): error: use of undeclared identifier 'FORMAT_MESSAGE_FROM_SYSTEM'
src\renderer\tr_model.c(1769,85): error: call to undeclared function 'GetLastError'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_qgl.c.obj

```
       |                                        ^
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
1 warning generated.
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
1 warning generated.
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\qcommon\cm_load.c.obj /c src\qcommon\cm_load.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai 
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj

```
      |                 ^
src\sys\win32\win_gamma.c(181,3): note: did you mean 'SetDeviceGammaRamp'?
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
  880 |         qglActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~
      |         glad_glActiveTextureARB
src\third-party\glad\include\glad/gl.h(9585,41): note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj

```
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
  885 |         qwglSetDeviceGammaRamp3DFX = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj

```
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
  885 |         qwglSetDeviceGammaRamp3DFX = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\sys\win32\win_glimp.c(886,2): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
  886 |         qglPNTrianglesiATI = NULL;
      |         ^~~~~~~~~~~~~~~~~~
      |         glad_glPNTrianglesiATI
src\third-party\glad\include\glad/gl.h(12847,40): note: 'glad_glPNTrianglesiATI' declared here
 12847 | GLAD_API_CALL PFNGLPNTRIANGLESIATIPROC glad_glPNTrianglesiATI;
       |                                        ^
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj

```
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                   ^
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                   ^
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                               ^~~~~~~~~~~~
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                             ^~~~~~~~~~~~~~~
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                                                 ^~~~~~
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                 ^
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                                          ^~~~~~~~~~~
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |         ^
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |                                            ^~~~~~~~~~~~
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj] Error 1
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
- [199x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
  - src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - 167 |         qglImport.qglActiveTesrc\client\snd_dma.cx(t558u,r8e)A:R Bwarning:  variable 'dist_mult' set but not used [-Wunused-but-set-variable]=
  - src\client\snd_mix.c(795,10): warning: variable 'talkcnt' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cmd.c(247,6): warning: variable 'len' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(738,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
  - src\qcommon\cm_trace.c(824,8): warning: variable 'a' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4820,14): warning: variable 'modelPtr' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [6x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - 131 |         {"keywait"},             //     "Wasrc\games\ui\ui_main.ci(t70i,n18g) :f owarning: runused variable 'numNetSources' [-Wunused-const-variable]
- [2x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]

## windows-latest-x86-release-

status: failure

errors: 83
warnings: 773 in 9 kinds

### errors

src\client\cl_qgl.c(166,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(166,36): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\client\cl_qgl.c(167,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(167,34): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\client\cl_qgl.c(168,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(168,40): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
src\client\cl_qgl.c(169,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(169,31): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\client\cl_qgl.c(170,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(170,33): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\client\cl_qgl.c(171,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(171,33): error: use of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?
src\client\cl_qgl.c(172,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(172,33): error: use of undeclared identifier 'qglPNTrianglesfATI'; did you mean 'glad_glPNTrianglesfATI'?
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Error 1
src\sys\win32\glw_win.h(38,2): error: unknown type name 'WNDPROC'
src\sys\win32\glw_win.h(40,2): error: unknown type name 'HDC'
src\sys\win32\glw_win.h(41,2): error: unknown type name 'HGLRC'
src\sys\win32\glw_win.h(43,2): error: unknown type name 'HINSTANCE'
src\sys\win32\win_gamma.c(50,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(136,12): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(152,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(357,4): error: call to undeclared function 'qwglDescribePixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(358,9): error: call to undeclared function 'qwglSetPixelFormat'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(54,34): error: call to undeclared function 'qwglGetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(380,28): error: call to undeclared function 'qwglCreateContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(388,9): error: call to undeclared function 'qwglMakeCurrent'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_gamma.c(180,7): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_glimp.c(389,4): error: call to undeclared function 'qwglDeleteContext'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(879,2): error: use of undeclared identifier 'qglMultiTexCoord2fARB'
src\sys\win32\win_gamma.c(181,3): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(880,2): error: use of undeclared identifier 'qglActiveTextureARB'; did you mean 'glad_glActiveTextureARB'?
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
src\sys\win32\win_glimp.c(882,2): error: use of undeclared identifier 'qglLockArraysEXT'; did you mean 'glad_glLockArraysEXT'?
src\sys\win32\win_glimp.c(883,2): error: use of undeclared identifier 'qglUnlockArraysEXT'; did you mean 'glad_glUnlockArraysEXT'?
src\sys\win32\win_glimp.c(884,2): error: use of undeclared identifier 'qwglGetDeviceGammaRamp3DFX'
src\sys\win32\win_glimp.c(885,2): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'
src\sys\win32\win_qgl.c(45,13): error: expected ')'
src\sys\win32\win_qgl.c(46,7): error: unknown type name 'WINAPI'src\sys\win32\win_glimp.c
(886   ,462 | )B:O Oerror: Luse of undeclared identifier 'qglPNTrianglesiATI'; did you mean 'glad_glPNTrianglesiATI'?(
src\sys\win32\win_qgl.c(46,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(46,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(47,7): error: unknown type name 'WINAPI'
src\sys\win32\win_qgl.c(47,1): error: type specifier missing, defaults to 'int'; ISO C99 and later do not support implicit int [-Wimplicit-int]
src\sys\win32\win_qgl.c(47,46): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(49,13): error: expected ')'
src\sys\win32\win_qgl.c(49,51): error: expected ')'
src\sys\win32\win_qgl.c(49,40): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(50,13): error: expected ')'
src\sys\win32\win_qgl.c(50,47): error: expected identifier
src\sys\win32\win_qgl.c(51,13): error: expected ')'
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\renderer\tr_model.c(1723,12): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1723,41): error: use of undeclared identifier 'MEM_RESERVE'
src\renderer\tr_model.c(1723,54): error: use of undeclared identifier 'PAGE_NOACCESS'
src\renderer\tr_model.c(1766,8): error: call to undeclared function 'VirtualAlloc'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1766,51): error: use of undeclared identifier 'MEM_COMMIT'
src\renderer\tr_model.c(1766,63): error: use of undeclared identifier 'PAGE_READWRITE'
src\renderer\tr_model.c(1769,3): error: call to undeclared function 'FormatMessage'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,18): error: use of undeclared identifier 'FORMAT_MESSAGE_ALLOCATE_BUFFER'
src\renderer\tr_model.c(1769,51): error: use of undeclared identifier 'FORMAT_MESSAGE_FROM_SYSTEM'
src\renderer\tr_model.c(1769,85): error: call to undeclared function 'GetLastError'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_qgl.c.obj

```
src\third-party\glad\include\glad/gl.h(12845,40): note: 'glad_glPNTrianglesfATI' declared here
 12845 | GLAD_API_CALL PFNGLPNTRIANGLESFATIPROC glad_glPNTrianglesfATI;
       |                                        ^
src\client\cl_qgl.c(173,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  173 |         qglImport.qglAccum = qglAccum;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(173,23): error: use of undeclared identifier 'qglAccum'
  173 |         qglImport.qglAccum = qglAccum;
      |                              ^~~~~~~~
src\client\cl_qgl.c(174,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
src\client\cl_qgl.c(174,27): error: use of undeclared identifier 'qglAlphaFunc'
  174 |         qglImport.qglAlphaFunc = qglAlphaFunc;
      |                                  ^~~~~~~~~~~~
src\client\cl_qgl.c(175,11): error: incomplete definition of type 'qglimport_t' (aka 'struct qglimport_s')
  175 |         qglImport.qglAreTexturesResident = qglAreTexturesResident;
      |         ~~~~~~~~~^
src\client\../renderer/tr_public.h(124,16): note: forward declaration of 'struct qglimport_s'
  124 | typedef struct qglimport_s qglimport_t;
      |                ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\snd_mem.c.obj /c src\client\snd_mem.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj

```
src\third-party\glad\include\glad/gl.h(9585,41): note: 'glad_glActiveTextureARB' declared here
 9585 | GLAD_API_CALL PFNGLACTIVETEXTUREARBPROC glad_glActiveTextureARB;
      |                                         ^
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
src\sys\win32\win_gamma.c(196,8): error: use of undeclared identifier 'qwglSetDeviceGammaRamp3DFX'; did you mean 'SetDeviceGammaRamp'?
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~
      |                      SetDeviceGammaRamp
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\wingdi.h(5370,30): note: 'SetDeviceGammaRamp' declared here
 5370 | WINGDIAPI BOOL        WINAPI SetDeviceGammaRamp( _In_ HDC hdc, _In_reads_bytes_(3*256*2)  LPVOID lpRamp);
      |                              ^
src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                 ~~   ^~~~~~~~~~~~~~~~~~~~~~~~~~
src\sys\win32\win_gamma.c(196,8): note: prefix with the address-of operator to silence this warning
  196 |                 if ( qwglSetDeviceGammaRamp3DFX ) {
      |                      ^
      |                      &
src\sys\win32\win_gamma.c(197,4): error: call to undeclared function 'qwglSetDeviceGammaRamp3DFX'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
  197 |                         qwglSetDeviceGammaRamp3DFX( glw_state.hDC, s_oldHardwareGamma );
      |                         ^
4 warnings and 10 errors generated.
src\sys\win32\win_glimp.c(881,2): error: use of undeclared identifier 'qglClientActiveTextureARB'; did you mean 'glad_glClientActiveTextureARB'?
  881 |         qglClientActiveTextureARB = NULL;
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~
      |         glad_glClientActiveTextureARB
src\third-party\glad\include\glad/gl.h(9945,47): note: 'glad_glClientActiveTextureARB' declared here
 9945 | GLAD_API_CALL PFNGLCLIENTACTIVETEXTUREARBPROC glad_glClientActiveTextureARB;
      |                                               ^
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj

```
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning and 20 errors generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj

```
      |             ^
src\sys\win32\win_qgl.c(50,4): note: to match this '('
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |    ^
src\sys\win32\win_qgl.c(50,47): error: expected identifier
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |                                               ^
src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]
   50 | int( WINAPI * qwglDescribePixelFormat )( HDC, int, UINT, LPPIXELFORMATDESCRIPTOR );
      |      ^
src\sys\win32\win_qgl.c(45,6): note: conflicting prototype is here
   45 | int( WINAPI * qwglSwapIntervalEXT )( int interval );
      |      ^
src\sys\win32\win_qgl.c(51,13): error: expected ')'
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |             ^
src\sys\win32\win_qgl.c(51,4): note: to match this '('
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |    ^
src\sys\win32\win_qgl.c(51,37): error: a parameter list without types is only allowed in a function definition
   51 | int( WINAPI * qwglGetPixelFormat )( HDC );
      |                                     ^
src\sys\win32\win_qgl.c(52,7): error: unknown type name 'WINAPI'
   52 | BOOL( WINAPI * qwglSetPixelFormat )( HDC, int, CONST PIXELFORMATDESCRIPTOR * );
      |       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
1 warning and 20 errors generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj

```
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                   ^
src\renderer\tr_model.c(1769,101): error: call to undeclared function 'MAKELANGID'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                   ^
src\renderer\tr_model.c(1769,113): error: use of undeclared identifier 'LANG_NEUTRAL'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                               ^~~~~~~~~~~~
src\renderer\tr_model.c(1769,127): error: use of undeclared identifier 'SUBLANG_DEFAULT'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                             ^~~~~~~~~~~~~~~
src\renderer\tr_model.c(1769,147): error: use of undeclared identifier 'LPTSTR'
 1769 |                 FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), (LPTSTR) &buf, 0, NULL );
      |                                                                                                                                                                 ^~~~~~
src\renderer\tr_model.c(1797,3): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                 ^
src\renderer\tr_model.c(1797,28): error: use of undeclared identifier 'MEM_RELEASE'
 1797 |                 VirtualFree( membase, 0, MEM_RELEASE );
      |                                          ^~~~~~~~~~~
src\renderer\tr_model.c(1823,2): error: call to undeclared function 'VirtualFree'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |         ^
src\renderer\tr_model.c(1823,37): error: use of undeclared identifier 'MEM_DECOMMIT'
 1823 |         VirtualFree( membase, hunkcursize, MEM_DECOMMIT );
      |                                            ^~~~~~~~~~~~
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Error 1
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
  - t lasrc\games\ui\ui_shared.cs(t129C,o8n)t:e nwarning: tmissing field 'localname' initializer [-Wmissing-field-initializers]s
  - calsrc\games\ui\ui_shared.cE(n130t,i7t)y:_ twarning:  missing field 'localname' initializer [-Wmissing-field-initializers]
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
  - src\games\ui\ui_shared.c(129,8): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(130,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [201x] -unused-but-set-variable
  - src\client\cl_input.c(442,6): warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src\client\cl_input.c(681,15): warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cgame.c(960,6): warning: variable 'resetTime' set but not used [-Wunused-but-set-variable]
  - src\client\cl_cin.c(1796,11): warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(198,6): warning: variable 'r' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
  - src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1138,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1183,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\splines\splines.cpp(1232,16): warning: variable 'token' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1072,6): warning: variable 'mass' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(1363,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
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
  - 127 |         {"end_noesrc\games\cgame\cg_weapons.cxi(t401",}6,) :   warning:  variable 'contents' set but not used [-Wunused-but-set-variable]
  - avsrc\games\cgame\cg_weapons.ca(i402,6): warning: lvariable 'lastContents' set but not used [-Wunused-but-set-variable]a
  - src\games\cgame\cg_weapons.c ( 407 , 19 ) :   warning:  variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - 3458 |         src\games\cgame\cg_weapons.c{"(w5118e,a6p)o:n bwarning: avariable 'markDuration' set but not used [-Wunused-but-set-variable]n
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(4173,13): warning: variable 'parent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
- [30x] -writable-strings
  - src\splines\splines.cpp(483,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(487,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(491,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(564,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(568,23): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(577,38): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(580,25): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(865,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(868,36): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(871,41): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(972,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(974,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(976,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(978,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1256,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1259,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1262,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1265,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1268,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1278,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1281,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1284,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1287,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1291,11): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1298,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1301,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1308,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1311,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1313,10): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
  - src\splines\splines.cpp(1320,16): warning: ISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
- [5x] -unused-variable
  - src\sys\win32\win_input.c(225,18): warning: unused variable 'hInstDI' [-Wunused-variable]
  - src\sys\win32\win_input.c(249,21): warning: unused variable 'df' [-Wunused-variable]
  - src\sys\win32\win_input.c(258,22): warning: unused variable 'g_pdi' [-Wunused-variable]
  - src\sys\win32\win_input.c(259,28): warning: unused variable 'g_pMouse' [-Wunused-variable]
  - src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
- [3x] -pointer-bool-conversion
  - src\sys\win32\win_gamma.c(50,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(180,7): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\sys\win32\win_gamma.c(196,8): warning: address of function 'SetDeviceGammaRamp' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [2x] -deprecated-declarations
  - src\sys\win32\win_gamma.c(153,2): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] -deprecated-non-prototype
  - src\sys\win32\win_qgl.c(50,6): warning: a function declaration without a prototype is deprecated in all versions of C and is treated as a zero-parameter prototype in C23, conflicting with a previous declaration [-Wdeprecated-non-prototype]

