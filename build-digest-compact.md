# Compact build digest

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

