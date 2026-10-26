# Build digest

commit: 5de18931859f

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: failure
- windows-latest-x64-release: cancelled
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 26
warnings: 247 in 8 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/client/cl_keys.c.o

```
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x64-debug/client/obj/client/cl_keys.c.o] Error 1
```

- build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o

```
src/qcommon/msg.c:1456:4: warning: cast to smaller integer type 'int' from 'float *' [-Wpointer-to-int-cast]
 1456 |         { PSF( footstepCount ), 0},
      |           ^~~~~~~~~~~~~~~~~~~~
src/qcommon/msg.c:1375:22: note: expanded from macro 'PSF'
 1375 | #define PSF( x ) # x,(int)&( (playerState_t*)0 )->x
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
147 warnings generated.
clang -o build/linux-x64-debug/client/obj/server/sv_client.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc
clang -o build/linux-x64-debug/client/obj/server/sv_game.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x64-debug/client/obj/server/sv_init.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x64-debug/client/obj/server/sv_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x64-debug/client/obj/server/sv_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x64-debug/client/obj/server/sv_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x64-debug/client/obj/server/sv_world.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/
clang -o build/linux-x64-debug/client/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc
clang -o build/linux-x64-debug/client/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x64-debug/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isr
clang -o build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -
clang -o build/linux-x64-debug/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon 
src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |              ^
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |            ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  436 |                 fn = FS_BuildOSPath( cdpath, gamedir, filename );
      |                    ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 2 errors generated.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
```

- build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o

```
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/cgame/cg_event.c:566:20: warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  566 |                 {"tag_legleft",  PEFOFS( legsRefEnt ),     BOTH_PAIN7},
      |                                  ^~~~~~~~~~~~~~~~~~~~
src/games/cgame/cg_event.c:553:23: note: expanded from macro 'PEFOFS'
  553 | #define PEFOFS( x ) ( (int)&( ( (playerEntity_t *)0 )->x ) )
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
7 warnings generated.
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_newDraw.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_particles.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cl
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_players.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_predict.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_scoreboard.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/c
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_servercmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/c
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_sound.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_syscalls.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_trails.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clien
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_view.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x64-debug/cgame/obj/games/ui/ui_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -
clang -o build/linux-x64-debug/cgame/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x64-debug/cgame/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Is
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
1 error generated.
scons: *** [build/linux-x64-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
```


### warning kinds

- [213x] -pointer-to-int-cast
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:968:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:969:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:970:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:971:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
- [2x] -absolute-value
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
- [1x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x64-release

status: failure

errors: 26
warnings: 247 in 8 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Error 1
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o] Error 1

### failure context

- build/linux-x64-release/client/obj/client/cl_keys.c.o

```
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x64-release/client/obj/client/cl_keys.c.o] Error 1
```

- build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o

```
src/qcommon/msg.c:1375:22: note: expanded from macro 'PSF'
 1375 | #define PSF( x ) # x,(int)&( (playerState_t*)0 )->x
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
clang -o build/linux-x64-release/client/obj/server/sv_bot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc/
clang -o build/linux-x64-release/client/obj/server/sv_ccmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isr
clang -o build/linux-x64-release/client/obj/server/sv_client.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Is
clang -o build/linux-x64-release/client/obj/server/sv_game.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x64-release/client/obj/server/sv_init.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x64-release/client/obj/server/sv_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc
147 warnings generated.
clang -o build/linux-x64-release/client/obj/server/sv_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -
clang -o build/linux-x64-release/client/obj/server/sv_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -
clang -o build/linux-x64-release/client/obj/server/sv_world.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isr
clang -o build/linux-x64-release/client/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Is
clang -o build/linux-x64-release/client/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x64-release/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -
clang -o build/linux-x64-release/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -I
clang -o build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game
clang -o build/linux-x64-release/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/gam
clang -o build/linux-x64-release/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -Isrc -Isrc/games/game -
src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |              ^
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |            ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  436 |                 fn = FS_BuildOSPath( cdpath, gamedir, filename );
      |                    ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 2 errors generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/unix_shared.c.o] Error 1
```

- build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o

```
src/games/cgame/cg_event.c:566:20: warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  566 |                 {"tag_legleft",  PEFOFS( legsRefEnt ),     BOTH_PAIN7},
      |                                  ^~~~~~~~~~~~~~~~~~~~
src/games/cgame/cg_event.c:553:23: note: expanded from macro 'PEFOFS'
  553 | #define PEFOFS( x ) ( (int)&( ( (playerEntity_t *)0 )->x ) )
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_info.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc -
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_localents.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -I
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_main.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc -
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc 
7 warnings generated.
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_newDraw.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isr
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_particles.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -I
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_players.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isr
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL 
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_predict.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isr
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_scoreboard.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_servercmds.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Is
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_sound.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc 
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_syscalls.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Is
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_trails.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_view.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc -
clang -o build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isr
clang -o build/linux-x64-release/cgame/obj/games/ui/ui_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc -I
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
clang -o build/linux-x64-release/cgame/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DCGAMEDLL -Isrc -Isrc/
1 error generated.
scons: *** [build/linux-x64-release/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
```


