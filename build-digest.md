# Build digest

commit: d741de45491d

- ubuntu-latest-x64-debug-: success
- ubuntu-latest-x64-release-: success
- ubuntu-latest-x64-release-game: success
- ubuntu-latest-x86-debug-: success
- ubuntu-latest-x86-release-: success
- uncrustify: success
- windows-latest-x64-debug-: failure
- windows-latest-x64-release-: failure
- windows-latest-x64-release-cgame: failure
- windows-latest-x64-release-game: failure
- windows-latest-x64-release-ui: failure
- windows-latest-x86-debug-: failure
- windows-latest-x86-release-: failure

## ubuntu-latest-x64-debug-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release-game

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release-

status: success

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

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x64-debug\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x64-debug\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\splines.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_goal.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_move.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_weap.cpp.obj' from cache
Retrieved `build\windows-x64-debug\client\obj\games\botlib\be_ai_weight.cpp.obj' from cache
scons: *** [build\windows-x64-debug\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x64-release\client\obj\renderer\tr_sky.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_surface.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_vfx.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\splines.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.cpp.obj' from cache
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-cgame

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_move.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_weap.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_weight.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ea.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_interface.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_nav_interface.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_crc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_libvar.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_log.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_memory.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_precomp.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_script.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\l_struct.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\stb\stb_impl.c.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourAlloc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourAssert.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourCommon.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourNavMesh.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourNavMeshBuilder.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourNavMeshQuery.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\third-party\recast\Detour\Source\DetourNode.cpp.obj' from cache
Retrieved `build\windows-x64-release\cgame\obj\games\game\bg_animation.cpp.obj' from cache
Retrieved `build\windows-x64-release\cgame\obj\games\game\bg_misc.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x64-release\cgame\obj\games\game\bg_pmove.cpp.obj' from cache
Retrieved `build\windows-x64-release\cgame\obj\games\game\bg_slidemove.cpp.obj' from cache
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-game

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x64-release\client\obj\renderer\tr_sky.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_surface.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_vfx.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\splines.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_goal.cpp.obj' from cache
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x64-release-ui

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x64-release\client\obj\renderer\tr_shade_calc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_shader.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_shadows.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_sky.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_surface.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_vfx.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\splines\splines.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x64-release\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x64-release\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
scons: *** [build\windows-x64-release\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-debug-

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x86-debug\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x86-debug\client\obj\renderer\tr_surface.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\renderer\tr_vfx.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\splines.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x86-debug\client\obj\games\botlib\be_ai_goal.cpp.obj' from cache
Retrieved `build\windows-x86-debug\client\obj\games\botlib\be_ai_move.cpp.obj' from cache
scons: *** [build\windows-x86-debug\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

## windows-latest-x86-release-

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_main.cpp.obj] Error 1

### failure context

- build\windows-x86-release\client\obj\sys\win32\win_main.cpp.obj

```
Retrieved `build\windows-x86-release\client\obj\renderer\tr_shadows.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\renderer\tr_sky.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\renderer\tr_surface.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\renderer\tr_vfx.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\renderer\tr_world.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\qcommon\q_shared.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\qcommon\q_math.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_gamma.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_glimp.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_input.cpp.obj' from cache
Compiling 'src\sys\win32\win_main.cpp'
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_net.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_qgl.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_shared.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_snd.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_syscon.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\sys\win32\win_wndproc.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\math_angles.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\math_matrix.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\math_quaternion.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\math_vector.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\q_parse.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\q_shared.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\splines.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\splines\util_str.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\games\botlib\be_ai_char.cpp.obj' from cache
src\sys\win32\win_main.cpp(1,32961): error: expected unqualified-id
1 error generated.
Retrieved `build\windows-x86-release\client\obj\games\botlib\be_ai_chat.cpp.obj' from cache
Retrieved `build\windows-x86-release\client\obj\games\botlib\be_ai_gen.cpp.obj' from cache
scons: *** [build\windows-x86-release\client\obj\sys\win32\win_main.cpp.obj] Error 1
```


### warning kinds

