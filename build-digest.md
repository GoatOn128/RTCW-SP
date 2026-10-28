# Build digest

commit: f8bf472d596d

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: cancelled
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game: failure
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: cancelled

## ubuntu-latest-x64-debug-

status: failure

errors: 18
warnings: 38 in 14 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/games/botlib/be_ai_weap.cpp:91:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:93:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:94:14: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:95:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:96:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:97:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:98:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:99:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:100:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build/linux-x64-debug/game/obj/games/game/g_save.cpp.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o

```
src/renderer/tr_shade_calc.cpp:669:2: note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
1 warning generated.
src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
2 warnings generated.
Compiling 'src/renderer/tr_world.cpp'
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling 'src/splines/math_matrix.cpp'
1 error generated.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```

- build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.cpp.o

```
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling 'src/games/botlib/be_ea.cpp'
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
  101 |         {"detonation", PROJECTILE_OFS( detonation ), FT_FLOAT}, //time before projectile explodes after fire pressed
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
  102 |         {"bounce", PROJECTILE_OFS( bounce ), FT_FLOAT},         //amount the projectile bounces
      |                    ^~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
  103 |         {"bouncefric", PROJECTILE_OFS( bouncefric ), FT_FLOAT}, //amount the bounce decreases per bounce
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
  104 |         {"bouncestop", PROJECTILE_OFS( bouncestop ), FT_FLOAT}, //minimum bounce value before bouncing stops
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
13 errors generated.
scons: *** [build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
```

