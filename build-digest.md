# Build digest

commit: 53650d664a43

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: cancelled
- ubuntu-latest-x64-release-game,renderer: cancelled
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

errors: 9
warnings: 262 in 5 kinds

### errors

src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
src/renderer/tr_shade.c:66:91: error: expected ')'
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_qgl.c.o

```
 2814 |         char*   str;
      |                 ^
src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
clang -o build/linux-x64-release/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
clang -o build/linux-x64-release/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
1 warning generated.
clang -o build/linux-x64-release/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/g
In file included from src/client/cl_qgl.c:35:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
src/client/cl_scrn.c:386:6: warning: variable 'color' set but not used [-Wunused-but-set-variable]
  386 |         int color;
      |             ^
1 error generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o

```
      |             ^
src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
1 warning generated.
2 warnings generated.
clang -o build/linux-x64-release/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x64-release/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
clang -o build/linux-x64-release/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botli
clang -o build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/x86_64-linux-gnu/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
clang -o build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
1 warning generated.
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang -o build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
clang -o build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
1 error generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o

```
clang -o build/linux-x64-release/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botli
clang -o build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/x86_64-linux-gnu/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
clang -o build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
1 warning generated.
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang -o build/linux-x64-release/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
clang -o build/linux-x64-release/client/obj/sys/unix/linux_snd.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
1 error generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
clang++ -o build/linux-x64-release/client/obj/splines/math_angles.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/
In file included from src/sys/unix/linux_glimp.c:65:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang++ -o build/linux-x64-release/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/
clang++ -o build/linux-x64-release/client/obj/splines/math_quaternion.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m64 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -I
1 error generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
```

- build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o

```
3 warnings generated.
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x64-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -O2 -fno-strict-aliasing -include build/linux-x64-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src/renderer/tr_shade.c:66:91: error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src/renderer/tr_shade.c:66:80: note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
2 warnings and 4 errors generated.
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
scons: *** [build/linux-x64-release/renderer/obj/renderer/tr_shade.c.o] Error 1
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
  - src/games/botlib/be_ai_goal.c:241:19: warning: variable 'gs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_chat.c:2782:19: warning: variable 'cs' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_gen.c:59:13: warning: variable 'select' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:1553:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_ai_move.c:3013:8: warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_precomp.c:1656:6: warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/l_script.c:384:14: warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_fight.c:164:22: warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:500:28: warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_events.c:501:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
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
  - :2438:15: warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - 1275 |         char   src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -implicit-function-declaration
  - src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]

## ubuntu-latest-x64-release-game,renderer

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: failure

errors: 9
warnings: 260 in 5 kinds

### errors

src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
scons: *** [build/linux-x86-debug/client/obj/client/cl_qgl.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
src/renderer/tr_shade.c:66:91: error: expected ')'
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shade.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_qgl.c.o

```
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
clang -o build/linux-x86-debug/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isr
1 warning generated.
clang -o build/linux-x86-debug/client/obj/client/cl_scrn.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang -o build/linux-x86-debug/client/obj/client/cl_ui.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Isrc
src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
In file included from src/client/cl_qgl.c:35:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o

```
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
src/server/sv_world.c:406:6: warning: variable 'count' set but not used [-Wunused-but-set-variable]
  406 |         int count;
      |             ^
src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
2 warnings generated.
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui 
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
1 warning generated.
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/gam
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o

```
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
1 warning generated.
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/gam
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o] Error 1
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_snd.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
clang++ -o build/linux-x86-debug/client/obj/splines/math_angles.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
In file included from src/sys/unix/linux_glimp.c:65:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang++ -o build/linux-x86-debug/client/obj/splines/math_matrix.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/
clang++ -o build/linux-x86-debug/client/obj/splines/math_quaternion.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -g -O0 -fPIE -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIE -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -I
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.c.o] Error 1
```

- build/linux-x86-debug/renderer/obj/renderer/tr_shade.c.o

```
src/renderer/tr_model.c:1883:13: warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui
1 warning generated.
clang -o build/linux-x86-debug/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/games/cgame -Isrc/games/ui -Is
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src/renderer/tr_shade.c:66:91: error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src/renderer/tr_shade.c:66:80: note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawSclang -o build/linux-x86-debug/renderer/obj/renderer/tr_shadows.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -g -O0 -include build/linux-x86-debug/q_buildconfig.h -fPIC -fPIC -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
tripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
2 warnings and 4 errors generated.
scons: *** [build/linux-x86-debug/renderer/obj/renderer/tr_shade.c.o] Error 1
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
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - 829 |         int i, j, k, t, tfl, numsrc/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
  - src/games/game/ai_cast_funcs.c:989:13: warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:498:16: warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_funcs.c:1829:15: warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:921:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
  - src/games/game/ai_cast_func_boss1.c:996:20: warning: variable 'spirits' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -implicit-function-declaration
  - src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]