### warning kinds

- [213x] -pointer-to-int-cast
  - src/client/cl_cin.c:1105:39: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1105:68: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:41: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/client/cl_cin.c:1106:110: warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/cm_polylib.c:280:9: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/common.c:1098:29: warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:948:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:949:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:950:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:951:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:952:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:953:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:954:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:955:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:956:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:957:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:958:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:959:4: warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:960:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:961:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:962:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:963:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:964:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:965:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:966:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:967:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:968:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:969:4: warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:970:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src/qcommon/msg.c:971:4: warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
- [2x] -absolute-value
  - src/games/botlib/l_precomp.c:2436:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
  - src/games/botlib/l_precomp.c:2542:31: warning: absolute value function 'abs' given an argument of type 'long' but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
- [1x] -int-to-pointer-cast
  - src/qcommon/common.c:1098:15: warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-debug

status: failure

errors: 26
warnings: 30 in 4 kinds

### errors

src/client/cl_keys.c:1731:25: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1731:31: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1746:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1746:19: error: use of undeclared identifier 'CG_EVENT_HANDLING'
src/client/cl_keys.c:1752:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1752:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1756:14: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1756:20: error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src/client/cl_keys.c:1765:12: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1765:18: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1784:41: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:13: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1785:19: error: use of undeclared identifier 'UI_KEY_EVENT'
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/client/cl_keys.c.o

```
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1786:51: error: use of undeclared identifier 'cgvm'
 1786 |                 } else if ( cls.keyCatchers & KEYCATCH_CGAME && cgvm ) {
      |                                                                 ^~~~
src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                         ^
src/client/cl_keys.c:1787:13: error: use of undeclared identifier 'cgvm'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                  ^~~~
src/client/cl_keys.c:1787:19: error: use of undeclared identifier 'CG_KEY_EVENT'
 1787 |                         VM_Call( cgvm, CG_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                              ^
src/client/cl_keys.c:1813:20: error: use of undeclared identifier 'uivm'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                       ^~~~
src/client/cl_keys.c:1813:26: error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
 1813 |                                         if ( VM_Call( uivm, UI_GET_ACTIVE_MENU ) == UIMENU_NOTEBOOK ) {
      |                                                             ^~~~~~~~~~~~~~~~~~
src/client/cl_keys.c:1825:8: error: use of undeclared identifier 'uivm'
 1825 |                 if ( uivm ) {
      |                      ^~~~
src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
 1826 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
27 warnings and 20 errors generated.
scons: *** [build/linux-x86-debug/client/obj/client/cl_keys.c.o] Error 1
```

- build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o

```
clang -o build/linux-x86-debug/client/obj/qcommon/md4.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/rend
clang -o build/linux-x86-debug/client/obj/qcommon/msg.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/rend
clang -o build/linux-x86-debug/client/obj/qcommon/net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc
clang -o build/linux-x86-debug/client/obj/qcommon/unzip.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/re
clang -o build/linux-x86-debug/client/obj/server/sv_bot.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/re
clang -o build/linux-x86-debug/client/obj/server/sv_ccmds.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/
clang -o build/linux-x86-debug/client/obj/server/sv_client.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc
clang -o build/linux-x86-debug/client/obj/server/sv_game.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x86-debug/client/obj/server/sv_init.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x86-debug/client/obj/server/sv_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x86-debug/client/obj/server/sv_net_chan.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x86-debug/client/obj/server/sv_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x86-debug/client/obj/server/sv_world.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/
clang -o build/linux-x86-debug/client/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc
clang -o build/linux-x86-debug/client/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isrc/r
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_net.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Isr
clang -o build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_common.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon 
clang -o build/linux-x86-debug/client/obj/sys/unix/linux_qgl.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -Isrc -Isrc/games/game -Isrc/client -Isrc/qcommon -Is
src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |              ^
src/sys/unix/unix_shared.c:429:5: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  429 |         fn = FS_BuildOSPath( basepath, gamedir, filename );
      |            ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/sys/unix/unix_shared.c:436:6: error: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
  436 |                 fn = FS_BuildOSPath( cdpath, gamedir, filename );
      |                    ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 2 errors generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/unix_shared.c.o] Error 1
```

- build/linux-x86-debug/cgame/obj/games/cgame/cg_weapons.c.o

