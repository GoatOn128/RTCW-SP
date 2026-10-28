cmake_minimum_required(VERSION 3.25)

project(WolfSP LANGUAGES C CXX)

if(WIN32)
	enable_language(RC)
endif()

include(cmake/Utils.cmake)

if(MSVC)
	set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

# Third-party
add_subdirectory(third-party)

# spline/renderer
add_subdirectory(splines)
add_subdirectory(renderer)

# game modules
add_subdirectory(games/botlib)

add_subdirectory(games/game)
add_subdirectory(games/cgame)
add_subdirectory(games/ui)

# tools
add_subdirectory(tools/bspc)
add_subdirectory(tools/extractfuncs)

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
set_target_properties(wolf PROPERTIES OUTPUT_NAME "WolfSP_${CPU_ARCH}")
configure_engine(wolf)

add_executable(wolfded WIN32 ${WOLF_SOURCES})
set_target_properties(wolfded PROPERTIES OUTPUT_NAME "WolfDED_${CPU_ARCH}")
target_compile_definitions(wolfded PRIVATE DEDICATED)
configure_engine(wolfded)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT wolf)

# attach the loose headers to the projects that own their directories and
# put the ones that no target owns into every project
attach_headers_to_targets()
group_target_sources(wolf)
group_target_sources(wolfded)