- build/linux-x64-debug/game/obj/games/game/g_save.cpp.o

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src/games/game/g_client.cpp:1608:9: note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src/games/game/g_main.cpp'
Compiling 'src/games/game/g_mem.cpp'
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
Compiling 'src/games/game/g_script.cpp'
In file included from src/games/game/g_save.cpp:252:
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src/games/game/g_func_decs.h:349:21: note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src/qcommon/q_shared.h:667:17: note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
Compiling 'src/games/game/g_script_actions.cpp'
Compiling 'src/games/game/g_session.cpp'
1 error generated.
Compiling 'src/games/game/g_spawn.cpp'
scons: *** [build/linux-x64-debug/game/obj/games/game/g_save.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x64-release-

status: failure

errors: 18
warnings: 39 in 15 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/games/botlib/be_ai_weap.cpp:91:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:93:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:94:14: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:95:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:96:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:97:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:98:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:99:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:100:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o

```
      |         ^
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
1 warning generated.
Compiling 'src/renderer/tr_surface.cpp'
src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src/renderer/tr_vfx.cpp'
Compiling 'src/renderer/tr_world.cpp'
2 warnings generated.
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
Compiling 'src/splines/math_matrix.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o

```
  100 |         {"push", PROJECTILE_OFS( push ), FT_FLOAT},                 //amount a player is pushed away from the projectile impact
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
  101 |         {"detonation", PROJECTILE_OFS( detonation ), FT_FLOAT}, //time before projectile explodes after fire pressed
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
  102 |         {"bounce", PROJECTILE_OFS( bounce ), FT_FLOAT},         //amount the projectile bounces
      |                    ^~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
  103 |         {"bouncefric", PROJECTILE_OFS( bouncefric ), FT_FLOAT}, //amount the bounce decreases per bounce
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
  104 |         {"bouncestop", PROJECTILE_OFS( bouncestop ), FT_FLOAT}, //minimum bounce value before bouncing stops
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
13 errors generated.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/g_save.cpp.o

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^               ~
src/games/game/g_client.cpp:1608:9: note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src/games/game/g_client.cpp:1608:9: note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src/games/game/g_items.cpp'
Compiling 'src/games/game/g_main.cpp'
Compiling 'src/games/game/g_mem.cpp'
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
In file included from src/games/game/g_save.cpp:252:
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src/games/game/g_func_decs.h:349:21: note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src/qcommon/q_shared.h:667:17: note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x64-release-game

status: failure

errors: 18
warnings: 39 in 15 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/games/botlib/be_ai_weap.cpp:91:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:93:12: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:94:14: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:95:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:96:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:97:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:98:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:99:16: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:100:11: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o

```
src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
1 warning generated.
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
Compiling 'src/renderer/tr_world.cpp'
2 warnings generated.
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
Compiling 'src/splines/math_angles.cpp'
Compiling 'src/splines/math_matrix.cpp'
Compiling 'src/splines/math_quaternion.cpp'
Compiling 'src/splines/math_vector.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling 'src/splines/q_parse.cpp'
1 error generated.
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```

- build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o

```
  100 |         {"push", PROJECTILE_OFS( push ), FT_FLOAT},                 //amount a player is pushed away from the projectile impact
      |                  ^~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:101:17: error: cast from pointer to smaller type 'int' loses information
  101 |         {"detonation", PROJECTILE_OFS( detonation ), FT_FLOAT}, //time before projectile explodes after fire pressed
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:102:13: error: cast from pointer to smaller type 'int' loses information
  102 |         {"bounce", PROJECTILE_OFS( bounce ), FT_FLOAT},         //amount the projectile bounces
      |                    ^~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:103:17: error: cast from pointer to smaller type 'int' loses information
  103 |         {"bouncefric", PROJECTILE_OFS( bouncefric ), FT_FLOAT}, //amount the bounce decreases per bounce
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:104:17: error: cast from pointer to smaller type 'int' loses information
  104 |         {"bouncestop", PROJECTILE_OFS( bouncestop ), FT_FLOAT}, //minimum bounce value before bouncing stops
      |                        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
src/games/botlib/be_ai_weap.cpp:58:29: note: expanded from macro 'PROJECTILE_OFS'
   58 | #define PROJECTILE_OFS( x ) (int)&( ( (projectileinfo_t *)0 )->x )
      |                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
13 errors generated.
scons: *** [build/linux-x64-release/client/obj/games/botlib/be_ai_weap.cpp.o] Error 1
```

- build/linux-x64-release/game/obj/games/game/g_save.cpp.o

```
      |                              ^               ~
src/games/game/g_client.cpp:1608:9: note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src/games/game/g_client.cpp:1608:9: note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
Compiling 'src/games/game/g_combat.cpp'
2 warnings generated.
Compiling 'src/games/game/g_items.cpp'
Compiling 'src/games/game/g_main.cpp'
Compiling 'src/games/game/g_mem.cpp'
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
In file included from src/games/game/g_save.cpp:252:
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src/games/game/g_func_decs.h:349:21: note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src/qcommon/q_shared.h:667:17: note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build/linux-x64-release/game/obj/games/game/g_save.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x86-debug-

status: failure

errors: 4
warnings: 38 in 14 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build/linux-x86-debug/game/obj/games/game/g_save.cpp.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o

```
src/renderer/tr_shade_calc.cpp:669:2: note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
Compiling 'src/renderer/tr_sky.cpp'
1 warning generated.
src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
2 warnings generated.
Compiling 'src/renderer/tr_world.cpp'
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling 'src/splines/math_angles.cpp'
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```

- build/linux-x86-debug/game/obj/games/game/g_save.cpp.o

```
      |                              ^               ~
src/games/game/g_client.cpp:1608:9: note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src/games/game/g_client.cpp:1608:9: note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src/games/game/g_main.cpp'
Compiling 'src/games/game/g_mem.cpp'
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
Compiling 'src/games/game/g_script.cpp'
In file included from src/games/game/g_save.cpp:252:
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src/games/game/g_func_decs.h:349:21: note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src/qcommon/q_shared.h:667:17: note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
Compiling 'src/games/game/g_script_actions.cpp'
1 error generated.
scons: *** [build/linux-x86-debug/game/obj/games/game/g_save.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## ubuntu-latest-x86-release-

status: cancelled

errors: 4
warnings: 39 in 15 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build/linux-x86-release/game/obj/games/game/g_save.cpp.o] Error 1

### failure context

- build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o

```
      |         ^           ~
src/renderer/tr_shade_calc.cpp:669:2: note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src/renderer/tr_sky.cpp'
1 warning generated.
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
2 warnings generated.
Compiling 'src/renderer/tr_world.cpp'
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```

- build/linux-x86-release/game/obj/games/game/g_save.cpp.o

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^               ~
src/games/game/g_client.cpp:1608:9: note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src/games/game/g_client.cpp:1608:9: note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src/games/game/g_items.cpp'
Compiling 'src/games/game/g_main.cpp'
Compiling 'src/games/game/g_mem.cpp'
Compiling 'src/games/game/g_misc.cpp'
Compiling 'src/games/game/g_missile.cpp'
Compiling 'src/games/game/g_mover.cpp'
Compiling 'src/games/game/g_props.cpp'
Compiling 'src/games/game/g_save.cpp'
In file included from src/games/game/g_save.cpp:252:
src/games/game/g_funcs.h:349:16: error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src/games/game/g_func_decs.h:349:21: note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src/qcommon/q_shared.h:667:17: note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build/linux-x86-release/game/obj/games/game/g_save.cpp.o] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src/client/snd_dma.cpp:1857:19: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2171:11: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/client/snd_dma.cpp:2487:15: warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/game/ai/ai_script_actions_combat.cpp:533:45: warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_drawtools.cpp:148:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_ents.cpp:397:14: warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:948:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:960:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_servercmds.cpp:972:8: warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/cgame/cg_weapons.cpp:1005:10: warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1449:7: warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src/games/ui/ui_main.cpp:1507:8: warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src/qcommon/cvar.cpp:764:28: warning: 'memset' call operates on objects of type 'cvar_t' (aka 'cvar_s') while the size is based on a different type 'cvar_t *' (aka 'cvar_s *') [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:807:29: warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src/games/game/bg_animation.cpp:999:32: warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src/games/game/ai/ai_system.cpp:458:33: warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src/games/ui/ui_players.cpp:773:25: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1615:21: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src/games/ui/ui_players.cpp:1628:20: warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src/renderer/tr_image.cpp:3346:59: warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src/renderer/tr_shade_calc.cpp:679:2: warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src/renderer/tr_shader.cpp:986:23: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src/renderer/tr_shader.cpp:1898:26: warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src/games/botlib/l_precomp.cpp:2441:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src/games/botlib/l_precomp.cpp:2547:31: warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src/games/game/bg_animation.cpp:807:27: warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src/games/game/g_client.cpp:1531:8: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src/games/game/g_client.cpp:1608:9: warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src/games/cgame/cg_view.cpp:874:11: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src/games/cgame/cg_view.cpp:1386:12: warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src/client/cl_main.cpp:2838:25: warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src/qcommon/common.cpp:1799:2: warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src/qcommon/unzip.cpp:2066:45: warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src/games/cgame/cg_newDraw.cpp:1830:24: warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src/games/cgame/fx/FxScheduler.cpp:386:12: warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## uncrustify

status: success

errors: 1
warnings: 0 in 0 kinds

### errors

UNCRUSTIFY_FAILED: src/games/game/bg_pmove.cpp

### failure context


### warning kinds

## windows-latest-x64-debug-

status: failure

errors: 13
warnings: 38 in 14 kinds

### errors

src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj] Error 1
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:47
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:75
lld-link: error: undefined symbol: Com_Dealloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:83
lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:552
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:556
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:565
>>> referenced 27 more times
scons: *** [bin\WolfSP_x64.exe] Error 1