```
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_draw.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_drawtools.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cl
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_effects.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_event.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_flamethrower.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_info.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_localents.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cl
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_main.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_marks.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_newDraw.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_particles.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cl
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_players.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_playerstate.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_predict.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_scoreboard.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/c
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_servercmds.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/c
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_snapshot.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_sound.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_syscalls.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_trails.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clien
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_view.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client 
clang -o build/linux-x86-debug/cgame/obj/games/cgame/cg_weapons.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x86-debug/cgame/obj/games/ui/ui_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -
clang -o build/linux-x86-debug/cgame/obj/qcommon/q_math.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x86-debug/cgame/obj/qcommon/q_shared.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DCGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Is
src/games/cgame/cg_weapons.c:1142:6: error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
1 error generated.
scons: *** [build/linux-x86-debug/cgame/obj/games/cgame/cg_weapons.c.o] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src/client/cl_keys.c:197:5: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:450:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:452:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:469:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:470:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:474:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:475:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:476:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:477:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:478:7: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:535:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:541:8: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:570:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:595:9: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:607:13: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:666:16: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:667:12: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src/client/cl_keys.c:680:4: warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [10x] -implicit-function-declaration
  - src/client/cl_keys.c:1731:16: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1746:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1752:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1756:5: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1765:3: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1785:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1787:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1813:11: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/client/cl_keys.c:1826:4: warning: implicit declaration of function 'VM_Call' [-Wimplicit-function-declaration]
  - src/sys/unix/unix_shared.c:429:7: warning: implicit declaration of function 'FS_BuildOSPath' [-Wimplicit-function-declaration]
- [1x] "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:9:2: warning: "xf86dga.h is obsolete and may be removed in the future." [-W#warnings]
- [1x] "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]
  - /usr/include/X11/extensions/xf86dga.h:10:2: warning: "include <X11/extensions/Xxf86dga.h> instead." [-W#warnings]

## ubuntu-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## uncrustify

status: success

errors: 4
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/sys/unix/qasm.h
UNCRUSTIFY_FAILED: src/sys/win32/win_qgl.c
UNCRUSTIFY_FAILED: src/games/game/bg_pmove.c
UNCRUSTIFY_FAILED: src/games/cgame/cg_weapons.c

### failure context


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 56
warnings: 262 in 8 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
src\sys\win32\win_qgl.c(2939,73): error: expected ')'
src\sys\win32\win_qgl.c(2939,89): error: expected expression
src\sys\win32\win_qgl.c(2940,82): error: expected ')'
src\sys\win32\win_qgl.c(2940,102): error: expected expression
src\sys\win32\win_qgl.c(2941,138): error: expected ')'
src\sys\win32\win_qgl.c(2941,168): error: expected expression
src\sys\win32\win_qgl.c(2942,70): error: expected ')'
src\sys\win32\win_qgl.c(2942,93): error: expected expression
src\sys\win32\win_qgl.c(2943,60): error: expected ')'
src\sys\win32\win_qgl.c(2943,76): error: expected expression
src\sys\win32\win_qgl.c(2944,90): error: expected ')'
src\sys\win32\win_qgl.c(2944,112): error: expected expression
src\sys\win32\win_qgl.c(2945,163): error: expected ')'
src\sys\win32\win_qgl.c(2945,180): error: expected expression
src\sys\win32\win_qgl.c(2946,87): error: expected ')'
src\sys\win32\win_qgl.c(2946,107): error: expected expression
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
src\sys\win32\win_qgl.c(2947,85): error: expected expression
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
lld-link: error: undefined symbol: PASSFLOAT
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)
lld-link: error: undefined symbol: dllEntry
scons: *** [build\windows-x64-debug\qagame.dll] Error 1
lld-link: error: undefined symbol: CopyString
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.c:1550
lld-link: error: undefined symbol: Q_acos
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:791
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:792
lld-link: error: undefined symbol: Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:32
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:50
scons: *** [build\windows-x64-debug\renderer_gl.dll] Error 1

### failure context

- build\windows-x64-debug\client\obj\client\cl_keys.c.obj

```
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
clang-cl /Fobuild\windows-x64-debug\client\obj\client\cl_qgl.c.obj /c src\client\cl_qgl.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT_
scons: *** [build\windows-x64-debug\client\obj\client\cl_keys.c.obj] Error 1
```

- build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj

```
      |                     ^
src\sys\win32\win_qgl.c(2946,32): note: to match this '('
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                       ^
src\sys\win32\win_qgl.c(2946,107): error: expected expression
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                                                                                                  ^
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                         ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2947,30): note: to match this '('
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                     ^
src\sys\win32\win_qgl.c(2947,85): error: expected expression
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                                            ^
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                                                                                           ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2948,32): note: to match this '('
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj

```
src\games\cgame\cg_event.c(566,20): warning: cast to smaller integer type 'int' from 'refEntity_t *' [-Wpointer-to-int-cast]
  566 |                 {"tag_legleft",  PEFOFS( legsRefEnt ),     BOTH_PAIN7},
      |                                  ^~~~~~~~~~~~~~~~~~~~
src\games\cgame\cg_event.c(553,23): note: expanded from macro 'PEFOFS'
  553 | #define PEFOFS( x ) ( (int)&( ( (playerEntity_t *)0 )->x ) )
      |                       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_info.c.obj /c src\games\cgame\cg_info.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
7 warnings generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_localents.c.obj /c src\games\cgame\cg_localents.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_main.c.obj /c src\games\cgame\cg_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOW
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
1 error generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
```

