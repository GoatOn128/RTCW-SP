# Build digest

commit: 25b0a543af81

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: failure
- ubuntu-latest-x86-debug: cancelled
- ubuntu-latest-x86-release: failure
- windows-latest-x64-debug: failure
- windows-latest-x64-release: cancelled
- windows-latest-x86-debug: failure
- windows-latest-x86-release: failure

## ubuntu-latest-x64-debug

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_main.c:2412:(.text+0x2280): undefined reference to `Sys_ProcessorCount'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_qgl.c:169:(.text+0x47c): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_qgl.c:170:(.text+0x48d): undefined reference to `qglPNTrianglesfATI'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-debug/WolfSP] Error 1

### failure context

- build/linux-x64-debug/WolfSP

```
clang -o build/linux-x64-debug/client/obj/games/botlib/be_ai_move.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Is
clang -o build/linux-x64-debug/client/obj/games/botlib/be_ai_weap.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Is
clang -o build/linux-x64-debug/client/obj/games/botlib/be_ai_weight.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -
clang -o build/linux-x64-debug/client/obj/games/botlib/be_ea.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qc
clang -o build/linux-x64-debug/client/obj/games/botlib/be_interface.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -
clang -o build/linux-x64-debug/client/obj/games/botlib/l_crc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qc
clang -o build/linux-x64-debug/client/obj/games/botlib/l_libvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x64-debug/client/obj/games/botlib/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc/qc
clang -o build/linux-x64-debug/client/obj/games/botlib/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x64-debug/client/obj/games/botlib/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isr
clang -o build/linux-x64-debug/client/obj/games/botlib/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x64-debug/client/obj/games/botlib/l_struct.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DBOTLIB -Isrc -Isrc/games/game -Isrc/client -Isrc
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/client -Is
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_characters.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_debug.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang++ -o build/linux-x64-debug/WolfSP -m64 -pie build/linux-x64-debug/client/obj/client/cl_cgame.c.o build/linux-x64-debug/client/obj/client/cl_cin.c.o build/linux-x64-debug/client/obj/client/cl_console.c.o build/linux-x64-debug/client/obj/client/cl_input.c.o build/linux-x64-debug/client/obj/client/cl_keys.c.o build/linux-x64-debug/client/obj/client/cl_main.c.o build/linux-x64-debug/client/obj/c
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_events.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_fight.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_func_attack.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isr
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/client/cl_main.c.o:(.bss+0x2020b0): multiple definition of `cge'; build/linux-x64-debug/client/obj/client/cl_cgame.c.o:(.bss+0x2000): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/sys/unix/unix_main.c.o:(.bss+0xc808): multiple definition of `re'; build/linux-x64-debug/client/obj/client/cl_main.c.o:(.bss+0x1dbc80): first defined here
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_func_boss1.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_funcs.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/clie
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/client/cl_main.c.o: in function `CL_InitRef':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_main.c:2412:(.text+0x2280): undefined reference to `Sys_ProcessorCount'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-debug/client/obj/client/cl_qgl.c.o: in function `QGL_FillImportTable':
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_qgl.c:169:(.text+0x47c): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_qgl.c:170:(.text+0x48d): undefined reference to `qglPNTrianglesfATI'
clang -o build/linux-x64-debug/game/obj/games/game/ai_cast_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -g -O0 -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DGAMEDLL -Isrc -Isrc/games/game -Isrc/cli
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-debug/WolfSP] Error 1
```


### warning kinds

## ubuntu-latest-x64-release

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

cl_main.c:(.text+0x2176): undefined reference to `Sys_ProcessorCount'
cl_qgl.c:(.text+0x478): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: cl_qgl.c:(.text+0x489): undefined reference to `qglPNTrianglesfATI'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-release/WolfSP] Error 1

### failure context

- build/linux-x64-release/WolfSP