### failure context

- build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src\games\game\g_combat.cpp'
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
Compiling 'src\games\game\g_script_actions.cpp'
1 error generated.
scons: *** [build\windows-x64-debug\game\obj\games\game\g_save.cpp.obj] Error 1
```

- bin\WolfSP_x64.exe

```
Compiling 'src\games\cgame\cg_effects.cpp'
1 warning generated.
Compiling 'src\games\cgame\cg_ents.cpp'
src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  397 |         if ( !cent->dl_stylestring ) {
      |              ~~~~~~~^~~~~~~~~~~~~~
Compiling 'src\games\cgame\cg_event.cpp'
1 warning generated.
Compiling 'src\games\cgame\cg_fx.cpp'
Compiling 'src\games\cgame\cg_fx_entities.cpp'
Compiling 'src\games\cgame\cg_fx_flame.cpp'
Compiling 'src\games\cgame\cg_fx_marks.cpp'
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:47
>>>               build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:75
>>>               build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: Com_Dealloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\q_shared.cpp:83
>>>               build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:552
>>>               build\windows-x64-debug\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:556
>>>               build\windows-x64-debug\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\splines\splines.cpp:565
>>>               build\windows-x64-debug\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 27 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-

status: cancelled

errors: 10
warnings: 39 in 15 kinds

### errors

src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
lld-link: error: undefined symbol: Com_Dealloc
lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1

### failure context

- build\windows-x64-release\game\obj\games\game\g_save.cpp.obj

```
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
Compiling 'src\games\game\g_cmds.cpp'
2 warnings generated.
Compiling 'src\games\game\g_combat.cpp'
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Linking 'bin\WolfSP_x64.exe'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
```

- bin\WolfSP_x64.exe

```
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
Compiling 'src\games\game\g_script_actions.cpp'
Compiling 'src\games\game\g_session.cpp'
Compiling 'src\games\game\g_spawn.cpp'
Compiling 'src\games\game\g_svcmds.cpp'
Compiling 'src\games\game\g_syscalls.cpp'
Compiling 'src\games\game\g_target.cpp'
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: Com_Dealloc
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-cgame

status: cancelled

errors: 10
warnings: 39 in 15 kinds

### errors

lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
lld-link: error: undefined symbol: Com_Dealloc
lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1

### failure context

- bin\WolfSP_x64.exe

```
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src\games\game\g_combat.cpp'
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: Com_Dealloc
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
```

- build\windows-x64-release\game\obj\games\game\g_save.cpp.obj

```
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: Com_Dealloc
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
Compiling 'src\games\game\g_script_actions.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-game

status: failure

errors: 2
warnings: 39 in 15 kinds

### errors

src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1

### failure context

- build\windows-x64-release\game\obj\games\game\g_save.cpp.obj

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^               ~
src\games\game\g_client.cpp(1608,9): note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x64-release-ui

status: failure

errors: 10
warnings: 39 in 15 kinds

### errors

src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
lld-link: error: undefined symbol: Com_Dealloc
lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1

### failure context

- build\windows-x64-release\game\obj\games\game\g_save.cpp.obj

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
Compiling 'src\games\game\g_cmds.cpp'
2 warnings generated.
Compiling 'src\games\game\g_combat.cpp'
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x64-release\game\obj\games\game\g_save.cpp.obj] Error 1
```

- bin\WolfSP_x64.exe

```
      |                 ~~~~~~~~~~             ^~~~~~~~~~
