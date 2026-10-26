# Build digest

commit: f3164c120629

- ubuntu-latest-x64-debug: success
- ubuntu-latest-x64-release: success
- ubuntu-latest-x86-debug: success
- ubuntu-latest-x86-release: success
- windows-latest-x64-debug: failure
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

## windows-latest-x64-debug

status: failure

errors: 11
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: r_glIgnoreWicked3D
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1251
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1266
lld-link: error: undefined symbol: __declspec(dllimport) CoUninitialize
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:110
lld-link: error: undefined symbol: __declspec(dllimport) CoInitialize
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:126
lld-link: error: undefined symbol: __declspec(dllimport) CoCreateInstance
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:166
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:168
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1

### failure context

- build\windows-x64-debug\WolfSP.exe

```
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_session.c.obj /c src\games\game\g_session.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_spawn.c.obj /c src\games\game\g_spawn.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_svcmds.c.obj /c src\games\game\g_svcmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_syscalls.c.obj /c src\games\game\g_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_target.c.obj /c src\games\game\g_target.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_team.c.obj /c src\games\game\g_team.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_tramcar.c.obj /c src\games\game\g_tramcar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_trigger.c.obj /c src\games\game\g_trigger.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_utils.c.obj /c src\games\game\g_utils.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\g_weapon.c.obj /c src\games\game\g_weapon.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\game\obj\games\botai\ai_chat.c.obj /c src\games\botai\ai_chat.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
lld-link: error: undefined symbol: r_glIgnoreWicked3D
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1251
>>>               build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj:(GLW_StartOpenGL)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1266
>>>               build\windows-x64-debug\client\obj\sys\win32\win_glimp.c.obj:(GLW_StartOpenGL)

lld-link: error: undefined symbol: __declspec(dllimport) CoUninitialize
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:110
>>>               build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Shutdown)

lld-link: error: undefined symbol: __declspec(dllimport) CoInitialize
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:126
>>>               build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Init)

lld-link: error: undefined symbol: __declspec(dllimport) CoCreateInstance
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:166
>>>               build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_InitDS)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:168
>>>               build\windows-x64-debug\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_InitDS)
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1
```


### warning kinds

## windows-latest-x64-release

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: r_glIgnoreWicked3D
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj:(GLimp_Init)
lld-link: error: undefined symbol: __declspec(dllimport) CoUninitialize
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Shutdown)
lld-link: error: undefined symbol: __declspec(dllimport) CoInitialize
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Init)
lld-link: error: undefined symbol: __declspec(dllimport) CoCreateInstance
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_InitDS)
scons: *** [build\windows-x64-release\WolfSP.exe] Error 1

### failure context

- build\windows-x64-release\WolfSP.exe

```
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_save.c.obj /c src\games\game\g_save.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_script.c.obj /c src\games\game\g_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_script_actions.c.obj /c src\games\game\g_script_actions.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /D
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_session.c.obj /c src\games\game\g_session.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_spawn.c.obj /c src\games\game\g_spawn.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_svcmds.c.obj /c src\games\game\g_svcmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_syscalls.c.obj /c src\games\game\g_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_target.c.obj /c src\games\game\g_target.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_team.c.obj /c src\games\game\g_team.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_tramcar.c.obj /c src\games\game\g_tramcar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_trigger.c.obj /c src\games\game\g_trigger.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_utils.c.obj /c src\games\game\g_utils.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\game\obj\games\game\g_weapon.c.obj /c src\games\game\g_weapon.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_chat.c.obj /c src\games\botai\ai_chat.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_cmd.c.obj /c src\games\botai\ai_cmd.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_dmnet.c.obj /c src\games\botai\ai_dmnet.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-release\game\obj\games\botai\ai_dmq3.c.obj /c src\games\botai\ai_dmq3.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
lld-link: error: undefined symbol: r_glIgnoreWicked3D
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj:(GLimp_Init)
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_glimp.c.obj:(GLimp_Init)

lld-link: error: undefined symbol: __declspec(dllimport) CoUninitialize
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Shutdown)

lld-link: error: undefined symbol: __declspec(dllimport) CoInitialize
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_Init)

lld-link: error: undefined symbol: __declspec(dllimport) CoCreateInstance
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_InitDS)
>>> referenced by build\windows-x64-release\client\obj\sys\win32\win_snd.c.obj:(SNDDMA_InitDS)
scons: *** [build\windows-x64-release\WolfSP.exe] Error 1
```


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 11
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: _r_glIgnoreWicked3D
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1251
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1266
lld-link: error: undefined symbol: __declspec(dllimport) _CoUninitialize@0
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:110
lld-link: error: undefined symbol: __declspec(dllimport) _CoInitialize@4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:126
lld-link: error: undefined symbol: __declspec(dllimport) _CoCreateInstance@20
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:166
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:168
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1