- build\windows-x64-debug\qagame.dll

```
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x64-debug\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOW
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
1 error generated.
clang-cl /Fobuild\windows-x64-debug\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT
scons: *** [build\windows-x64-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
clang-cl /Fobuild\windows-x64-debug\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-debug\ui\obj\games\ui\ui_gameinfo.c.obj /c src\games\ui\ui_gameinfo.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
lld-link: error: undefined symbol: PASSFLOAT
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)

lld-link: error: undefined symbol: dllEntry
>>> referenced by build\windows-x64-debug\game\obj\games\game\g_save.c.obj:(funcList)
scons: *** [build\windows-x64-debug\qagame.dll] Error 1
```

- build\windows-x64-debug\renderer_gl.dll

```
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdinput.c.obj /c src\third-party\jpeg-6\jdinput.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdmainct.c.obj /c src\third-party\jpeg-6\jdmainct.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdmarker.c.obj /c src\third-party\jpeg-6\jdmarker.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdmaster.c.obj /c src\third-party\jpeg-6\jdmaster.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdpostct.c.obj /c src\third-party\jpeg-6\jdpostct.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdsample.c.obj /c src\third-party\jpeg-6\jdsample.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jdtrans.c.obj /c src\third-party\jpeg-6\jdtrans.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jerror.c.obj /c src\third-party\jpeg-6\jerror.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jidctflt.c.obj /c src\third-party\jpeg-6\jidctflt.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jmemmgr.c.obj /c src\third-party\jpeg-6\jmemmgr.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj /c src\third-party\jpeg-6\jmemnobs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\renderer\obj\third-party\jpeg-6\jutils.c.obj /c src\third-party\jpeg-6\jutils.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmpt4exa37c.lnk for command line:
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEBUG /DEF:src/renderer/renderer.def /dll /out:build\windows-x64-debug\renderer_gl.dll /implib:build\windows-x64-debug\renderer_gl.lib build\windows-x64-debug\renderer\obj\renderer\tr_animation.c.obj build\windows-x64-debug\renderer\obj\renderer\tr_backend.c.obj build\windows-x64-debug\renderer\obj\renderer\tr_bsp.c.obj build\windows-x64-debug\renderer
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmpt4exa37c.lnk
lld-link: error: undefined symbol: CopyString
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.c:1550
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj:(ParseShader)

lld-link: error: undefined symbol: Q_acos
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:791
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj:(R_InitSkyTexCoords)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:792
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj:(R_InitSkyTexCoords)

lld-link: error: undefined symbol: Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:32
>>>               build\windows-x64-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(jpeg_get_small)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:50
>>>               build\windows-x64-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(jpeg_get_large)
scons: *** [build\windows-x64-debug\renderer_gl.dll] Error 1
```


### warning kinds