```
clang -o build/linux-x64-release/client/obj/games/botlib/be_ai_move.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isr
clang -o build/linux-x64-release/client/obj/games/botlib/be_ai_weap.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isr
clang -o build/linux-x64-release/client/obj/games/botlib/be_ai_weight.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -I
clang -o build/linux-x64-release/client/obj/games/botlib/be_ea.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x64-release/client/obj/games/botlib/be_interface.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -I
clang -o build/linux-x64-release/client/obj/games/botlib/l_crc.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x64-release/client/obj/games/botlib/l_libvar.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x64-release/client/obj/games/botlib/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x64-release/client/obj/games/botlib/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x64-release/client/obj/games/botlib/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc
clang -o build/linux-x64-release/client/obj/games/botlib/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x64-release/client/obj/games/botlib/l_struct.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x64-release/game/obj/games/game/ai_cast.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isrc -Isr
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_characters.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_debug.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_events.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Is
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_fight.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_func_attack.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDL
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_func_boss1.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL
clang++ -o build/linux-x64-release/WolfSP -m64 -pie build/linux-x64-release/client/obj/client/cl_cgame.c.o build/linux-x64-release/client/obj/client/cl_cin.c.o build/linux-x64-release/client/obj/client/cl_console.c.o build/linux-x64-release/client/obj/client/cl_input.c.o build/linux-x64-release/client/obj/client/cl_keys.c.o build/linux-x64-release/client/obj/client/cl_main.c.o build/linux-x64-rele
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_funcs.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_main.c.o:(.bss+0x2020b0): multiple definition of `cge'; build/linux-x64-release/client/obj/client/cl_cgame.c.o:(.bss+0x2000): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/sys/unix/unix_main.c.o:(.bss+0xc808): multiple definition of `re'; build/linux-x64-release/client/obj/client/cl_main.c.o:(.bss+0x1dbc80): first defined here
clang -o build/linux-x64-release/game/obj/games/game/ai_cast_script.c.o -c -std=gnu89 -Wall -fsigned-char -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Is
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_main.c.o: in function `CL_InitRef':
cl_main.c:(.text+0x2176): undefined reference to `Sys_ProcessorCount'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x64-release/client/obj/client/cl_qgl.c.o: in function `QGL_FillImportTable':
cl_qgl.c:(.text+0x478): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: cl_qgl.c:(.text+0x489): undefined reference to `qglPNTrianglesfATI'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x64-release/WolfSP] Error 1
```


### warning kinds

## ubuntu-latest-x86-debug

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release

status: failure

errors: 5
warnings: 0 in 0 kinds

### errors

cl_main.c:(.text+0x23f6): undefined reference to `Sys_ProcessorCount'
cl_qgl.c:(.text+0x4a4): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: cl_qgl.c:(.text+0x4b2): undefined reference to `qglPNTrianglesfATI'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
scons: *** [build/linux-x86-release/WolfSP] Error 1

### failure context

- build/linux-x86-release/WolfSP

```
clang -o build/linux-x86-release/client/obj/games/botlib/be_ai_weight.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -I
clang -o build/linux-x86-release/client/obj/games/botlib/be_ea.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x86-release/client/obj/games/botlib/be_interface.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -I
clang -o build/linux-x86-release/client/obj/games/botlib/l_crc.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x86-release/client/obj/games/botlib/l_libvar.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x86-release/client/obj/games/botlib/l_log.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/gam
clang -o build/linux-x86-release/client/obj/games/botlib/l_memory.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x86-release/client/obj/games/botlib/l_precomp.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc
clang -o build/linux-x86-release/client/obj/games/botlib/l_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x86-release/client/obj/games/botlib/l_struct.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIE -DNDEBUG -DBOTLIB -Isrc -Isrc/
clang -o build/linux-x86-release/game/obj/games/game/ai_cast.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isrc -Isr
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_characters.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_debug.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_events.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Is
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_fight.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_func_attack.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDL
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_func_boss1.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL
clang++ -o build/linux-x86-release/WolfSP -m32 -pie build/linux-x86-release/client/obj/client/cl_cgame.c.o build/linux-x86-release/client/obj/client/cl_cin.c.o build/linux-x86-release/client/obj/client/cl_console.c.o build/linux-x86-release/client/obj/client/cl_input.c.o build/linux-x86-release/client/obj/client/cl_keys.c.o build/linux-x86-release/client/obj/client/cl_main.c.o build/linux-x86-rele
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_funcs.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Isr
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_script.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDLL -Is
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/cl_main.c.o:(.bss+0x201ed8): multiple definition of `cge'; build/linux-x86-release/client/obj/client/cl_cgame.c.o:(.bss+0x2000): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/sys/unix/unix_main.c.o:(.bss+0xbfe4): multiple definition of `re'; build/linux-x86-release/client/obj/client/cl_main.c.o:(.bss+0x1dbc74): first defined here
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/cl_main.c.o: in function `CL_InitRef':
cl_main.c:(.text+0x23f6): undefined reference to `Sys_ProcessorCount'
/usr/bin/x86_64-linux-gnu-ld.bfd: build/linux-x86-release/client/obj/client/cl_qgl.c.o: in function `QGL_FillImportTable':
cl_qgl.c:(.text+0x4a4): undefined reference to `qglPNTrianglesiATI'
/usr/bin/x86_64-linux-gnu-ld.bfd: cl_qgl.c:(.text+0x4b2): undefined reference to `qglPNTrianglesfATI'
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_script_actions.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAM
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
clang -o build/linux-x86-release/game/obj/games/game/ai_cast_script_ents.c.o -c -std=gnu89 -Wall -fsigned-char -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -O2 -fno-strict-aliasing -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -fPIC -fPIC -DNDEBUG -DGAMEDL
scons: *** [build/linux-x86-release/WolfSP] Error 1
```


### warning kinds

## windows-latest-x64-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

lld-link: error: duplicate symbol: cge
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1

### failure context

- build\windows-x64-debug\WolfSP.exe

```
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ai_gen.c.obj /c src\games\botlib\be_ai_gen.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ai_goal.c.obj /c src\games\botlib\be_ai_goal.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ai_move.c.obj /c src\games\botlib\be_ai_move.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ai_weap.c.obj /c src\games\botlib\be_ai_weap.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ai_weight.c.obj /c src\games\botlib\be_ai_weight.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /D
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_ea.c.obj /c src\games\botlib\be_ea.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\be_interface.c.obj /c src\games\botlib\be_interface.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /D
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_crc.c.obj /c src\games\botlib\l_crc.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_libvar.c.obj /c src\games\botlib\l_libvar.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_log.c.obj /c src\games\botlib\l_log.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_memory.c.obj /c src\games\botlib\l_memory.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x64-debug\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast.c.obj /c src\games\game\ai_cast.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_characters.c.obj /c src\games\game\ai_cast_characters.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_debug.c.obj /c src\games\game\ai_cast_debug.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp081k14l0.lnk for command line:
lld-link /nologo /DYNAMICBASE /HIGHENTROPYVA /DEBUG /SUBSYSTEM:WINDOWS /OUT:build\windows-x64-debug\WolfSP.exe user32.lib gdi32.lib winmm.lib wsock32.lib advapi32.lib opengl32.lib shell32.lib build\windows-x64-debug\client\obj\client\cl_cgame.c.obj build\windows-x64-debug\client\obj\client\cl_cin.c.obj build\windows-x64-debug\client\obj\client\cl_console.c.obj build\windows-x64-debug\client\obj\cl
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp081k14l0.lnk
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_events.c.obj /c src\games\game\ai_cast_events.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWI
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_fight.c.obj /c src\games\game\ai_cast_fight.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_func_attack.c.obj /c src\games\game\ai_cast_func_attack.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_func_boss1.c.obj /c src\games\game\ai_cast_func_boss1.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
lld-link: error: duplicate symbol: cge
>>> defined at build\windows-x64-debug\client\obj\client\cl_cgame.c.obj
>>> defined at build\windows-x64-debug\client\obj\client\cl_main.c.obj
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_funcs.c.obj /c src\games\game\ai_cast_funcs.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_script.c.obj /c src\games\game\ai_cast_script.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWI
clang-cl /Fobuild\windows-x64-debug\game\obj\games\game\ai_cast_script_actions.c.obj /c src\games\game\ai_cast_script_actions.c /nologo /W4 -m64 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
scons: *** [build\windows-x64-debug\WolfSP.exe] Error 1
```


### warning kinds

## windows-latest-x64-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## windows-latest-x86-debug

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

lld-link: error: duplicate symbol: _cge
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1

### failure context

- build\windows-x86-debug\WolfSP.exe

```
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\be_interface.c.obj /c src\games\botlib\be_interface.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /D
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_crc.c.obj /c src\games\botlib\l_crc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_libvar.c.obj /c src\games\botlib\l_libvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_log.c.obj /c src\games\botlib\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_memory.c.obj /c src\games\botlib\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x86-debug\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast.c.obj /c src\games\game\ai_cast.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_characters.c.obj /c src\games\game\ai_cast_characters.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_debug.c.obj /c src\games\game\ai_cast_debug.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_events.c.obj /c src\games\game\ai_cast_events.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWI
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_fight.c.obj /c src\games\game\ai_cast_fight.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp9kz1xjm4.lnk for command line:
lld-link /nologo /DYNAMICBASE /DEBUG /SUBSYSTEM:WINDOWS /OUT:build\windows-x86-debug\WolfSP.exe user32.lib gdi32.lib winmm.lib wsock32.lib advapi32.lib opengl32.lib shell32.lib build\windows-x86-debug\client\obj\client\cl_cgame.c.obj build\windows-x86-debug\client\obj\client\cl_cin.c.obj build\windows-x86-debug\client\obj\client\cl_console.c.obj build\windows-x86-debug\client\obj\client\cl_input.c
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp9kz1xjm4.lnk
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_func_attack.c.obj /c src\games\game\ai_cast_func_attack.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_func_boss1.c.obj /c src\games\game\ai_cast_func_boss1.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_funcs.c.obj /c src\games\game\ai_cast_funcs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_script.c.obj /c src\games\game\ai_cast_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWI
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_script_actions.c.obj /c src\games\game\ai_cast_script_actions.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarati
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_script_ents.c.obj /c src\games\game\ai_cast_script_ents.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z
lld-link: error: duplicate symbol: _cge
>>> defined at build\windows-x86-debug\client\obj\client\cl_cgame.c.obj
>>> defined at build\windows-x86-debug\client\obj\client\cl_main.c.obj
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_sight.c.obj /c src\games\game\ai_cast_sight.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\ai_cast_think.c.obj /c src\games\game\ai_cast_think.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN3
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\bg_animation.c.obj /c src\games\game\bg_animation.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\bg_misc.c.obj /c src\games\game\bg_misc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-debug\game\obj\games\game\bg_pmove.c.obj /c src\games\game\bg_pmove.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /Z7 /Od /DWIN32 /D_WINDO
scons: *** [build\windows-x86-debug\WolfSP.exe] Error 1
```


### warning kinds

## windows-latest-x86-release

status: failure

errors: 2
warnings: 0 in 0 kinds

### errors

lld-link: error: duplicate symbol: _cge
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1

### failure context

- build\windows-x86-release\WolfSP.exe

```
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_char.c.obj /c src\games\botlib\be_ai_char.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_chat.c.obj /c src\games\botlib\be_ai_chat.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_gen.c.obj /c src\games\botlib\be_ai_gen.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_goal.c.obj /c src\games\botlib\be_ai_goal.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_move.c.obj /c src\games\botlib\be_ai_move.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_weap.c.obj /c src\games\botlib\be_ai_weap.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ai_weight.c.obj /c src\games\botlib\be_ai_weight.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWI
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_ea.c.obj /c src\games\botlib\be_ea.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\be_interface.c.obj /c src\games\botlib\be_interface.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWI
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_crc.c.obj /c src\games\botlib\l_crc.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_libvar.c.obj /c src\games\botlib\l_libvar.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_log.c.obj /c src\games\botlib\l_log.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_memory.c.obj /c src\games\botlib\l_memory.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_precomp.c.obj /c src\games\botlib\l_precomp.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_script.c.obj /c src\games\botlib\l_script.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-release\client\obj\games\botlib\l_struct.c.obj /c src\games\botlib\l_struct.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_W
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast.c.obj /c src\games\game\ai_cast.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 /D_WINDOWS /
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_characters.c.obj /c src\games\game\ai_cast_characters.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_debug.c.obj /c src\games\game\ai_cast_debug.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
Using tempfile C:\Users\RUNNER~1\AppData\Local\Temp\tmp6puz8vn0.lnk for command line:
lld-link /nologo /DYNAMICBASE /SUBSYSTEM:WINDOWS /OUT:build\windows-x86-release\WolfSP.exe user32.lib gdi32.lib winmm.lib wsock32.lib advapi32.lib opengl32.lib shell32.lib build\windows-x86-release\client\obj\client\cl_cgame.c.obj build\windows-x86-release\client\obj\client\cl_cin.c.obj build\windows-x86-release\client\obj\client\cl_console.c.obj build\windows-x86-release\client\obj\client\cl_inpu
lld-link @C:\Users\RUNNER~1\AppData\Local\Temp\tmp6puz8vn0.lnk
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_events.c.obj /c src\games\game\ai_cast_events.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN3
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_fight.c.obj /c src\games\game\ai_cast_fight.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_func_attack.c.obj /c src\games\game\ai_cast_func_attack.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations 
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_func_boss1.c.obj /c src\games\game\ai_cast_func_boss1.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O
lld-link: error: duplicate symbol: _cge
>>> defined at build\windows-x86-release\client\obj\client\cl_cgame.c.obj
>>> defined at build\windows-x86-release\client\obj\client\cl_main.c.obj
clang-cl /Fobuild\windows-x86-release\game\obj\games\game\ai_cast_funcs.c.obj /c src\games\game\ai_cast_funcs.c /nologo /W4 -m32 -Wno-error=incompatible-function-pointer-types -Wno-error=incompatible-pointer-types -Wno-unused-but-set-variable -Wno-missing-field-initializers -Wno-unused-value -Wno-unused-variable -Wno-unused-const-variable -Wno-pointer-sign -Wno-deprecated-declarations /O2 /DWIN32 
scons: *** [build\windows-x86-release\WolfSP.exe] Error 1
```


### warning kinds

