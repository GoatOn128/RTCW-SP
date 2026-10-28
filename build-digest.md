# Build digest

commit: 9cf6a35fa544

- ubuntu-latest-x64-debug-: failure
- ubuntu-latest-x64-release-: failure
- ubuntu-latest-x64-release-game: failure
- ubuntu-latest-x86-debug-: failure
- ubuntu-latest-x86-release-: failure
- uncrustify: success
- windows-latest-x64-debug-: success
- windows-latest-x64-release-: cancelled
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game: success
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1

### failure context

- build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o

```
Compiling 'src/renderer/tr_marks.cpp'
Compiling 'src/renderer/tr_mesh.cpp'
Compiling 'src/renderer/tr_cmesh.cpp'
Compiling 'src/renderer/tr_model.cpp'
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
Compiling 'src/renderer/tr_scene.cpp'
Compiling 'src/renderer/tr_shade.cpp'
Compiling 'src/renderer/tr_shade_calc.cpp'
Compiling 'src/renderer/tr_shader.cpp'
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
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
1 error generated.
scons: *** [build/linux-x64-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x64-release-

status: failure

errors: 2
warnings: 1 in 1 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o

```
Compiling 'src/renderer/tr_main.cpp'
Compiling 'src/renderer/tr_marks.cpp'
Compiling 'src/renderer/tr_mesh.cpp'
Compiling 'src/renderer/tr_cmesh.cpp'
Compiling 'src/renderer/tr_model.cpp'
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
Compiling 'src/renderer/tr_scene.cpp'
Compiling 'src/renderer/tr_shade.cpp'
Compiling 'src/renderer/tr_shade_calc.cpp'
Compiling 'src/renderer/tr_shader.cpp'
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
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
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```


### warning kinds

- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x64-release-game

status: failure

errors: 2
warnings: 1 in 1 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1

### failure context

- build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o

```
Compiling 'src/renderer/tr_mesh.cpp'
Compiling 'src/renderer/tr_cmesh.cpp'
Compiling 'src/renderer/tr_model.cpp'
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
Compiling 'src/renderer/tr_scene.cpp'
Compiling 'src/renderer/tr_shade.cpp'
Compiling 'src/renderer/tr_shade_calc.cpp'
Compiling 'src/renderer/tr_shader.cpp'
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
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
scons: *** [build/linux-x64-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```


### warning kinds

- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## ubuntu-latest-x86-debug-

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1

### failure context

- build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o

```
Compiling 'src/renderer/tr_main.cpp'
Compiling 'src/renderer/tr_marks.cpp'
Compiling 'src/renderer/tr_mesh.cpp'
Compiling 'src/renderer/tr_cmesh.cpp'
Compiling 'src/renderer/tr_model.cpp'
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
Compiling 'src/renderer/tr_scene.cpp'
Compiling 'src/renderer/tr_shade.cpp'
Compiling 'src/renderer/tr_shade_calc.cpp'
Compiling 'src/renderer/tr_shader.cpp'
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
Compiling 'src/renderer/tr_world.cpp'
Compiling 'src/qcommon/q_shared.cpp'
Compiling 'src/qcommon/q_math.cpp'
Compiling 'src/sys/unix/unix_main.cpp'
Compiling 'src/sys/unix/unix_net.cpp'
Compiling 'src/sys/unix/unix_shared.cpp'
Compiling 'src/sys/unix/linux_common.cpp'
Compiling 'src/sys/unix/linux_glimp.cpp'
Compiling 'src/sys/unix/linux_joystick.cpp'
src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
   77 | #include <X11/extensions/Xxf86vmode.h>
      |          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Compiling 'src/sys/unix/linux_qgl.cpp'
Compiling 'src/sys/unix/linux_snd.cpp'
1 error generated.
scons: *** [build/linux-x86-debug/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```


### warning kinds

## ubuntu-latest-x86-release-

status: failure

errors: 2
warnings: 1 in 1 kinds

### errors

src/sys/unix/linux_glimp.cpp:77:10: fatal error: 'X11/extensions/Xxf86vmode.h' file not found
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1

### failure context

- build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o

```
Compiling 'src/renderer/tr_marks.cpp'
Compiling 'src/renderer/tr_mesh.cpp'
Compiling 'src/renderer/tr_cmesh.cpp'
Compiling 'src/renderer/tr_model.cpp'
Compiling 'src/renderer/tr_noise.cpp'
Compiling 'src/renderer/tr_renderprog.cpp'
Compiling 'src/renderer/tr_scene.cpp'
Compiling 'src/renderer/tr_shade.cpp'
Compiling 'src/renderer/tr_shade_calc.cpp'
Compiling 'src/renderer/tr_shader.cpp'
Compiling 'src/renderer/tr_shadows.cpp'
Compiling 'src/renderer/tr_sky.cpp'
Compiling 'src/renderer/tr_surface.cpp'
Compiling 'src/renderer/tr_vfx.cpp'
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
1 error generated.
scons: *** [build/linux-x86-release/client/obj/sys/unix/linux_glimp.cpp.o] Error 1
```


### warning kinds

- [1x] -unused-value
  - src/splines/splines.cpp:580:17: warning: expression result unused [-Wunused-value]

## uncrustify

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-debug-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-

status: cancelled

errors: 0
warnings: 1 in 1 kinds

### errors


### failure context


### warning kinds

- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-cgame

status: cancelled

errors: 0
warnings: 1 in 1 kinds

### errors


### failure context


### warning kinds

- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-game

status: success

errors: 0
warnings: 1 in 1 kinds

### errors


### failure context


### warning kinds

- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x64-release-ui

status: cancelled

errors: 0
warnings: 1 in 1 kinds

### errors


### failure context


### warning kinds

- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

## windows-latest-x86-debug-

status: failure

errors: 9
warnings: 1 in 1 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\client\snd_mix.cpp.obj

```
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src\client\cl_cgame.cpp'
Compiling 'src\client\cl_cin.cpp'
Compiling 'src\client\cl_console.cpp'
Compiling 'src\client\cl_input.cpp'
Compiling 'src\client\cl_keys.cpp'
Compiling 'src\client\cl_main.cpp'
Compiling 'src\client\cl_net_chan.cpp'
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
Compiling 'src\client\snd_wavelet.cpp'
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
Compiling 'src\renderer\tr_flares.cpp'
Compiling 'src\renderer\tr_font.cpp'
Compiling 'src\renderer\tr_image.cpp'
Compiling 'src\renderer\tr_init.cpp'
Compiling 'src\renderer\tr_light.cpp'
Compiling 'src\renderer\tr_main.cpp'
Compiling 'src\renderer\tr_marks.cpp'
Compiling 'src\renderer\tr_mesh.cpp'
Compiling 'src\renderer\tr_cmesh.cpp'
Compiling 'src\renderer\tr_model.cpp'
Compiling 'src\renderer\tr_noise.cpp'
Compiling 'src\renderer\tr_renderprog.cpp'
Compiling 'src\renderer\tr_scene.cpp'
Compiling 'src\renderer\tr_shade.cpp'
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
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

- build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\game\ai\fsm\ai_ability.cpp'
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
scons: *** [build\windows-x86-debug\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-debug\cgame\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\cgame\cg_fx_particles.cpp'
Compiling 'src\games\cgame\cg_fx_trails.cpp'
Compiling 'src\games\cgame\cg_info.cpp'
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
Compiling 'src\games\cgame\fx\FxSystem.cpp'
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
Compiling 'src\qcommon\q_shared.cpp'
Compiling 'src\games\game\bg_misc.cpp'
Compiling 'src\games\ui\ui_atoms.cpp'
Compiling 'src\games\ui\ui_gameinfo.cpp'
Compiling 'src\games\ui\ui_main.cpp'
Compiling 'src\games\ui\ui_players.cpp'
Compiling 'src\games\ui\ui_shared.cpp'
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
scons: *** [build\windows-x86-debug\ui\obj\qcommon\q_math.cpp.obj] Error 1
```


### warning kinds

- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]

## windows-latest-x86-release-

status: failure

errors: 9
warnings: 2 in 2 kinds

### errors

src\client\snd_mix.cpp(89,23): error: unknown token in expression
src\client\snd_mix.cpp(89,14): error: use of undeclared label 'dword'
src\client\snd_mix.cpp(89,20): error: use of undeclared label 'ptr'
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
src\qcommon\q_math.cpp(745,2): error: non-ASM statement in naked function is not supported
scons: *** [build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj] Error 1
scons: *** [build\windows-x86-release\ui\obj\qcommon\q_math.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\client\snd_mix.cpp.obj

```
Installing collected packages: scons
Successfully installed scons-4.11.1
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
Compiling 'src\client\cl_cgame.cpp'
Compiling 'src\client\cl_cin.cpp'
Compiling 'src\client\cl_console.cpp'
Compiling 'src\client\cl_input.cpp'
Compiling 'src\client\cl_keys.cpp'
Compiling 'src\client\cl_main.cpp'
Compiling 'src\client\cl_net_chan.cpp'
Compiling 'src\client\cl_parse.cpp'
Compiling 'src\client\cl_scrn.cpp'
Compiling 'src\client\cl_ui.cpp'
Compiling 'src\client\snd_adpcm.cpp'
Compiling 'src\client\snd_dma.cpp'
Compiling 'src\client\snd_mem.cpp'
Compiling 'src\client\snd_mix.cpp'
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
scons: *** [build\windows-x86-release\client\obj\client\snd_mix.cpp.obj] Error 1
```

- build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\renderer\tr_flares.cpp'
Compiling 'src\renderer\tr_font.cpp'
Compiling 'src\renderer\tr_image.cpp'
Compiling 'src\renderer\tr_init.cpp'
Compiling 'src\renderer\tr_light.cpp'
Compiling 'src\renderer\tr_main.cpp'
Compiling 'src\renderer\tr_marks.cpp'
Compiling 'src\renderer\tr_mesh.cpp'
Compiling 'src\renderer\tr_cmesh.cpp'
Compiling 'src\renderer\tr_model.cpp'
Compiling 'src\renderer\tr_noise.cpp'
Compiling 'src\renderer\tr_renderprog.cpp'
Compiling 'src\renderer\tr_scene.cpp'
Compiling 'src\renderer\tr_shade.cpp'
Compiling 'src\renderer\tr_shade_calc.cpp'
Compiling 'src\renderer\tr_shader.cpp'
Compiling 'src\renderer\tr_shadows.cpp'
Compiling 'src\renderer\tr_sky.cpp'
Compiling 'src\renderer\tr_surface.cpp'
Compiling 'src\renderer\tr_vfx.cpp'
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

- build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\game\ai\fsm\ai_ability.cpp'
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
scons: *** [build\windows-x86-release\game\obj\qcommon\q_math.cpp.obj] Error 1
```

- build\windows-x86-release\cgame\obj\qcommon\q_math.cpp.obj

```
Compiling 'src\games\cgame\cg_info.cpp'
Compiling 'src\games\cgame\cg_main.cpp'
Compiling 'src\games\cgame\cg_newDraw.cpp'
Compiling 'src\games\cgame\cg_players.cpp'
Compiling 'src\games\cgame\cg_playerstate.cpp'
Compiling 'src\games\cgame\cg_predict.cpp'
Compiling 'src\games\cgame\cg_scoreboard.cpp'
Compiling 'src\games\cgame\cg_servercmds.cpp'
Compiling 'src\games\cgame\cg_snapshot.cpp'
Compiling 'src\games\cgame\cg_sound.cpp'
Compiling 'src\games\cgame\cg_syscalls.cpp'
Compiling 'src\games\cgame\cg_view.cpp'
Compiling 'src\games\cgame\cg_weapons.cpp'
Compiling 'src\games\cgame\fx\FxPrimitives.cpp'
Compiling 'src\games\cgame\fx\FxScheduler.cpp'
Compiling 'src\games\cgame\fx\FxSystem.cpp'
Compiling 'src\games\cgame\fx\FxTemplate.cpp'
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
Compiling 'src\games\cgame\fx\FxUtil.cpp'
Compiling 'src\games\cgame\fx\genericparser2.cpp'
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
Compiling 'src\games\ui\ui_atoms.cpp'
Compiling 'src\games\ui\ui_gameinfo.cpp'
Compiling 'src\games\ui\ui_main.cpp'
Compiling 'src\games\ui\ui_players.cpp'
Compiling 'src\games\ui\ui_shared.cpp'
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

- [1x] -cast-calling-convention
  - src\sys\win32\win_glimp.cpp(1541,3): warning: cast between incompatible calling conventions 'cdecl' and 'stdcall'; calls through this pointer may abort at runtime [-Wcast-calling-convention]
- [1x] -unused-value
  - src\splines\splines.cpp(580,17): warning: expression result unused [-Wunused-value]