- [218x] -pointer-to-int-cast
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(968,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(969,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(970,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(971,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
- [4x] -unused-function
  - src\sys\win32\win_shared.c(103,12): warning: unused function 'IsPentium' [-Wunused-function]
  - src\sys\win32\win_shared.c(107,12): warning: unused function 'Is3DNOW' [-Wunused-function]
  - src\sys\win32\win_shared.c(147,12): warning: unused function 'IsKNI' [-Wunused-function]
  - src\sys\win32\win_shared.c(161,12): warning: unused function 'IsMMX' [-Wunused-function]
- [1x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -void-pointer-to-int-cast
  - src\sys\win32\win_input.c(860,7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x64-release

status: cancelled

errors: 41
warnings: 197 in 7 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1
src\sys\win32\win_qgl.c(2939,73): error: expected ')'
src\sys\win32\win_qgl.c(2939,89): error: expected expression
src\sys\win32\win_qgl.c(2940,82): error: expected ')'
src\sys\win32\win_qgl.c(2940,102): error: expected expression
src\sys\win32\win_qgl.c(2941,138): error: expected ')'
src\sys\win32\win_qgl.c(2941,168): error: expected expression
src\sys\win32\win_qgl.c(2942,70): error: expected ')'
src\sys\win32\win_qgl.c(2942,93): error: expected expression
src\sys\win32\win_qgl.c(2943,60): error: expected ')'
src\sys\win32\win_qgl.c(2943,76): error: expected expression
src\sys\win32\win_qgl.c(2944,90): error: expected ')'
src\sys\win32\win_qgl.c(2944,112): error: expected expression
src\sys\win32\win_qgl.c(2945,163): error: expected ')'
src\sys\win32\win_qgl.c(2945,180): error: expected expression
src\sys\win32\win_qgl.c(2946,87): error: expected ')'
src\sys\win32\win_qgl.c(2946,107): error: expected expression
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
src\sys\win32\win_qgl.c(2947,85): error: expected expression
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\client\cl_keys.c.obj

```
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
clang-cl /Fobuild\windows-x64-release\client\obj\client\cl_parse.c.obj /c src\client\cl_parse.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
scons: *** [build\windows-x64-release\client\obj\client\cl_keys.c.obj] Error 1
```

- build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                     ^
src\sys\win32\win_qgl.c(2946,32): note: to match this '('
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                       ^
src\sys\win32\win_qgl.c(2946,107): error: expected expression
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                                                                                                  ^
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                         ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2947,30): note: to match this '('
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                     ^
src\sys\win32\win_qgl.c(2947,85): error: expected expression
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                                            ^
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                                                                                           ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2948,32): note: to match this '('
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```


### warning kinds

- [158x] -pointer-to-int-cast
  - src\client\cl_cin.c(1105,39): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1105,68): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,41): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\client\cl_cin.c(1106,110): warning: cast to smaller integer type 'unsigned int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\cm_polylib.c(280,9): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\common.c(1098,29): warning: cast to smaller integer type 'int' from 'byte *' (aka 'unsigned char *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(948,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(949,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(950,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(951,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(952,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(953,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(954,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(955,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(956,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(957,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(958,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(959,4): warning: cast to smaller integer type 'int' from 'trType_t *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(960,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(961,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(962,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(963,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(964,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(965,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(966,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(967,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(968,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(969,4): warning: cast to smaller integer type 'int' from 'int *' [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(970,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
  - src\qcommon\msg.c(971,4): warning: cast to smaller integer type 'int' from 'vec_t *' (aka 'float *') [-Wpointer-to-int-cast]
- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [17x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_vector.hsrc\splines\math_vector.h((160160,,1818))::  warning: warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63  ,1406 | )        :r ewarning: tdefinition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]u
- [1x] -int-to-pointer-cast
  - src\qcommon\common.c(1098,15): warning: cast to 'byte *' (aka 'unsigned char *') from smaller integer type 'int' [-Wint-to-pointer-cast]
- [1x] need to modify cg_event.c at "// check the sequencial list" if you change this
  - 995 |         { NETF( eventSequence ), 8 }, // warning: need to modify cg_event.c at "// check the sequencial list" if you change this
- [1x] -void-pointer-to-int-cast
  - src\sys\win32\win_input.c(860,7): warning: cast to smaller integer type 'unsigned long' from 'void *' [-Wvoid-pointer-to-int-cast]
- [1x] -cast-function-type-mismatch
  - src\sys\win32\win_syscon.c(283,21): warning: cast from 'LONG (*)(HWND, UINT, WPARAM, LPARAM) __attribute__((stdcall))' (aka 'long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') to 'WNDPROC' (aka 'long long (*)(struct HWND__ *, unsigned int, unsigned long long, long long)') converts to incompatible function type [-Wcast-function-type-mismatch]

## windows-latest-x86-debug

status: failure

errors: 56
warnings: 36 in 2 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1
src\sys\win32\win_qgl.c(2939,73): error: expected ')'
src\sys\win32\win_qgl.c(2939,89): error: expected expression
src\sys\win32\win_qgl.c(2940,82): error: expected ')'
src\sys\win32\win_qgl.c(2940,102): error: expected expression
src\sys\win32\win_qgl.c(2941,138): error: expected ')'
src\sys\win32\win_qgl.c(2941,168): error: expected expression
src\sys\win32\win_qgl.c(2942,70): error: expected ')'
src\sys\win32\win_qgl.c(2942,93): error: expected expression
src\sys\win32\win_qgl.c(2943,60): error: expected ')'
src\sys\win32\win_qgl.c(2943,76): error: expected expression
src\sys\win32\win_qgl.c(2944,90): error: expected ')'
src\sys\win32\win_qgl.c(2944,112): error: expected expression
src\sys\win32\win_qgl.c(2945,163): error: expected ')'
src\sys\win32\win_qgl.c(2945,180): error: expected expression
src\sys\win32\win_qgl.c(2946,87): error: expected ')'
src\sys\win32\win_qgl.c(2946,107): error: expected expression
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
src\sys\win32\win_qgl.c(2947,85): error: expected expression
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)
lld-link: error: undefined symbol: _dllEntry
scons: *** [build\windows-x86-debug\qagame.dll] Error 1
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
lld-link: error: undefined symbol: _CopyString
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.c:1550
lld-link: error: undefined symbol: _Q_acos
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:791
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:792
lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:32
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:50
scons: *** [build\windows-x86-debug\renderer_gl.dll] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\client\cl_keys.c.obj] Error 1
```

- build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj

```
      |                     ^
src\sys\win32\win_qgl.c(2946,32): note: to match this '('
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                       ^
src\sys\win32\win_qgl.c(2946,107): error: expected expression
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                                                                                                  ^
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                         ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2947,30): note: to match this '('
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                     ^
src\sys\win32\win_qgl.c(2947,85): error: expected expression
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                                            ^
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                                                                                           ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2948,32): note: to match this '('
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x86-debug\qagame.dll

```
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_draw.c.obj /c src\games\cgame\cg_draw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_drawtools.c.obj /c src\games\cgame\cg_drawtools.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_effects.c.obj /c src\games\cgame\cg_effects.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_ents.c.obj /c src\games\cgame\cg_ents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_event.c.obj /c src\games\cgame\cg_event.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_flamethrower.c.obj /c src\games\cgame\cg_flamethrower.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj /c src\games\cgame\cg_info.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_localents.c.obj /c src\games\cgame\cg_localents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj /c src\games\cgame\cg_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: _dllEntry
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-debug\qagame.dll] Error 1
```

- build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj

```
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_info.c.obj /c src\games\cgame\cg_info.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_localents.c.obj /c src\games\cgame\cg_localents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_main.c.obj /c src\games\cgame\cg_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /
clang-cl /Fobuild\windows-x86-debug\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-debug\cgame\obj\qcommon\q_math.c.obj /c src\qcommon\q_math.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D_CRT
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: _dllEntry
>>> referenced by build\windows-x86-debug\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-debug\qagame.dll] Error 1
clang-cl /Fobuild\windows-x86-debug\cgame\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /D
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
```

- build\windows-x86-debug\renderer_gl.dll

```
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdinput.c.obj /c src\third-party\jpeg-6\jdinput.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdmainct.c.obj /c src\third-party\jpeg-6\jdmainct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdmarker.c.obj /c src\third-party\jpeg-6\jdmarker.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdmaster.c.obj /c src\third-party\jpeg-6\jdmaster.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdpostct.c.obj /c src\third-party\jpeg-6\jdpostct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdsample.c.obj /c src\third-party\jpeg-6\jdsample.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jdtrans.c.obj /c src\third-party\jpeg-6\jdtrans.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jerror.c.obj /c src\third-party\jpeg-6\jerror.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jidctflt.c.obj /c src\third-party\jpeg-6\jidctflt.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jmemmgr.c.obj /c src\third-party\jpeg-6\jmemmgr.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /O
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj /c src\third-party\jpeg-6\jmemnobs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\renderer\obj\third-party\jpeg-6\jutils.c.obj /c src\third-party\jpeg-6\jutils.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmpmhm3qi0v.lnk for command line:
lld-link /nologo /DYNAMICBASE /DEBUG /DEF:src/renderer/renderer.def /dll /out:build\windows-x86-debug\renderer_gl.dll /implib:build\windows-x86-debug\renderer_gl.lib build\windows-x86-debug\renderer\obj\renderer\tr_animation.c.obj build\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj build\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj build\windows-x86-debug\renderer\obj\renderer\t
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmpmhm3qi0v.lnk
lld-link: error: undefined symbol: _CopyString
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_shader.c:1550
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj:(_ParseShader)

lld-link: error: undefined symbol: _Q_acos
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:791
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj:(_R_InitSkyTexCoords)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_sky.c:792
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj:(_R_InitSkyTexCoords)

lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:32
>>>               build\windows-x86-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_small)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\third-party\jpeg-6\jmemnobs.c:50
>>>               build\windows-x86-debug\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_large)
scons: *** [build\windows-x86-debug\renderer_gl.dll] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]

