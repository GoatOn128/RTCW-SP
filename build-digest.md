# Build digest

commit: 074f4e5d33d7

- ubuntu-latest-x64-debug-: cancelled
- ubuntu-latest-x64-release-: cancelled
- ubuntu-latest-x64-release-game,renderer: failure
- ubuntu-latest-x86-debug-: cancelled
- ubuntu-latest-x86-release-: success
- uncrustify: success
- windows-latest-x64-debug-: cancelled
- windows-latest-x64-release-: success
- windows-latest-x64-release-cgame: cancelled
- windows-latest-x64-release-game,renderer: failure
- windows-latest-x64-release-ui: cancelled
- windows-latest-x86-debug-: cancelled
- windows-latest-x86-release-: cancelled

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

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-debug-

status: cancelled

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

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-cgame

status: cancelled

errors: 3
warnings: 0 in 0 kinds

### errors

lld-link: error: duplicate symbol: Com_Error
lld-link: error: duplicate symbol: Com_Printf
scons: *** [bin\WolfSP_x64.exe] Error 1

### failure context

- bin\WolfSP_x64.exe

```
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_playerstate.c.obj /c src\games\cgame\cg_playerstate.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_predict.c.obj /c src\games\cgame\cg_predict.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/w
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_scoreboard.c.obj /c src\games\cgame\cg_scoreboard.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI b
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_servercmds.c.obj /c src\games\cgame\cg_servercmds.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI b
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_snapshot.c.obj /c src\games\cgame\cg_snapshot.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_sound.c.obj /c src\games\cgame\cg_sound.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windo
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_syscalls.c.obj /c src\games\cgame\cg_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_trails.c.obj /c src\games\cgame\cg_trails.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/win
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_view.c.obj /c src\games\cgame\cg_view.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\cgame\cg_weapons.c.obj /c src\games\cgame\cg_weapons.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/w
clang-cl /Fobuild\windows-x64-release\cgame\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x
"C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\\x64\rc.EXE" /nologo /fo build\windows-x64-release\client\winquake.res src\sys\win32\winquake.rc
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecate
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declar
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decl
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declar
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj /c src\idlib\Heap.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated-c
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmpasyvsu83.lnk for command line:
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /SUBSYSTEM:WINDOWS /OUT:bin\WolfSP_x64.exe user32.lib gdi32.lib winmm.lib wsock32.lib advapi32.lib ole32.lib opengl32.lib shell32.lib build\windows-x64-release\client\obj\client\cl_cgame.c.obj build\windows-x64-release\client\obj\client\cl_cin.c.obj build\windows-x64-release\client\obj\client\cl_console.c.obj build\windows-x64-release\client\obj\client\
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmpasyvsu83.lnk
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /OUT:build\windows-x64-release\extractfuncs.exe build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extrac
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\Str.cpp.obj /c src\idlib\Str.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated-cop
lld-link: error: duplicate symbol: Com_Error
>>> defined at build\windows-x64-release\client\obj\qcommon\common.c.obj
>>> defined at build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj

lld-link: error: duplicate symbol: Com_Printf
>>> defined at build\windows-x64-release\client\obj\qcommon\common.c.obj
>>> defined at build\windows-x64-release\cgame\obj\games\cgame\cg_main.c.obj
scons: *** [bin\WolfSP_x64.exe] Error 1
```


### warning kinds

## windows-latest-x64-release-game,renderer

status: failure

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x64-release-ui

status: cancelled

errors: 3
warnings: 0 in 0 kinds

### errors

lld-link: error: duplicate symbol: Com_Error
lld-link: error: duplicate symbol: Com_Printf
scons: *** [bin\WolfSP_x64.exe] Error 1

### failure context

- bin\WolfSP_x64.exe

```
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/wi
clang-cl /Fobuild\windows-x64-release\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/wi
clang-cl /Fobuild\windows-x64-release\ui\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x64-
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj /c src\games\ui\ui_atoms.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x64-re
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_gameinfo.c.obj /c src\games\ui\ui_gameinfo.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_main.c.obj /c src\games\ui\ui_main.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x64-rele
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_players.c.obj /c src\games\ui\ui_players.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x6
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_shared.c.obj /c src\games\ui\ui_shared.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x64-
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_syscalls.c.obj /c src\games\ui\ui_syscalls.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-
clang-cl /Fobuild\windows-x64-release\ui\obj\games\ui\ui_util.c.obj /c src\games\ui\ui_util.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /FI build/windows-x64-rele
"C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\\x64\rc.EXE" /nologo /fo build\windows-x64-release\client\winquake.res src\sys\win32\winquake.rc
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj /c src\tools\extractfuncs\extractfuncs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecate
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj /c src\tools\extractfuncs\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj /c src\tools\extractfuncs\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declar
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_precomp.c.obj /c src\tools\extractfuncs\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-decl
clang-cl /Fobuild\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_script.c.obj /c src\tools\extractfuncs\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declar
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\Heap.cpp.obj /c src\idlib\Heap.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated-c
clang-cl /Fobuild\windows-x64-release\idlib\obj\idlib\Str.cpp.obj /c src\idlib\Str.cpp /TP /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations -Wno-writable-strings -Wno-deprecated-cop
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /OUT:build\windows-x64-release\extractfuncs.exe build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\extractfuncs.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_log.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extractfuncs\l_memory.c.obj build\windows-x64-release\extractfuncs_tool\obj\tools\extrac
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp0hs9gv05.lnk for command line:
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /SUBSYSTEM:WINDOWS /OUT:bin\WolfSP_x64.exe user32.lib gdi32.lib winmm.lib wsock32.lib advapi32.lib ole32.lib opengl32.lib shell32.lib build\windows-x64-release\client\obj\client\cl_cgame.c.obj build\windows-x64-release\client\obj\client\cl_cin.c.obj build\windows-x64-release\client\obj\client\cl_console.c.obj build\windows-x64-release\client\obj\client\
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp0hs9gv05.lnk
lld-link: error: duplicate symbol: Com_Error
>>> defined at build\windows-x64-release\client\obj\qcommon\common.c.obj
>>> defined at build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj

lld-link: error: duplicate symbol: Com_Printf
>>> defined at build\windows-x64-release\client\obj\qcommon\common.c.obj
>>> defined at build\windows-x64-release\ui\obj\games\ui\ui_atoms.c.obj
scons: *** [bin\WolfSP_x64.exe] Error 1
```


### warning kinds

## windows-latest-x86-debug-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-release-

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