## ubuntu-latest-x86-release-

status: cancelled

errors: 9
warnings: 262 in 5 kinds

### errors

src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
scons: *** [build/linux-x86-release/client/obj/client/cl_qgl.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
src/renderer/tr_shade.c:66:91: error: expected ')'
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o] Error 1

### failure context

- build/linux-x86-release/client/obj/client/cl_qgl.c.o

```
clang -o build/linux-x86-release/client/obj/client/cl_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/client/cl_main.c:198:6: warning: variable 'r' set but not used [-Wunused-but-set-variable]
  198 |         int r, index, l;
      |             ^
clang -o build/linux-x86-release/client/obj/client/cl_parse.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isr
1 warning generated.
src/client/cl_main.c:2814:10: warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src/client/cl_main.c:2918:18: warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang -o build/linux-x86-release/client/obj/client/cl_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
src/client/cl_main.c:3617:12: warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src/client/cl_main.c:3618:6: warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src/client/cl_main.c:3619:6: warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
src/client/cl_parse.c:590:8: warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
In file included from src/client/cl_qgl.c:35:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-release/client/obj/client/cl_qgl.c.o] Error 1
```

- build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o

```
  406 |         int count;
      |             ^
src/server/sv_world.c:701:15: warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
1 warning generated.
clang -o build/linux-x86-release/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
2 warnings generated.
clang -o build/linux-x86-release/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
clang -o build/linux-x86-release/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botli
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
clang -o build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
clang -o build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 warning generated.
clang -o build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
1 error generated.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
```

- build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o

```
clang -o build/linux-x86-release/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -I
clang -o build/linux-x86-release/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
clang -o build/linux-x86-release/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botli
src/sys/unix/unix_net.c:179:38: warning: passing 'int *' to parameter of type 'socklen_t *' (aka 'unsigned int *') converts between pointers to integer types with different sign [-Wpointer-sign]
  179 |                                                 , 0, (struct sockaddr *)&from, &fromlen );
      |                                                                                ^~~~~~~~
/usr/include/sys/socket.h:165:27: note: passing argument to parameter '__addr_len' here
  165 |                          socklen_t *__restrict __addr_len);
      |                                                ^
clang -o build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
src/sys/unix/unix_shared.c:187:6: warning: variable 'extLen' set but not used [-Wunused-but-set-variable]
  187 |         int extLen;
      |             ^
1 warning generated.
clang -o build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib
In file included from src/sys/unix/linux_qgl.c:46:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 warning generated.
clang -o build/linux-x86-release/client/obj/sys/unix/linux_joystick.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/bot
1 error generated.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_qgl.c.o] Error 1
In file included from src/sys/unix/linux_glimp.c:65:
src/client/../renderer/tr_local.h:38:10: fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang -o build/linux-x86-release/client/obj/sys/unix/linux_snd.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang++ -o build/linux-x86-release/client/obj/splines/math_angles.cpp.o -c -Wall -fsigned-char -std=gnu++98 -m32 -O2 -fno-strict-aliasing -fPIE -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIE -DNDEBUG -DQDECL= -DMAC_STATIC= -DBOTLIB_HARD_LINKED -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/
1 error generated.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.c.o] Error 1
```

- build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o