## windows-latest-x86-release

status: failure

errors: 55
warnings: 36 in 2 kinds

### errors

src\client\cl_keys.c(1731,16): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1731,25): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1731,31): error: use of undeclared identifier 'UI_GET_ACTIVE_MENU'
src\client\cl_keys.c(1746,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1746,13): error: use of undeclared identifier 'cgvm'
src\client\cl_keys.c(1746,19): error: use of undeclared identifier 'CG_EVENT_HANDLING'
src\client\cl_keys.c(1752,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1752,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1752,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1756,5): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
fatal error: too many errors emitted, stopping now [-ferror-limit=]
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1
src\sys\win32\win_qgl.c(2939,73): error: expected ')'
src\sys\win32\win_qgl.c(2939,89): error: expected expression
src\sys\win32\win_qgl.c(2940,82): error: expected ')'
src\sys\win32\win_qgl.c(2940,102): error: expected expression
src\sys\win32\win_qgl.c(2941,138): error: expected ')'
src\sys\win32\win_qgl.c(2941,168): error: expected expression
src\sys\win32\win_qgl.c(2942,70): error: expected ')'
src\sys\win32\win_qgl.c(2942,93): error: expected expression
src\sys\win32\win_qgl.c(2943,60): error: expected ')'
src\sys\win32\win_qgl.c(2943,76): error: expected expression
src\sys\win32\win_qgl.c(2944,90): error: expected ')'
src\sys\win32\win_qgl.c(2944,112): error: expected expression
src\sys\win32\win_qgl.c(2945,163): error: expected ')'
src\sys\win32\win_qgl.c(2945,180): error: expected expression
src\sys\win32\win_qgl.c(2946,87): error: expected ')'
src\sys\win32\win_qgl.c(2946,107): error: expected expression
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
src\sys\win32\win_qgl.c(2947,85): error: expected expression
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)
lld-link: error: undefined symbol: _dllEntry
scons: *** [build\windows-x86-release\qagame.dll] Error 1
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
lld-link: error: undefined symbol: _CopyString
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj:(_ParseShader)
lld-link: error: undefined symbol: _Q_acos
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj:(_R_InitSkyTexCoords)
lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by build\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_small)
>>> referenced by build\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_large)
scons: *** [build\windows-x86-release\renderer_gl.dll] Error 1