src\games\game\ai\ai_system.cpp(458,33): note: did you mean to dereference the argument to 'sizeof' (and multiply it by the number of elements)?
  458 |         memset( caststates, 0, sizeof( caststates ) );
      |                                        ^~~~~~~~~~
Compiling 'src\games\game\ai\ai_targeting.cpp'
1 warning generated.
Compiling 'src\games\game\ai\ai_weapons.cpp'
Compiling 'src\games\game\ai\fsm\ai_ability.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_cover.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_doors.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_evasion.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_grenades.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_idle.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_investigate.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_mounted.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_pursuit.cpp'
lld-link: error: undefined symbol: Com_Allocate
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(void __cdecl Com_InitGrowList(struct growList_t *, int))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: Com_Dealloc
Compiling 'src\games\game\ai\fsm\ai_boss_heinrich.cpp'
>>> referenced by build\windows-x64-release\client\obj\splines\q_shared.cpp.obj:(int __cdecl Com_AddToGrowList(struct growList_t *, void *))

lld-link: error: undefined symbol: char * __cdecl va(char *, ...)
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced by build\windows-x64-release\client\obj\splines\splines.cpp.obj:(public: bool __cdecl idCameraDef::getCameraInfo(long, class idVec3 &, class idVec3 &, float *))
>>> referenced 26 more times
scons: *** [bin\WolfSP_x64.exe] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x86-debug-

status: failure

errors: 11
warnings: 39 in 15 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x86-debug\game\obj\games\game\g_save.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj

```
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
1 warning generated.
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
Compiling 'src\client\snd_wavelet.cpp'
src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1857 |                         if ( ss && ss->loop ) {
      |                                 ~~ ~~~~^~~~
src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2171 |         if ( ss->loop && loop ) {
      |              ~~~~^~~~ ~~
src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2487 |                                         if ( ss->loop && ss->loop[0] ) {
      |                                              ~~~~^~~~ ~~
3 warnings generated.
Compiling 'src\qcommon\cm_load.cpp'
Compiling 'src\qcommon\cm_patch.cpp'
src\client\snd_mix.cpp(89,23): error: unknown token in expression
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                     ^
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                            ^
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                  ^
3 errors generated.
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
  679 |         invModulate[3] = 255 - backEnd.currentEntity->e.shaderRGBA[3];  // this trashes alpha, but the AGEN block fixes it
      |         ^           ~
src\renderer\tr_shade_calc.cpp(669,2): note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
1 warning generated.
src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\game\obj\games\game\g_save.cpp.obj

```
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
2 warnings generated.
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Linking 'build\windows-x86-debug\extractfuncs.exe'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
Compiling 'src\games\game\g_script.cpp'
Compiling 'src\games\game\g_script_actions.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x86-debug\game\obj\games\game\g_save.cpp.obj] Error 1
```

- build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\game\ai\fsm\ai_behavior_cover.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_doors.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_evasion.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_grenades.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_idle.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_investigate.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_mounted.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_pursuit.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_heinrich.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_helga.cpp'
Compiling 'src\games\game\ai\fsm\ai_combat.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_blackguard.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_loper.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_reject.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_stimsoldier.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_warzombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_zombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_legacy.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_machine.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_animation.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
Compiling 'src\games\game\bg_misc.cpp'
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj

```
src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
 1386 |                                         fov_x = fov_x;
      |                                         ~~~~~ ^ ~~~~~
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
2 warnings generated.
Compiling 'src\games\cgame\fx\FxSystem.cpp'
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
src\games\cgame\fx\FxScheduler.cpp(386,12): note: explicitly cast the pointer to silence this warning
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
      |                                 (void*)
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
1 warning generated.
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\ui\ui_players.cpp'
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\games\ui\ui_syscalls.cpp'
src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1449 |         if ( levelname && levelname[0] != 0 ) {
      |              ^~~~~~~~~ ~~
src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1507 |                 if ( backgroundcolor ) {
      |                 ~~   ^~~~~~~~~~~~~~~
src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  773 |         if ( pi->pendingWeapon != -1 && dp_realtime > pi->weaponTimer ) {
      |              ~~~~~~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
 1615 |                 if ( weaponNumber != -1 ) {
      |                      ~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
 1628 |         if ( weaponNumber == -1 ) {
      |              ~~~~~~~~~~~~ ^  ~~
3 warnings generated.
Compiling 'src\games\ui\ui_util.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
2 warnings generated.
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

## windows-latest-x86-release-

status: cancelled

errors: 11
warnings: 40 in 16 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj] Error 1
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
scons: *** [build\windows-x86-release\game\obj\games\game\g_save.cpp.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\snd_mix.cpp.obj

```
      |                                              sizeof(info) - strlen(info) - 1
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
1 warning generated.
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1857 |                         if ( ss && ss->loop ) {
      |                                 ~~ ~~~~^~~~
src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2171 |         if ( ss->loop && loop ) {
      |              ~~~~^~~~ ~~
src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
 2487 |                                         if ( ss->loop && ss->loop[0] ) {
      |                                              ~~~~^~~~ ~~
Compiling 'src\client\snd_wavelet.cpp'
src\client\snd_mix.cpp(89,23): error: unknown token in expression
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                     ^
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                            ^
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
   89 |                 mov ecx,ds:dword ptr[snd_linear_count]
      |                                  ^
3 errors generated.
Compiling 'src\qcommon\cm_load.cpp'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
  679 |         invModulate[3] = 255 - backEnd.currentEntity->e.shaderRGBA[3];  // this trashes alpha, but the AGEN block fixes it
      |         ^           ~
src\renderer\tr_shade_calc.cpp(669,2): note: array 'invModulate' declared here
  669 |         unsigned char invModulate[3];
      |         ^
src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  986 |         if ( stage->alphaGen == CGEN_IDENTITY ) {
      |              ~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
Compiling 'src\renderer\tr_sky.cpp'
src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
 1898 |         if ( stages[0].alphaGen == CGEN_WAVEFORM ) {
      |              ~~~~~~~~~~~~~~~~~~ ^  ~~~~~~~~~~~~~
1 warning generated.
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
2 warnings generated.
Compiling 'src\renderer\tr_world.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\game\obj\games\game\g_save.cpp.obj

```
src\games\game\g_client.cpp(1608,9): note: add parentheses after the '!' to evaluate the bitwise operator first
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                               (                          )
src\games\game\g_client.cpp(1608,9): note: add parentheses around left hand side expression to silence this warning
 1608 |                         if ( !ent->r.svFlags & SVF_CASTAI ) {
      |                              ^
      |                              (              )
Compiling 'src\games\game\g_cmds.cpp'
2 warnings generated.
Compiling 'src\games\game\g_combat.cpp'
Compiling 'src\games\game\g_items.cpp'
Compiling 'src\games\game\g_main.cpp'
Compiling 'src\games\game\g_mem.cpp'
Compiling 'src\games\game\g_misc.cpp'
Compiling 'src\games\game\g_missile.cpp'
Compiling 'src\games\game\g_mover.cpp'
Compiling 'src\games\game\g_props.cpp'
Compiling 'src\games\game\g_save.cpp'
In file included from src\games\game\g_save.cpp:252:
src\games\game\g_funcs.h(349,16): error: address of overloaded function 'va' does not match required type 'unsigned char'
  349 | {"va", (byte *)va},
      |                ^~
src\games\game\g_func_decs.h(349,21): note: candidate function
  349 | extern char * QDECL va( char * format, ... ) ;
      |                     ^
src\qcommon\q_shared.h(667,17): note: candidate function
  667 | char    * QDECL va( const char *format, ... );
      |                 ^
1 error generated.
scons: *** [build\windows-x86-release\game\obj\games\game\g_save.cpp.obj] Error 1
```

- build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj

```
1 warning generated.
Compiling 'src\games\game\ai\fsm\ai_behavior_doors.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_evasion.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_grenades.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_idle.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_investigate.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_mounted.cpp'
Compiling 'src\games\game\ai\fsm\ai_behavior_pursuit.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_heinrich.cpp'
Compiling 'src\games\game\ai\fsm\ai_boss_helga.cpp'
Compiling 'src\games\game\ai\fsm\ai_combat.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_blackguard.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_loper.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_reject.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_stimsoldier.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_warzombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_monster_zombie.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_legacy.cpp'
Compiling 'src\games\game\ai\fsm\ai_state_machine.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_animation.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
Compiling 'src\games\game\bg_misc.cpp'
1 error generated.
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj

```
      |                                         ~~~~~ ^ ~~~~~
src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1005 |         if ( ( !comppath || !cg_drawFPGun.integer ) &&     // then if it didn't find the 1st person one or you are set to not use one
      |                ~^~~~~~~~
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
2 warnings generated.
Compiling 'src\games\cgame\fx\FxSystem.cpp'
src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
src\games\cgame\fx\FxScheduler.cpp(386,12): note: explicitly cast the pointer to silence this warning
  386 |                         memset( effect, 0, sizeof( SEffectTemplate ) );
      |                                 ^
      |                                 (void*)
1 warning generated.
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
1 warning generated.
Compiling 'src\games\ui\ui_shared.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_misc.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\ui\ui_main.cpp'
Compiling 'src\games\ui\ui_players.cpp'
src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  773 |         if ( pi->pendingWeapon != -1 && dp_realtime > pi->weaponTimer ) {
      |              ~~~~~~~~~~~~~~~~~ ^  ~~
Compiling 'src\games\ui\ui_shared.cpp'
src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1449 |         if ( levelname && levelname[0] != 0 ) {
      |              ^~~~~~~~~ ~~
src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
 1507 |                 if ( backgroundcolor ) {
      |                 ~~   ^~~~~~~~~~~~~~~
src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
 1615 |                 if ( weaponNumber != -1 ) {
      |                      ~~~~~~~~~~~~ ^  ~~
src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
 1628 |         if ( weaponNumber == -1 ) {
      |              ~~~~~~~~~~~~ ^  ~~
3 warnings generated.
Compiling 'src\games\ui\ui_syscalls.cpp'
Compiling 'src\games\ui\ui_util.cpp'
Compiling 'src\qcommon\q_math.cpp'
Compiling 'src\qcommon\q_shared.cpp'
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
  745 |         static int bops_initialized;
      |         ^
src\qcommon\q_math.cpp(744,13): note: attribute is here
  744 | __declspec( naked ) int BoxOnPlaneSide( vec3_t emins, vec3_t emaxs, struct cplane_s *p ) {
      |             ^
1 error generated.
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1
```


### warning kinds

- [12x] -pointer-bool-conversion
  - src\client\snd_dma.cpp(1857,19): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2171,11): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\client\snd_dma.cpp(2487,15): warning: address of array 'ss->loop' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\game\ai\ai_script_actions_combat.cpp(533,45): warning: address of array 'g_entities[cs->entityNum].client->ps.weapons' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_drawtools.cpp(148,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_ents.cpp(397,14): warning: address of array 'cent->dl_stylestring' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(948,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(960,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_servercmds.cpp(972,8): warning: address of array 'text' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\cgame\cg_weapons.cpp(1005,10): warning: address of array 'comppath' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1449,7): warning: address of array 'levelname' will always evaluate to 'true' [-Wpointer-bool-conversion]
  - src\games\ui\ui_main.cpp(1507,8): warning: address of array 'backgroundcolor' will always evaluate to 'true' [-Wpointer-bool-conversion]
- [6x] -sizeof-pointer-memaccess
  - src\qcommon\cvar.cpp(764,28): warning: 'memset' call operates on objects of type 'cvar_t' (aka 'struct cvar_s') while the size is based on a different type 'cvar_t *' (aka 'struct cvar_s *') [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(807,29): warning: 'memset' call operates on objects of type 'int' while the size is based on a different type 'int *' [-Wsizeof-pointer-memaccess]
  - src\games\game\bg_animation.cpp(999,32): warning: 'memset' call operates on objects of type 'animScriptCommand_t' while the size is based on a different type 'animScriptCommand_t *' [-Wsizeof-pointer-memaccess]
  - src\games\game\ai\ai_system.cpp(458,33): warning: 'memset' call operates on objects of type 'cast_state_t' (aka 'struct cast_state_s') while the size is based on a different type 'cast_state_t *' (aka 'struct cast_state_s *') [-Wsizeof-pointer-memaccess]
- [3x] -tautological-constant-out-of-range-compare
  - src\games\ui\ui_players.cpp(773,25): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1615,21): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always true [-Wtautological-constant-out-of-range-compare]
  - src\games\ui\ui_players.cpp(1628,20): warning: result of comparison of constant -1 with expression of type 'weapon_t' is always false [-Wtautological-constant-out-of-range-compare]
- [2x] -array-bounds
  - src\renderer\tr_image.cpp(3346,59): warning: array index 3 is past the end of the array (that has type 'int[3]') [-Warray-bounds]
  - src\renderer\tr_shade_calc.cpp(679,2): warning: array index 3 is past the end of the array (that has type 'unsigned char[3]') [-Warray-bounds]
- [2x] -enum-compare
  - src\renderer\tr_shader.cpp(986,23): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
  - src\renderer\tr_shader.cpp(1898,26): warning: comparison of different enumeration types ('alphaGen_t' and 'colorGen_t') [-Wenum-compare]
- [2x] -format
  - src\games\botlib\l_precomp.cpp(2441,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
  - src\games\botlib\l_precomp.cpp(2547,31): warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
- [2x] -sizeof-array-argument
  - src\games\game\bg_animation.cpp(807,27): warning: sizeof on array function parameter will return size of 'int *' instead of 'int[2]' [-Wsizeof-array-argument]
- [2x] -logical-not-parentheses
  - src\games\game\g_client.cpp(1531,8): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
  - src\games\game\g_client.cpp(1608,9): warning: logical not is only applied to the left hand side of this bitwise operator [-Wlogical-not-parentheses]
- [2x] -self-assign
  - src\games\cgame\cg_view.cpp(874,11): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
  - src\games\cgame\cg_view.cpp(1386,12): warning: explicitly assigning value of variable of type 'float' to itself [-Wself-assign]
- [1x] -strncat-size
  - src\client\cl_main.cpp(2838,25): warning: the value of the size argument in 'strncat' is too large, might lead to a buffer overflow [-Wstrncat-size]
- [1x] -null-dereference
  - src\qcommon\common.cpp(1799,2): warning: indirection of non-volatile null pointer will be deleted, not trap [-Wnull-dereference]
- [1x] -parentheses-equality
  - src\qcommon\unzip.cpp(2066,45): warning: equality comparison with extraneous parentheses [-Wparentheses-equality]
- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]
- [1x] -char-subscripts
  - src\games\cgame\cg_newDraw.cpp(1830,24): warning: array subscript is of type 'char' [-Wchar-subscripts]
- [1x] -nontrivial-memcall
  - src\games\cgame\fx\FxScheduler.cpp(386,12): warning: first argument in call to 'memset' is a pointer to non-trivially copyable type 'SEffectTemplate' [-Wnontrivial-memcall]

