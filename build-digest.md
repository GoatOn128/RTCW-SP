# Build digest

commit: 7846155b062b

- ubuntu-latest-x64-debug: success
- ubuntu-latest-x64-release: success
- ubuntu-latest-x86-debug: success
- ubuntu-latest-x86-release: success
- uncrustify: success
- windows-latest-x64-debug: cancelled
- windows-latest-x64-release: failure
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x64-release

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release

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

## windows-latest-x64-debug

status: cancelled

errors: 9
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:111
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:327
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:358
lld-link: error: undefined symbol: Z_Free
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:132
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:395
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:411
scons: *** [build\windows-x64-debug\renderer_gl.dll] Error 1

### failure context

- build\windows-x64-debug\renderer_gl.dll

```
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_model.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_noise.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_scene.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_shade.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_shade_calc.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_shader.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_shadows.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_sky.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_surface.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_world.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\renderer\tr_module.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\qcommon\q_shared.c.obj' from cache
Retrieved `build\windows-x64-debug\renderer\obj\third-party\stb\stb_impl.c.obj' from cache
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEBUG /DEF:src/renderer/renderer.def /dll /out:build\windows-x64-debug\renderer_gl.dll /implib:build\windows-x64-debug\renderer_gl.lib build\windows-x64-debug\renderer\obj\renderer\tr_animation.c.obj build\windows-x64-debug\renderer\obj\renderer\tr_backend.c.obj build\windows-x64-debug\renderer\obj\renderer\tr_bsp.c.obj build\windows-x64-debug\renderer
lld-link: error: undefined symbol: Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:111
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(WriteTGA)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:327
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:358
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)

lld-link: error: undefined symbol: Z_Free
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:132
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(WriteTGA)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:395
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:411
>>>               build\windows-x64-debug\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
scons: *** [build\windows-x64-debug\renderer_gl.dll] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 6
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: Z_Malloc
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(WriteTGA)
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced 1 more times
lld-link: error: undefined symbol: Z_Free
scons: *** [build\windows-x64-release\renderer_gl.dll] Error 1

### failure context

- build\windows-x64-release\renderer_gl.dll

```
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_light.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_main.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_marks.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_mesh.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_model.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_noise.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_scene.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_shade.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_shade_calc.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_shader.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_shadows.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_sky.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_surface.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_world.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\renderer\tr_module.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\qcommon\q_shared.c.obj' from cache
Retrieved `build\windows-x64-release\renderer\obj\third-party\stb\stb_impl.c.obj' from cache
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEF:src/renderer/renderer.def /dll /out:build\windows-x64-release\renderer_gl.dll /implib:build\windows-x64-release\renderer_gl.lib build\windows-x64-release\renderer\obj\renderer\tr_animation.c.obj build\windows-x64-release\renderer\obj\renderer\tr_backend.c.obj build\windows-x64-release\renderer\obj\renderer\tr_bsp.c.obj build\windows-x64-release\ren
lld-link: error: undefined symbol: Z_Malloc
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(WriteTGA)
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced 1 more times

lld-link: error: undefined symbol: Z_Free
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(WriteTGA)
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced by build\windows-x64-release\renderer\obj\renderer\tr_font.c.obj:(RE_RegisterFont)
>>> referenced 1 more times
scons: *** [build\windows-x64-release\renderer_gl.dll] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:111
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:327
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:358
lld-link: error: undefined symbol: _Z_Free
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:132
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:395
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:411
scons: *** [build\windows-x86-debug\renderer_gl.dll] Error 1

### failure context

- build\windows-x86-debug\renderer_gl.dll

```
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_model.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_noise.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_scene.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_shade.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_shade_calc.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_shader.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_shadows.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_sky.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_surface.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_world.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\renderer\tr_module.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\qcommon\q_shared.c.obj' from cache
Retrieved `build\windows-x86-debug\renderer\obj\third-party\stb\stb_impl.c.obj' from cache
lld-link /nologo /DYNAMICBASE /DEBUG /DEF:src/renderer/renderer.def /dll /out:build\windows-x86-debug\renderer_gl.dll /implib:build\windows-x86-debug\renderer_gl.lib build\windows-x86-debug\renderer\obj\renderer\tr_animation.c.obj build\windows-x86-debug\renderer\obj\renderer\tr_backend.c.obj build\windows-x86-debug\renderer\obj\renderer\tr_bsp.c.obj build\windows-x86-debug\renderer\obj\renderer\t
lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:111
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_WriteTGA)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:327
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:358
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)

lld-link: error: undefined symbol: _Z_Free
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:132
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_WriteTGA)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:395
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\renderer\tr_font.c:411
>>>               build\windows-x86-debug\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
scons: *** [build\windows-x86-debug\renderer_gl.dll] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 6
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_WriteTGA)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced 1 more times
lld-link: error: undefined symbol: _Z_Free
scons: *** [build\windows-x86-release\renderer_gl.dll] Error 1

### failure context

- build\windows-x86-release\renderer_gl.dll

```
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_light.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_main.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_marks.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_mesh.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_model.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_noise.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_scene.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_shade.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_shade_calc.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_shader.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_shadows.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_sky.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_surface.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_world.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\renderer\tr_module.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\qcommon\q_math.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\qcommon\q_shared.c.obj' from cache
Retrieved `build\windows-x86-release\renderer\obj\third-party\stb\stb_impl.c.obj' from cache
lld-link /nologo /DYNAMICBASE /DEF:src/renderer/renderer.def /dll /out:build\windows-x86-release\renderer_gl.dll /implib:build\windows-x86-release\renderer_gl.lib build\windows-x86-release\renderer\obj\renderer\tr_animation.c.obj build\windows-x86-release\renderer\obj\renderer\tr_backend.c.obj build\windows-x86-release\renderer\obj\renderer\tr_bsp.c.obj build\windows-x86-release\renderer\obj\rende
lld-link: error: undefined symbol: _Z_Malloc
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_WriteTGA)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced 1 more times

lld-link: error: undefined symbol: _Z_Free
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_WriteTGA)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced by build\windows-x86-release\renderer\obj\renderer\tr_font.c.obj:(_RE_RegisterFont)
>>> referenced 1 more times
scons: *** [build\windows-x86-release\renderer_gl.dll] Error 1
```


### warning kinds