### failure context

- build\windows-x86-release\client\obj\client\cl_keys.c.obj

```
      |                                 ^
src\client\cl_keys.c(1756,14): error: use of undeclared identifier 'uivm'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                          ^~~~
src\client\cl_keys.c(1756,20): error: use of undeclared identifier 'UI_SET_ACTIVE_MENU'
 1756 |                                 VM_Call( uivm, UI_SET_ACTIVE_MENU, UIMENU_MAIN );
      |                                                ^~~~~~~~~~~~~~~~~~
src\client\cl_keys.c(1765,3): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                 ^
src\client\cl_keys.c(1765,12): error: use of undeclared identifier 'uivm'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                          ^~~~
src\client\cl_keys.c(1765,18): error: use of undeclared identifier 'UI_KEY_EVENT'
 1765 |                 VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                ^~~~~~~~~~~~
src\client\cl_keys.c(1784,41): error: use of undeclared identifier 'uivm'
 1784 |                 if ( cls.keyCatchers & KEYCATCH_UI && uivm ) {
      |                                                       ^~~~
src\client\cl_keys.c(1785,4): error: call to undeclared function 'VM_Call'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                         ^
src\client\cl_keys.c(1785,13): error: use of undeclared identifier 'uivm'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                  ^~~~
src\client\cl_keys.c(1785,19): error: use of undeclared identifier 'UI_KEY_EVENT'
 1785 |                         VM_Call( uivm, UI_KEY_EVENT, key, down );
      |                                        ^~~~~~~~~~~~
fatal error: too many errors emitted, stopping now [-ferror-limit=]
18 warnings and 20 errors generated.
scons: *** [build\windows-x86-release\client\obj\client\cl_keys.c.obj] Error 1
```

- build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj

```
      |                     ^
src\sys\win32\win_qgl.c(2946,32): note: to match this '('
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                       ^
src\sys\win32\win_qgl.c(2946,107): error: expected expression
 2946 |         qglBlendFunc = dllBlendFunc = ( void( APIENTRY * )( GLenum sfactor, GLenum dfactor  )GPA( "glBlendFunc" );
      |                                                                                                                  ^
src\sys\win32\win_qgl.c(2947,66): error: expected ')'
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                         ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2947,30): note: to match this '('
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                     ^
src\sys\win32\win_qgl.c(2947,85): error: expected expression
 2947 |         qglCallList = dllCallList = ( void( APIENTRY * )( GLuint list  )GPA( "glCallList" );
      |                                                                                            ^
src\sys\win32\win_qgl.c(2948,100): error: expected ')'
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                                                                                           ^
src\sys\win32\win_qgl.c(2895,21): note: expanded from macro 'GPA'
 2895 | #   define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )
      |                     ^
src\sys\win32\win_qgl.c(2948,32): note: to match this '('
 2948 |         qglCallLists = dllCallLists = ( void( APIENTRY * )( GLsizei n, GLenum type, const GLvoid *lists  )GPA( "glCallLists" );
      |                                       ^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_qgl.c.obj] Error 1
```

- build\windows-x86-release\qagame.dll

```
clang-cl /Fobuild\windows-x86-release\game\obj\qcommon\q_shared.c.obj /c src\qcommon\q_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_CR
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS 
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp8dqhcpnc.lnk for command line:
lld-link /nologo /DYNAMICBASE /DEF:src/games/game/game.def /dll /out:build\windows-x86-release\qagame.dll /implib:build\windows-x86-release\qagame.lib build\windows-x86-release\game\obj\games\game\ai_cast.c.obj build\windows-x86-release\game\obj\games\game\ai_cast_characters.c.obj build\windows-x86-release\game\obj\games\game\ai_cast_debug.c.obj build\windows-x86-release\game\obj\games\game\ai_cas
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp8dqhcpnc.lnk
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\game\bg_slidemove.c.obj /c src\games\game\bg_slidemove.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_consolecmds.c.obj /c src\games\cgame\cg_consolecmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_draw.c.obj /c src\games\cgame\cg_draw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_drawtools.c.obj /c src\games\cgame\cg_drawtools.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_effects.c.obj /c src\games\cgame\cg_effects.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_ents.c.obj /c src\games\cgame\cg_ents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj /c src\games\cgame\cg_event.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_flamethrower.c.obj /c src\games\cgame\cg_flamethrower.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj /c src\games\cgame\cg_info.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_localents.c.obj /c src\games\cgame\cg_localents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj /c src\games\cgame\cg_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: _dllEntry
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-release\qagame.dll] Error 1
```

