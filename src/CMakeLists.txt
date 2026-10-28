cmake_minimum_required(VERSION 3.25)

project(WolfSP LANGUAGES C CXX)

if(WIN32)
    enable_language(RC)
endif()

# Shared helpers: arch suffix, output directories and the common target
# configuration used by every project in the tree.
include(cmake/WolfUtils.cmake)

# Match the runtime selection in the original projects: /MTd for Debug and /MT
# for optimized configurations.
if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

# Third-party static libraries shared by the engine, the bot AI and the
# bspc tool.
add_subdirectory(third-party)

# The camera spline math and the renderer the engine links in.
add_subdirectory(splines)
add_subdirectory(renderer)

# The bot AI library, the function table tool and the runtime game modules.
add_subdirectory(games/botlib)
add_subdirectory(tools/extractfuncs)
add_subdirectory(games/game)
add_subdirectory(games/cgame)
add_subdirectory(games/ui)

add_subdirectory(tools/bspc)

# The engine executable.  The client, server, common and platform sources
# belong to the executable itself; the renderer, botlib and splines come in
# as libraries through wolf_configure_engine.
set(WOLF_SOURCES
    client/cl_cgame.cpp
    client/cl_cin.cpp
    client/cl_console.cpp
    client/cl_input.cpp
    client/cl_keys.cpp
    client/cl_main.cpp
    client/cl_net_chan.cpp
    client/cl_parse.cpp
    client/cl_scrn.cpp
    client/cl_ui.cpp
    qcommon/cm_load.cpp
    qcommon/cm_patch.cpp
    qcommon/cm_polylib.cpp
    qcommon/cm_test.cpp
    qcommon/cm_trace.cpp
    qcommon/cmd.cpp
    qcommon/common.cpp
    qcommon/cvar.cpp
    qcommon/files.cpp
    qcommon/huffman.cpp
    qcommon/md4.cpp
    qcommon/msg.cpp
    qcommon/net_chan.cpp
    qcommon/q_math.cpp
    qcommon/q_shared.cpp
    client/snd_adpcm.cpp
    client/snd_dma.cpp
    client/snd_mem.cpp
    client/snd_mix.cpp
    client/snd_wavelet.cpp
    server/sv_bot.cpp
    server/sv_ccmds.cpp
    server/sv_client.cpp
    server/sv_game.cpp
    server/sv_init.cpp
    server/sv_main.cpp
    server/sv_net_chan.cpp
    server/sv_snapshot.cpp
    server/sv_world.cpp
    qcommon/unzip.cpp
)
if(WIN32)
    list(APPEND WOLF_SOURCES
        sys/win32/win_input.cpp
        sys/win32/win_main.cpp
        sys/win32/win_net.cpp
        sys/win32/win_shared.cpp
        sys/win32/win_snd.cpp
        sys/win32/win_syscon.cpp
        sys/win32/win_wndproc.cpp
        sys/win32/winquake.rc
    )
else()
    list(APPEND WOLF_SOURCES
        sys/unix/unix_main.cpp
        sys/unix/unix_shared.cpp
        sys/unix/unix_net.cpp
        sys/unix/linux_glimp.cpp
        sys/unix/linux_joystick.cpp
        sys/unix/linux_snd.cpp
        sys/unix/linux_qgl.cpp
    )
endif()

add_executable(wolf WIN32 ${WOLF_SOURCES})
set_target_properties(wolf PROPERTIES OUTPUT_NAME "WolfSP_${WOLF_ARCH}")
wolf_configure_engine(wolf)

# The dedicated server: the same engine sources built with the DEDICATED
# define the tree already carries.  common.cpp then locks the dedicated
# cvar to 1 and skips the client, renderer and sound startup.
add_executable(wolfded WIN32 ${WOLF_SOURCES})
set_target_properties(wolfded PROPERTIES OUTPUT_NAME "WolfDED_${WOLF_ARCH}")
target_compile_definitions(wolfded PRIVATE DEDICATED)
wolf_configure_engine(wolfded)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT wolf)