### failure context

- build\windows-x86-debug\WolfSP.exe

```
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_misc.c.obj /c src\games\game\g_misc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_missile.c.obj /c src\games\game\g_missile.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_mover.c.obj /c src\games\game\g_mover.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_props.c.obj /c src\games\game\g_props.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_save.c.obj /c src\games\game\g_save.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_script.c.obj /c src\games\game\g_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_script_actions.c.obj /c src\games\game\g_script_actions.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od 
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_session.c.obj /c src\games\game\g_session.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_spawn.c.obj /c src\games\game\g_spawn.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_svcmds.c.obj /c src\games\game\g_svcmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\g_syscalls.c.obj /c src\games\game\g_syscalls.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_W
lld-link: error: undefined symbol: _r_glIgnoreWicked3D
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1251
>>>               build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj:(_GLW_StartOpenGL)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_glimp.c:1266
>>>               build\windows-x86-debug\client\obj\sys\win32\win_glimp.c.obj:(_GLW_StartOpenGL)

lld-link: error: undefined symbol: __declspec(dllimport) _CoUninitialize@0
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:110
>>>               build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Shutdown)

lld-link: error: undefined symbol: __declspec(dllimport) _CoInitialize@4
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:126
>>>               build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Init)

lld-link: error: undefined symbol: __declspec(dllimport) _CoCreateInstance@20
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:166
>>>               build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_InitDS)
>>> referenced by D:\a\RTCW-SP\RTCW-SP\src\sys\win32\win_snd.c:168
>>>               build\windows-x86-debug\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_InitDS)
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 9
warnings: 0 in 0 kinds

### errors

lld-link: error: undefined symbol: _r_glIgnoreWicked3D
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj:(_GLimp_Init)
lld-link: error: undefined symbol: __declspec(dllimport) _CoUninitialize@0
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Shutdown)
lld-link: error: undefined symbol: __declspec(dllimport) _CoInitialize@4
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Init)
lld-link: error: undefined symbol: __declspec(dllimport) _CoCreateInstance@20
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_InitDS)
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1

### failure context

- build\windows-x86-release\WolfSP.exe

```
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_misc.c.obj /c src\games\game\g_misc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_missile.c.obj /c src\games\game\g_missile.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_mover.c.obj /c src\games\game\g_mover.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_props.c.obj /c src\games\game\g_props.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_save.c.obj /c src\games\game\g_save.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_script.c.obj /c src\games\game\g_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_script_actions.c.obj /c src\games\game\g_script_actions.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /D
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_session.c.obj /c src\games\game\g_session.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_spawn.c.obj /c src\games\game\g_spawn.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_svcmds.c.obj /c src\games\game\g_svcmds.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_syscalls.c.obj /c src\games\game\g_syscalls.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WIN
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_target.c.obj /c src\games\game\g_target.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_team.c.obj /c src\games\game\g_team.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /D_
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_tramcar.c.obj /c src\games\game\g_tramcar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_trigger.c.obj /c src\games\game\g_trigger.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_utils.c.obj /c src\games\game\g_utils.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\g_weapon.c.obj /c src\games\game\g_weapon.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
lld-link: error: undefined symbol: _r_glIgnoreWicked3D
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj:(_GLimp_Init)
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_glimp.c.obj:(_GLimp_Init)

lld-link: error: undefined symbol: __declspec(dllimport) _CoUninitialize@0
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Shutdown)

lld-link: error: undefined symbol: __declspec(dllimport) _CoInitialize@4
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_Init)

lld-link: error: undefined symbol: __declspec(dllimport) _CoCreateInstance@20
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_InitDS)
>>> referenced by build\windows-x86-release\client\obj\sys\win32\win_snd.c.obj:(_SNDDMA_InitDS)
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1
```


### warning kinds