- build\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj

```
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_event.c.obj /c src\games\cgame\cg_event.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_flamethrower.c.obj /c src\games\cgame\cg_flamethrower.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_info.c.obj /c src\games\cgame\cg_info.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_localents.c.obj /c src\games\cgame\cg_localents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_main.c.obj /c src\games\cgame\cg_main.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_marks.c.obj /c src\games\cgame\cg_marks.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_newDraw.c.obj /c src\games\cgame\cg_newDraw.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_particles.c.obj /c src\games\cgame\cg_particles.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_players.c.obj /c src\games\cgame\cg_players.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN
lld-link: error: undefined symbol: _PASSFLOAT
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)

lld-link: error: undefined symbol: _dllEntry
>>> referenced by build\windows-x86-release\game\obj\games\game\g_save.c.obj:(_funcList)
scons: *** [build\windows-x86-release\qagame.dll] Error 1
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIND
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WI
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOW
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_
src\games\cgame\cg_weapons.c(1142,6): error: expected '(' after 'if'
 1142 |         if !cg_drawFPGun.integer &&     // then if it didn't find the 1st person one or you are set to not use one
      |             ^
clang-cl /Fobuild\windows-x86-release\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS 
1 error generated.
scons: *** [build\windows-x86-release\cgame\obj\games\cgame\cg_weapons.c.obj] Error 1
```

- build\windows-x86-release\renderer_gl.dll

```
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdatasrc.c.obj /c src\third-party\jpeg-6\jdatasrc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdcoefct.c.obj /c src\third-party\jpeg-6\jdcoefct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdcolor.c.obj /c src\third-party\jpeg-6\jdcolor.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jddctmgr.c.obj /c src\third-party\jpeg-6\jddctmgr.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdhuff.c.obj /c src\third-party\jpeg-6\jdhuff.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdinput.c.obj /c src\third-party\jpeg-6\jdinput.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdmainct.c.obj /c src\third-party\jpeg-6\jdmainct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdmarker.c.obj /c src\third-party\jpeg-6\jdmarker.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdmaster.c.obj /c src\third-party\jpeg-6\jdmaster.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdpostct.c.obj /c src\third-party\jpeg-6\jdpostct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdsample.c.obj /c src\third-party\jpeg-6\jdsample.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jdtrans.c.obj /c src\third-party\jpeg-6\jdtrans.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jerror.c.obj /c src\third-party\jpeg-6\jerror.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jidctflt.c.obj /c src\third-party\jpeg-6\jidctflt.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemmgr.c.obj /c src\third-party\jpeg-6\jmemmgr.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj /c src\third-party\jpeg-6\jmemnobs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\renderer\obj\third-party\jpeg-6\jutils.c.obj /c src\third-party\jpeg-6\jutils.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /W
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmptmhw3l6a.lnk for command line:
lld-link /nologo /DYNAMICBASE /DEF:src/renderer/renderer.def /dll /out:build\windows-x86-release\renderer_gl.dll /implib:build\windows-x86-release\renderer_gl.lib build\windows-x86-release\renderer\obj\renderer\tr_animation.c.obj build\windows-x86-release\renderer\obj\renderer\tr_backend.c.obj build\windows-x86-release\renderer\obj\renderer\tr_bsp.c.obj build\windows-x86-release\renderer\obj\rende
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmptmhw3l6a.lnk
lld-link: error: undefined symbol: _CopyString
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj:(_ParseShader)

lld-link: error: undefined symbol: _Q_acos
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj:(_R_InitSkyTexCoords)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj:(_R_InitSkyTexCoords)

lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by build\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_small)
>>> referenced by build\windows-x86-release\renderer\obj\third-party\jpeg-6\jmemnobs.c.obj:(_jpeg_get_large)
scons: *** [build\windows-x86-release\renderer_gl.dll] Error 1
```


### warning kinds

- [18x] -invalid-source-encoding
  - src\client\cl_keys.c(197,5): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(450,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(452,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(469,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(470,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(474,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(475,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(476,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(477,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(478,7): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(535,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(541,8): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(570,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(595,9): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(607,13): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(666,16): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(667,12): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
  - src\client\cl_keys.c(680,4): warning: illegal character encoding in string literal [-Winvalid-source-encoding]
- [18x] -deprecated-copy-with-user-provided-copy
  - src\splines\math_vector.h(160,18): warning: definition of implicit copy constructor for 'idVec3' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_angles.h(63,6): warning: definition of implicit copy constructor for 'angles_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]
  - src\splines\math_quaternion.h(60,6): warning: definition of implicit copy constructor for 'quat_t' is deprecated because it has a user-provided copy assignment operator [-Wdeprecated-copy-with-user-provided-copy]