```
      |                    ^
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc/
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shade_calc.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -
clang -o build/linux-x86-release/renderer/obj/renderer/tr_shader.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -O2 -fno-strict-aliasing -include build/linux-x86-release/q_buildconfig.h -fPIC -fPIC -DNDEBUG -DQDECL= -DMAC_STATIC= -DREFDLL -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/renderer -Isrc/server -Isrc/splines -Isrc/sys/unix -Isrc/sys/win32 -Isrc/games/botai -Isrc/games/botlib -Isrc
src/renderer/tr_shade.c:47:13: error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src/renderer/tr_shade.c:47:21: error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src/renderer/tr_shade.c:66:91: error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src/renderer/tr_shade.c:66:80: note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src/renderer/tr_shade.c:195:46: error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src/renderer/tr_shade.c:1391:19: warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
2 warnings and 4 errors generated.
src/renderer/tr_shade_calc.c:670:6: warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
scons: *** [build/linux-x86-release/renderer/obj/renderer/tr_shade.c.o] Error 1
```


### warning kinds

- [200x] -unused-but-set-variable
  - src/client/cl_input.c:442:6: warning: variable 'movespeed' set but not used [-Wunused-but-set-variable]
  - src/client/cl_cin.c:1796:11: warning: variable 'holdatend' set but not used [-Wunused-but-set-variable]
  - src/client/cl_input.c:681:15: warning: variable 'cmd' set but not used [-Wunused-but-set-variable]
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
  - src/games/botlib/be_aas_reach.c:717:22: warning: variable 'areasettings' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:42: warning: variable 'ground_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:972:61: warning: variable 'water_bestface1' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:415:6: warning: variable 'starttime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:15: warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:829:23: warning: variable 'numroutingareas' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3372:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2094:6: warning: variable 'numvalid' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_route.c:2188:40: warning: variable 'enemytraveltime' set but not used [-Wunused-but-set-variable]
  - src/games/botlib/be_aas_reach.c:3926:21: warning: variable 'hordist' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src/qcommon/unzip.c:3046:19: warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src/games/ui/ui_main.c:70:18: warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -implicit-function-declaration
  - src/renderer/tr_shade.c:80:2: warning: implicit declaration of function 'element' [-Wimplicit-function-declaration]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 30
warnings: 767 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_qgl.c.obj

```
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isr
1 warning generated.
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isrc\
9 warnings generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  386 |         int color;
      |             ^
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
1 warning generated.
scons: *** [build\windows-x64-debug\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj

```
  701 |         float       *angles;
      |                      ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
1 error generated.
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
      |                      ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
1 error generated.
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

- build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj

```
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
4 warnings generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\ga
src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  616 |         static int lastWarning = 0;
      |                    ^~~~~~~~~~~
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
3 warnings generated.
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
1 error generated.
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

- build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj

```
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isr
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 5 errors generated.
clang-cl /Fobuild\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /Z7 /Od /FI build/windows-x64-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
scons: *** [build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - src\client\snd_dma.c(558,8): warning: variable 'dist_mult' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,10): warning: variable 'dot' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(189,6): warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - (238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
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
  - warning: variable 'value' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x64-release-

status: failure

errors: 30
warnings: 768 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
      |                                               ^
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
      |             ^
src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
2 warnings generated.
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
1 error generated.
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
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
  701 |         float       *angles;
      |                      ^
2 warnings generated.
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
1 error generated.
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
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                            ^~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
4 warnings generated.
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
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
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj

```
src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 5 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c( 1106088, | 17        )c:e nwarning: tmissing field 'localname' initializer [-Wmissing-field-initializers]i
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
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
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
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(5118,6): warning: variable 'markDuration' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(104,26src\games\cgame\cg_weapons.c):( 6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - warning: variable 'cent' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x64-release-cgame

status: failure

errors: 30
warnings: 767 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
      |                                               ^
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\s
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\w
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
  701 |         float       *angles;
      |                      ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
1 error generated.
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
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\un
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix
1 error generated.
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
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                            ^~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
4 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\
2 warnings generated.
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DCGAME_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /
1 error generated.
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

- build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj

```
      |                    ^
1 warning and 18 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 5 errors generated.
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - src\games\cgame\cg_weapons.csrc\games\ui\ui_shared.c((35165118,,456))::  warning: warning: missing field 'bind2' initializer [-Wmissing-field-initializers]variable 'markDuration' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_shared.c(3516,45): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [200x] -unused-but-set-variable
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
  - 1265 |         s =src\games\botlib\be_aas_move.c v(a447(, 35")\:t \warning: tvariable 'ax' set but not used [-Wunused-but-set-variable]e
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
  - src\games\cgame\cg_info.c(210,8): warning: variable 'formatStr' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1101,26): warning: variable 'firing' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(1638,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(471,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_localents.c(498,7): warning: variable 't' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(202,15): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_newDraw.c(391,19): warning: variable 'ps' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(271,src\games\cgame\cg_players.c10)(:189 ,warning: 6variable 'dot' set but not used [-Wunused-but-set-variable])
  - : warning: variable 'lastLow' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(1774,26): warning: variable 'oldAnimTime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(936,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_particles.c(938,6): warning: variable 'type' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2438,15): warning: variable 'torsoSet' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(2596,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_players.c(4553,16): warning: variable 'ci' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_sound.c(238,6): warning: variable 's' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(196,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1289,8): warning: variable 'dec' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1790,16): warning: variable 'listPtr' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(1792,6): warning: variable 'count' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2932,19): warning: variable 'weapon' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2935,13): warning: variable 'oldtime' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(3746,8): warning: variable 'shake' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(4167,6): warning: variable 'lastweap' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_shared.c(3712,14): warning: variable 'value' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6041,6): warning: variable 'anim' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(6088,13): warning: variable 'cent' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_sky.c(717,15): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
  - tep, swimming, ax, crouch, event, jump_frsrc\splines\splines.cppa(m1268e,,10 )a:r ewarning: aISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]n
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x64-release-game,renderer

status: failure

errors: 30
warnings: 768 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
      |                                               ^
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\spline
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /I
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines 
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isr
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\
1 error generated.
1 error generated.
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
  701 |         float       *angles;
      |                      ^
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isr
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\
1 error generated.
1 error generated.
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

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
  259 | static LPDIRECTINPUTDEVICE g_pMouse;
      |                            ^~~~~~~~
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
4 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /I
2 warnings generated.
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DGAME_HARD_LINKED /DRENDERER_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\sp
1 error generated.
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

- build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj

```
1 warning and 18 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
1 warning and 5 errors generated.
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - src\games\game\ai_cast_events.c(500,28): warning: variable 'activator' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_events.c(501,13): warning: variable 'client' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(68,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(66,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(164,22): warning: variable 'oldPauseTime' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(190,15): warning: variable 'bs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_boss1.c(498,16): warning: variable 'ecs' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_func_attack.c(836,15): warning: variable 'ent' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(915,13): warning: variable 'oldweap' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1112,7): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1218,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1290,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1313,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(1369,22): warning: variable 'croucher' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2004,11): warning: variable 'ammo' set but not used [-Wunused-but-set-variable]
  - src\games\game\ai_cast_fight.c(2104,21): warning: variable 'dcs' set but not used [-Wunused-but-set-variable]
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
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x64-release-ui

status: failure

errors: 30
warnings: 768 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_qgl.c.obj

```
      |                                               ^
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sy
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\wi
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
1 warning generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win3
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj

```
  701 |         float       *angles;
      |                      ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
1 error generated.
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
      | 1                           ^~~~~~~~ error
 generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj

```
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix 
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /I
1 error generated.
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
      | 1                           ^~~~~~~~ error
 generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
      | 1                           ^~~~~~~~ error
 generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
4 warnings generated.
2 warnings generated.
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\uni
clang-cl /Fobuild\windows-x64-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /DUI_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isr
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj

```
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
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```

- build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj

```
 1883 |         static int lastPurged = 0;
      |                    ^
1 warning and 18 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj /c src\renderer\tr_shade_calc.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj] Error 1
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj /c src\renderer\tr_shader.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 5 errors generated.
clang-cl /Fobuild\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m64 /O2 /FI build/windows-x64-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
scons: *** [build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - 98,16 )1275: |          warning: cmissing field 'localname' initializer [-Wmissing-field-initializers]h
  - src\games\ui\ui_shared.c ( 99 ,*17t)e:x twarning: _missing field 'localname' initializer [-Wmissing-field-initializers]p
  - 1278 | src\games\ui\ui_shared.c        (c100h,a17r) :   warning:  missing field 'localname' initializer [-Wmissing-field-initializers]
  - ,17 )1280: |          warning: imissing field 'localname' initializer [-Wmissing-field-initializers]n
  - src\games\ui\ui_shared.c(103,15): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(104,26): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(105,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(106,11): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(107,14): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(109,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(110,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(111,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - axClsrc\games\ui\ui_shared.ci(e112n,t17s),:  pwarning: imissing field 'localname' initializer [-Wmissing-field-initializers]n
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
  - src\games\ui\ui_shared.c(147,7src\games\ui\ui_main.c):( 5708warning: ,missing field 'localname' initializer [-Wmissing-field-initializers]33
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
  - src\games\ui\ui_shared.c(98,16): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(99,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(100,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(102,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(112,17): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\games\ui\ui_shared.c(147,7): warning: missing field 'localname' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [201x] -unused-but-set-variable
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
  - 76 |         {"offset", WEAPON_OFS( offset ), FT_FLOAT | FT_ARRAY, 3}, //projectile start offsesrc\games\botlib\be_ai_move.ct (r1553e,l8a)t:i vwarning: evariable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\be_ai_move.c(3013,8): warning: variable 'dist' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_script.c(384,14): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\botlib\l_precomp.c(1656,6): warning: variable 'lastoperatortype' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - 15): warning: src\games\ui\ui_shared.cvariable 'text_p' set but not used [-Wunused-but-set-variable](
  - /src\games\ui\ui_players.c/(     1275",S24e)c:r ewarning: tvariable 'prev' set but not used [-Wunused-but-set-variable]
  - trsrc\games\ui\ui_players.ce(a1277s,u6r)e:" }warning: ,variable 'i' set but not used [-Wunused-but-set-variable]
  - warning: | variable 'token' set but not used [-Wunused-but-set-variable]                       ^
  - tesrc\games\ui\ui_players.cm(p1279t,s8")}:,  warning:  variable 'fps' set but not used [-Wunused-but-set-variable]
  - 6): src\games\ui\ui_shared.cwarning: (variable 'skip' set but not used [-Wunused-but-set-variable]102
  - 111 |         {"missionfail3"},            //src\games\ui\ui_main.c ("5082M,i43s)s:i owarning: nvariable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c ( 5085 , 13 ) :   warning: /variable 'numinvisible' set but not used [-Wunused-but-set-variable]/
  - src\games\ui\ui_main.c127 | (        5395{,"23e)n:d _warning: nvariable 'numTimeOuts' set but not used [-Wunused-but-set-variable]o
  - ):   147warning:  | variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]        {
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
  - : warning: variable 'traplf' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_flamethrower.c(701,6): warning: variable 'jiggleCount' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_event.c(738,15): warning: variable 'total' set but not used [-Wunused-but-set-variable]
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
  - src\games\cgame\cg_weapons.c(401,6): warning: variable 'contents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(402,6): warning: variable 'lastContents' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(407,19): warning: variable 'le' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_weapons.c(2013,8): warning: variable 'ramp' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(196,18): warning: variable 'lbdiff' set but not used [-Wunused-but-set-variable]
  - src\games\cgame\cg_view.c(972,8): warning: variable 'redFlash' set but not used [-Wunused-but-set-variable]
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
  - src\splines\splines.cpp(1284  ,44710 | )        :i nwarning: tISO C++11 does not allow conversion from string literal to 'char *' [-Wwritable-strings]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x86-debug-

status: failure

errors: 31
warnings: 767 in 7 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(190,46): error: incompatible function pointer types passing 'PFNGLARRAYELEMENTPROC' (aka 'void (*)(int) __attribute__((stdcall))') to parameter of type 'void (*)(GLint)' (aka 'void (*)(int)') [-Wincompatible-function-pointer-types]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_qgl.c.obj

```
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isr
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
clang-cl /Fobuild\windows-x86-debug\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /Isrc\
9 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_adpcm.c.obj /c src\client\snd_adpcm.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bota
src\client\cl_scrn.c(386,6): warning: variable 'color' set but not used [-Wunused-but-set-variable]
  386 |         int color;
      |             ^
1 warning generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\client\snd_dma.c.obj /c src\client\snd_dma.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\botai /I
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj

```
  701 |         float       *angles;
      |                      ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
1 error generated.
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
      |                      ^
1 warning generated.
2 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_gamma.c.obj /c src\sys\win32\win_gamma.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\game
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
1 error generated.
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

- build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj

```
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
4 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\ga
src\sys\win32\win_main.c(616,13): warning: unused variable 'lastWarning' [-Wunused-variable]
  616 |         static int lastWarning = 0;
      |                    ^~~~~~~~~~~
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
3 warnings generated.
clang-cl /Fobuild\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m32 /Z7 /Od /FI build/windows-x86-debug\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bo
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
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

- build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj

```
      |             ^
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
   47 | static void APIENTRY R_ArrayElementDiscrete( GLint index ) {
      |                     ^
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(190,46): error: incompatible function pointer types passing 'PFNGLARRAYELEMENTPROC' (aka 'void (*)(int) __attribute__((stdcall))') to parameter of type 'void (*)(GLint)' (aka 'void (*)(int)') [-Wincompatible-function-pointer-types]
  190 |                 R_DrawStripElements( numIndexes,  indexes, glArrayElement );
      |                                                            ^~~~~~~~~~~~~~
src\third-party\glad\include\glad/gl.h(9614,24): note: expanded from macro 'glArrayElement'
 9614 | #define glArrayElement glad_glArrayElement
      |                        ^~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(66,82): note: passing argument to parameter 'APIENTRY' here
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                  ^
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 6 errors generated.
scons: *** [build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - src\games\ui\ui_shared.c(132,14): warning: src\games\ui\ui_main.cmissing field 'localname' initializer [-Wmissing-field-initializers](
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
  - 8): warning: variable 'attack_skill' set but not used [-Wunused-but-set-variable]
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
  - src\games\game\g_props.c(888,11): warning: variable 'prop_hits' set but not used [-Wunused-but-set-variable]
  - src\games\game\g_mover.c(2150,6): warning: variable 'soundrange' set but not used [-Wunused-but-set-variable]
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
  - src\games\ui\ui_players.c(1275,15): warning: variable 'text_p' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1275,24): warning: variable 'prev' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1277,6): warning: variable 'i' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1278,15): warning: variable 'token' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1279,8): warning: variable 'fps' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_players.c(1280,6): warning: variable 'skip' set but not used [-Wunused-but-set-variable]
  - 2465,14):   132warning:  | variable 'w' set but not used [-Wunused-but-set-variable]
  - // src\games\ui\ui_main.c"(P2465r,e17s)s:  Ewarning: Nvariable 'h' set but not used [-Wunused-but-set-variable]T
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5708,33): warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(6491,6): warning: variable 'start' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]

## windows-latest-x86-release-

status: failure

errors: 31
warnings: 768 in 9 kinds

### errors

src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
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
src\renderer\tr_shade.c(47,13): error: variable has incomplete type 'void'
src\renderer\tr_shade.c(47,21): error: expected ';' after top level declarator
src\renderer\tr_shade.c(66,91): error: expected ')'
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\renderer\tr_shade.c(190,46): error: incompatible function pointer types passing 'PFNGLARRAYELEMENTPROC' (aka 'void (*)(int) __attribute__((stdcall))') to parameter of type 'void (*)(GLint)' (aka 'void (*)(int)') [-Wincompatible-function-pointer-types]
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_qgl.c.obj

```
      |                                               ^
src\client\cl_main.c(2814,10): warning: variable 'str' set but not used [-Wunused-but-set-variable]
 2814 |         char*   str;
      |                 ^
src\client\cl_main.c(2918,18): warning: variable 'serverStatus' set but not used [-Wunused-but-set-variable]
 2918 |         serverStatus_t *serverStatus;
      |                         ^
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\gam
src\client\cl_main.c(3617,12): warning: variable 'ls' set but not used [-Wunused-but-set-variable]
 3617 |         char *p, *ls;
      |                   ^
src\client\cl_main.c(3618,6): warning: variable 'lastcolor' set but not used [-Wunused-but-set-variable]
 3618 |         int lastcolor;
      |             ^
src\client\cl_main.c(3619,6): warning: variable 'chatHeight' set but not used [-Wunused-but-set-variable]
 3619 |         int chatHeight;
      |             ^
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\b
src\client\cl_parse.c(590,8): warning: variable 'msgback' set but not used [-Wunused-but-set-variable]
  590 |         msg_t msgback;
      |               ^
1 warning generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_scrn.c.obj /c src\client\cl_scrn.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
1 warning generated.
clang-cl /Fobuild\windows-x86-release\client\obj\client\cl_ui.c.obj /c src\client\cl_ui.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
In file included from src\client\cl_qgl.c:35:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_qgl.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj

```
      |             ^
src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
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
1 error generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj

```
src\server\sv_world.c(701,15): warning: variable 'angles' set but not used [-Wunused-but-set-variable]
  701 |         float       *angles;
      |                      ^
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj /c src\sys\win32\win_glimp.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
In file included from src\sys\win32\win_gamma.c:33:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_input.c.obj /c src\sys\win32\win_input.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_main.c.obj /c src\sys\win32\win_main.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Is
In file included from src\sys\win32\win_glimp.c:45:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
1 error generated.
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
1 error generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                            ^~~~~~~~
1 error generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_gamma.c.obj] Error 1
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj] Error 1
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_net.c.obj /c src\sys\win32\win_net.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj /c src\sys\win32\win_qgl.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
 1247 |         if ( !GetVersionEx( &g_wv.osversion ) ) {
      |               ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(414,23): note: expanded from macro 'GetVersionEx'
  414 | #define GetVersionEx  GetVersionExA
      |                       ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(393,1): note: 'GetVersionExA' has been explicitly marked deprecated here
  393 | NOT_BUILD_WINDOWS_DEPRECATE
      | ^
C:\Program Files (x86)\Windows Kits\10\\include\10.0.26100.0\\um\sysinfoapi.h(37,49): note: expanded from macro 'NOT_BUILD_WINDOWS_DEPRECATE'
   37 | # define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
      |                                                 ^
src\sys\win32\win_main.c(785,22): warning: unused variable 'stream' [-Wunused-variable]
  785 | static streamState_t stream;
      |                      ^~~~~~
4 warnings generated.
2 warnings generated.
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_shared.c.obj /c src\sys\win32\win_shared.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32
In file included from src\sys\win32\win_qgl.c:40:
src\client\../renderer/tr_local.h(38,10): fatal error: 'glad/gl.h' file not found
   38 | #include <glad/gl.h>
      |          ^~~~~~~~~~~
clang-cl /Fobuild\windows-x86-release\client\obj\sys\win32\win_snd.c.obj /c src\sys\win32\win_snd.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DBOTLIB_HARD_LINKED /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc
1 error generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj

```
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
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj /c src\renderer\tr_shade.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games\bot
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj] Error 1
```

- build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj

```
      |                     ;
src\renderer\tr_shade.c(66,91): error: expected ')'
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                           ^
src\renderer\tr_shade.c(66,80): note: to match this '('
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                ^
src\renderer\tr_shade.c(80,2): error: call to undeclared function 'element'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
   80 |         element( indexes[0] );
      |         ^
src\renderer\tr_shade.c(190,46): error: incompatible function pointer types passing 'PFNGLARRAYELEMENTPROC' (aka 'void (*)(int) __attribute__((stdcall))') to parameter of type 'void (*)(GLint)' (aka 'void (*)(int)') [-Wincompatible-function-pointer-types]
  190 |                 R_DrawStripElements( numIndexes,  indexes, glArrayElement );
      |                                                            ^~~~~~~~~~~~~~
src\third-party\glad\include\glad/gl.h(9614,24): note: expanded from macro 'glArrayElement'
 9614 | #define glArrayElement glad_glArrayElement
      |                        ^~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade.c(66,82): note: passing argument to parameter 'APIENTRY' here
   66 | static void R_DrawStripElements( int numIndexes, const glIndex_t *indexes, void( APIENTRY *element )( GLint ) ) {
      |                                                                                  ^
clang-cl /Fobuild\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj /c src\renderer\tr_shadows.c /nologo /W4 -m32 /O2 /FI build/windows-x86-release\q_buildconfig.h /DWIN32 /D_WINDOWS /D_CRT_SECURE_NO_WARNINGS /DNDEBUG /DQDECL=__cdecl /DMAC_STATIC= /DREFDLL /Isrc /Isrc\games\game /Isrc\client /Isrc\qcommon /Isrc\renderer /Isrc\server /Isrc\splines /Isrc\sys\unix /Isrc\sys\win32 /Isrc\games
src\renderer\tr_shade.c(195,46): error: use of undeclared identifier 'R_ArrayElementDiscrete'
  195 |                 R_DrawStripElements( numIndexes,  indexes, R_ArrayElementDiscrete );
      |                                                            ^~~~~~~~~~~~~~~~~~~~~~
src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  670 |         int c;
      |             ^
src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
 1391 |         shader_t        *shader;
      |                          ^
1 warning and 6 errors generated.
scons: *** [build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj] Error 1
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
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]2
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
  - src\games\ui\ui_shared.c( 1065708, | 11        )s:t awarning: tmissing field 'localname' initializer [-Wmissing-field-initializers]i
  - 14):  warning: 1275missing field 'localname' initializer [-Wmissing-field-initializers] |
  - ,11):src\games\ui\ui_players.c (warning: 1279missing field 'localname' initializer [-Wmissing-field-initializers],
  - warning:       missing field 'localname' initializer [-Wmissing-field-initializers]|
  - 6491 |         src\games\ui\ui_shared.ci(n141t, 8s)t:a rwarning: tmissing field 'localname' initializer [-Wmissing-field-initializers];
  - src\games\ui\ui_shared.c(3451,49): warning: missing field 'bind2' initializer [-Wmissing-field-initializers]
  - src\renderer\tr_shader.c(1820,7): warning: missing field 'blendB' initializer [-Wmissing-field-initializers]
- [200x] -unused-but-set-variable
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
  - src\games\ui\ui_main.c(2465,14): warning: variable 'w' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(2465,17): warning: variable 'h' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5082,43): warning: variable 'game' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5085,13): warning: variable 'numinvisible' set but not used [-Wunused-but-set-variable]
  - src\games\ui\ui_main.c(5395,23): warning: variable 'numTimeOuts' set but not used [-Wunused-but-set-variable]
  - warning: variable 'lastSaveTime' set but not used [-Wunused-but-set-variable]
  - 1275,15):src\games\ui\ui_shared.c (warning: 132variable 'text_p' set but not used [-Wunused-but-set-variable],
  - // src\games\ui\ui_players.c"(P1275r,e24s)s:  Ewarning: Nvariable 'prev' set but not used [-Wunused-but-set-variable]T
  - warning:       variable 'i' set but not used [-Wunused-but-set-variable]|
  - src\games\ui\ui_players.c(1278  ,13315 | )        :{ "warning: pvariable 'token' set but not used [-Wunused-but-set-variable]l
  - 8):   135warning:  | variable 'fps' set but not used [-Wunused-but-set-variable]
  - warning:       variable 'start' set but not used [-Wunused-but-set-variable]|
  - src\renderer\tr_bsp.c(147,9): warning: variable 'sumIntensity' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_flares.c(128,23): warning: variable 'oldest' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_font.c(235,44): warning: variable 'satLevels' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(1823,8): warning: variable 'g' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3065,8): warning: variable 'name' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_image.c(3223,20): warning: variable 'bImagePrev' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_main.c(1181,15): warning: variable 'pointOr' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_marks.c(500,8): warning: variable 'texCoordScale' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_model.c(1883,13): warning: variable 'lastPurged' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade_calc.c(670,6): warning: variable 'c' set but not used [-Wunused-but-set-variable]
  - src\renderer\tr_shade.c(1391,19): warning: variable 'shader' set but not used [-Wunused-but-set-variable]
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
- [2x] -unused-const-variable
  - src\qcommon\unzip.c(3046,19): warning: unused variable 'inflate_copyright' [-Wunused-const-variable]
  - src\games\ui\ui_main.c(70,18): warning: unused variable 'numNetSources' [-Wunused-const-variable]
- [1x] -deprecated-declarations
  - src\sys\win32\win_main.c(1247,8): warning: 'GetVersionExA' is deprecated [-Wdeprecated-declarations]
- [1x] )      :|              ^warning:
  - )      :|              ^warning:
- [1x] src\games\ui\ui_players.c ( 1280 , 6 ) :/ /warning:
  - src\games\ui\ui_players.c ( 1280 , 6 ) :/ /warning:

