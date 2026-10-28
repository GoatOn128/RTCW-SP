# Compact build digest

commit: 980a44122c8b

- ubuntu-latest-x64-debug: failure
- ubuntu-latest-x64-release: cancelled
- ubuntu-latest-x86-debug: failure
- ubuntu-latest-x86-release: cancelled
- uncrustify: success
- windows-latest-x64-debug: success
- windows-latest-x64-release: success
- windows-latest-x86-debug: success
- windows-latest-x86-release: success

## ubuntu-latest-x64-debug

status: failure

errors: 63
warnings: 0 in 0 kinds

### errors

/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cin.cpp:1268:(.text+0x5468): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_cin.cpp:1602:(.text+0x67b0): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_keys.cpp:1080:(.text+0xbd5): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_main.cpp:3056:(.text+0x6ccb): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_main.cpp:3059:(.text+0x6d04): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_main.cpp:3441:(.text+0x7af6): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/cl_ui.cpp:238:(.text+0x52b): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_load.cpp:113:(.text+0x121): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_load.cpp:463:(.text+0x113c): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_load.cpp:480:(.text+0x11bb): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_load.cpp:489:(.text+0x1257): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_load.cpp:628:(.text+0x192d): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_patch.cpp:1076:(.text+0x4db2): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_patch.cpp:1122:(.text+0x5151): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_patch.cpp:1150:(.text+0x53a8): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_patch.cpp:1152:(.text+0x5422): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:71:(.text+0x158): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:119:(.text+0x66c): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:284:(.text+0x1250): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:677:(.text+0x2d3c): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:736:(.text+0x3343): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_polylib.cpp:743:(.text+0x33e1): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_test.cpp:472:(.text+0xdc5): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/cm_trace.cpp:1167:(.text+0x424d): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:762:(.text+0x16c2): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:1822:(.text+0x3399): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:1852:(.text+0x34da): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/common.cpp:2917:(.text+0x4a5c): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/files.cpp:886:(.text+0x1262): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/files.cpp:894:(.text+0x12c7): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/files.cpp:1271:(.text+0x21c7): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/files.cpp:2363:(.text+0x4ca9): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/files.cpp:2510:(.text+0x519c): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:342:(.text+0xce8): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:368:(.text+0xef1): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:386:(.text+0xfab): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:409:(.text+0x1167): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:414:(.text+0x11a6): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/huffman.cpp:415:(.text+0x11c2): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/md4.cpp:154:(.text+0x11a): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/md4.cpp:166:(.text+0x1a4): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/md4.cpp:190:(.text+0x275): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/md4.cpp:260:(.text+0x1704): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/net_chan.cpp:268:(.text+0x463): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:206:(.text+0x51b): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:280:(.text+0x6af): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:404:(.text+0x9e7): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:471:(.text+0xb64): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:472:(.text+0xb7d): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: CMakeFiles/wolf.dir/client/snd_dma.cpp.o:/home/runner/work/RTCW-SP/RTCW-SP/src/client/snd_dma.cpp:1440: more undefined references to `Com_Memset(void*, int, unsigned long)' follow
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/unzip.cpp:1333:(.text+0x42f): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/unzip.cpp:2776:(.text+0x2b30): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/unzip.cpp:2996:(.text+0x3c4d): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/qcommon/unzip.cpp:3027:(.text+0x3d5a): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/sys/unix/linux_snd.cpp:67:(.text+0x32): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_shader.cpp:2631:(.text+0x6783): undefined reference to `Com_Memset(void*, int, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_shader.cpp:2632:(.text+0x679c): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:1447:(.text+0x4fbd): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:1450:(.text+0x501d): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/usr/bin/x86_64-linux-gnu-ld.bfd: /home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_bsp.cpp:1453:(.text+0x507d): undefined reference to `Com_Memcpy(void*, void const*, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_curve.cpp:309:(.text+0x1452): undefined reference to `Com_Memset(void*, int, unsigned long)'
/home/runner/work/RTCW-SP/RTCW-SP/src/renderer/tr_light.cpp:416:(.text+0x16bd): undefined reference to `Com_Memset(void*, int, unsigned long)'
collect2: error: ld returned 1 exit status

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

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

