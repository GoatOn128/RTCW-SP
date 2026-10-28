cmake_minimum_required(VERSION 3.25)

project(WolfSP LANGUAGES C CXX)

if(WIN32)
    enable_language(RC)
endif()

# The engine loads the game modules at runtime as <name>_<arch>.dll/.so, so
# the arch suffix must follow the pointer size of the configured build.
if(CMAKE_SIZEOF_VOID_P EQUAL 4)
    set(WOLF_ARCH x86)
else()
    set(WOLF_ARCH x64)
endif()

# Keep runnable products at the repository root.  Static and import libraries
# remain inside their own build tree so two build trees cannot overwrite
# one another with a different configuration of the same .lib file.
set(WOLF_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/..")
cmake_path(NORMAL_PATH WOLF_OUTPUT_DIRECTORY)

function(wolf_set_output_directory target)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        LIBRARY_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        PDB_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        COMPILE_PDB_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/pdb"
    )
endfunction()

function(wolf_configure_target target)
    target_compile_definitions(${target} PRIVATE
        ARCH_STRING="${WOLF_ARCH}"
        $<$<CONFIG:Debug>:_DEBUG;DEBUG>
        $<$<NOT:$<CONFIG:Debug>>:NDEBUG>
    )
    if(WIN32)
        target_compile_definitions(${target} PRIVATE WIN32 _WINDOWS _CRT_SECURE_NO_WARNINGS)
    endif()
    if(MSVC)
        target_compile_options(${target} PRIVATE
            $<$<CONFIG:Debug>:/W3>
            $<$<NOT:$<CONFIG:Debug>>:/W4>
        )
    endif()
    target_include_directories(${target} PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/qcommon"
    )
    wolf_set_output_directory(${target})
endfunction()

# Match the runtime selection in the original projects: /MTd for Debug and /MT
# for optimized configurations.
if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

    # bg_lib.cpp supplies the C runtime replacements used by the native game
    # DLLs. Modern MSVC otherwise reserves these names as compiler intrinsics
    # and rejects their definitions.
    set_source_files_properties(games/game/bg_lib.cpp PROPERTIES COMPILE_OPTIONS /Oi-)

    # The vendored stb/dr_pcx decoders compile as one warnings-muted C unit.
    set_source_files_properties(third-party/stb/stb_impl.c PROPERTIES COMPILE_OPTIONS /W0)
endif()

set(RECAST_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/third-party/recast")
set(RECAST_SOURCES
    third-party/recast/Recast/Source/Recast.cpp
    third-party/recast/Recast/Source/RecastAlloc.cpp
    third-party/recast/Recast/Source/RecastArea.cpp
    third-party/recast/Recast/Source/RecastAssert.cpp
    third-party/recast/Recast/Source/RecastContour.cpp
    third-party/recast/Recast/Source/RecastFilter.cpp
    third-party/recast/Recast/Source/RecastLayers.cpp
    third-party/recast/Recast/Source/RecastMesh.cpp
    third-party/recast/Recast/Source/RecastMeshDetail.cpp
    third-party/recast/Recast/Source/RecastRasterization.cpp
    third-party/recast/Recast/Source/RecastRegion.cpp
)
set(DETOUR_SOURCES
    third-party/recast/Detour/Source/DetourAlloc.cpp
    third-party/recast/Detour/Source/DetourAssert.cpp
    third-party/recast/Detour/Source/DetourCommon.cpp
    third-party/recast/Detour/Source/DetourNavMesh.cpp
    third-party/recast/Detour/Source/DetourNavMeshBuilder.cpp
    third-party/recast/Detour/Source/DetourNavMeshQuery.cpp
    third-party/recast/Detour/Source/DetourNode.cpp
)

add_library(recast STATIC ${RECAST_SOURCES})
target_include_directories(recast PUBLIC "${RECAST_ROOT}/Recast/Include")
wolf_configure_target(recast)

add_library(detour STATIC ${DETOUR_SOURCES})
target_include_directories(detour PUBLIC "${RECAST_ROOT}/Detour/Include")
wolf_configure_target(detour)

add_subdirectory(tools/bspc)

set(BOTLIB_SOURCES
    games/botlib/be_nav_interface.cpp
    games/botlib/be_ai_char.cpp
    games/botlib/be_ai_chat.cpp
    games/botlib/be_ai_gen.cpp
    games/botlib/be_ai_goal.cpp
    games/botlib/be_ai_move.cpp
    games/botlib/be_ai_weap.cpp
    games/botlib/be_ai_weight.cpp
    games/botlib/be_ea.cpp
    games/botlib/be_interface.cpp
    games/botlib/l_crc.cpp
    games/botlib/l_libvar.cpp
    games/botlib/l_log.cpp
    games/botlib/l_memory.cpp
    games/botlib/l_precomp.cpp
    games/botlib/l_script.cpp
    games/botlib/l_struct.cpp
)

add_library(botlib STATIC ${BOTLIB_SOURCES})
target_compile_definitions(botlib PRIVATE _LIB BOTLIB)
target_compile_features(botlib PRIVATE cxx_std_17)
target_include_directories(botlib PRIVATE "${RECAST_ROOT}/Detour/Include")
target_link_libraries(botlib PUBLIC detour)
wolf_configure_target(botlib)

set(RENDERER_SOURCES
    renderer/tr_animation.cpp
    renderer/tr_backend.cpp
    renderer/tr_renderprog.cpp
    renderer/tr_decals.cpp
    renderer/tr_vfx.cpp
    renderer/tr_bsp.cpp
    renderer/tr_cmds.cpp
    renderer/tr_cmesh.cpp
    renderer/tr_curve.cpp
    renderer/tr_flares.cpp
    renderer/tr_font.cpp
    renderer/tr_image.cpp
    renderer/tr_init.cpp
    renderer/tr_light.cpp
    renderer/tr_main.cpp
    renderer/tr_marks.cpp
    renderer/tr_mesh.cpp
    renderer/tr_model.cpp
    renderer/tr_noise.cpp
    renderer/tr_scene.cpp
    renderer/tr_shade.cpp
    renderer/tr_shade_calc.cpp
    renderer/tr_shader.cpp
    renderer/tr_shadows.cpp
    renderer/tr_sky.cpp
    renderer/tr_surface.cpp
    renderer/tr_world.cpp
    third-party/stb/stb_impl.c
)
if(WIN32)
    list(APPEND RENDERER_SOURCES
        sys/win32/win_gamma.cpp
        sys/win32/win_glimp.cpp
        sys/win32/win_qgl.cpp
    )
else()
    list(APPEND RENDERER_SOURCES
        sys/unix/linux_glimp.cpp
        sys/unix/linux_qgl.cpp
    )
endif()

add_library(renderer STATIC ${RENDERER_SOURCES})
target_compile_definitions(renderer PRIVATE _LIB __USEA3D __A3D_GEOM)
target_include_directories(renderer PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/third-party/stb"
    "${CMAKE_CURRENT_SOURCE_DIR}/third-party/drlibs"
)
wolf_configure_target(renderer)

set(SPLINES_SOURCES
    splines/math_angles.cpp
    splines/math_matrix.cpp
    splines/math_quaternion.cpp
    splines/math_vector.cpp
    splines/q_parse.cpp
    splines/q_shared.cpp
    splines/splines.cpp
    splines/util_str.cpp
)

add_library(Splines STATIC ${SPLINES_SOURCES})
target_compile_definitions(Splines PRIVATE _LIB)
wolf_configure_target(Splines)

set(EXTRACTFUNCS_SOURCES
    tools/extractfuncs/extractfuncs.cpp
    tools/extractfuncs/l_log.cpp
    tools/extractfuncs/l_memory.cpp
    tools/extractfuncs/l_precomp.cpp
    tools/extractfuncs/l_script.cpp
)

add_executable(extractfuncs ${EXTRACTFUNCS_SOURCES})
target_compile_definitions(extractfuncs PRIVATE _CONSOLE SCREWUP)
if(MSVC)
    # The optimizer in current MSVC releases crashes on this legacy parser.
    target_compile_options(extractfuncs PRIVATE /Od)
endif()
wolf_configure_target(extractfuncs)

# extractfuncs rebuilds the game function table (g_funcs.h / g_func_decs.h)
# that g_save.cpp compiles in.  The Windows main() accepts FindFirstFile
# filters but the Linux main() takes literal file paths, so pass the explicit
# source list on both platforms.  Reconfigure to pick up added files.
file(GLOB WOLF_GAME_SCAN
    "${CMAKE_CURRENT_SOURCE_DIR}/games/game/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/games/game/ai/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/games/game/ai/fsm/*.cpp"
)
list(REMOVE_ITEM WOLF_GAME_SCAN "${CMAKE_CURRENT_SOURCE_DIR}/games/game/bg_lib.cpp")

add_custom_target(game_function_table
    COMMAND $<TARGET_FILE:extractfuncs> ${WOLF_GAME_SCAN}
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/games/game"
    DEPENDS extractfuncs
    COMMENT "Building the game function table"
    VERBATIM
)

set(GAME_SOURCES
    games/game/ai/fsm/ai_ability.cpp
    games/game/ai/ai_system.cpp
    games/game/ai/ai_characters.cpp
    games/game/ai/ai_spawn.cpp
    games/game/ai/ai_debug.cpp
    games/game/ai/ai_events.cpp
    games/game/ai/fsm/ai_state_machine.cpp
    games/game/ai/fsm/ai_state_legacy.cpp
    games/game/ai/ai_awareness.cpp
    games/game/ai/ai_targeting.cpp
    games/game/ai/ai_perception.cpp
    games/game/ai/ai_weapons.cpp
    games/game/ai/fsm/ai_combat.cpp
    games/game/ai/ai_navigation.cpp
    games/game/ai/ai_danger.cpp
    games/game/ai/fsm/ai_monster_zombie.cpp
    games/game/ai/fsm/ai_monster_loper.cpp
    games/game/ai/fsm/ai_monster_stimsoldier.cpp
    games/game/ai/fsm/ai_monster_blackguard.cpp
    games/game/ai/fsm/ai_monster_reject.cpp
    games/game/ai/fsm/ai_monster_warzombie.cpp
    games/game/ai/fsm/ai_boss_helga.cpp
    games/game/ai/fsm/ai_boss_heinrich.cpp
    games/game/ai/ai_movement.cpp
    games/game/ai/fsm/ai_behavior_doors.cpp
    games/game/ai/fsm/ai_behavior_idle.cpp
    games/game/ai/fsm/ai_behavior_investigate.cpp
    games/game/ai/fsm/ai_behavior_pursuit.cpp
    games/game/ai/fsm/ai_behavior_evasion.cpp
    games/game/ai/fsm/ai_behavior_cover.cpp
    games/game/ai/fsm/ai_behavior_grenades.cpp
    games/game/ai/fsm/ai_behavior_mounted.cpp
    games/game/ai/ai_script.cpp
    games/game/ai/ai_script_actions_combat.cpp
    games/game/ai/ai_script_actions_movement.cpp
    games/game/ai/ai_script_actions_mission.cpp
    games/game/ai/ai_script_actions_animation.cpp
    games/game/ai/ai_script_entities.cpp
    games/game/ai/ai_input.cpp
    games/game/ai/ai_actor.cpp
    games/game/ai/ai_scheduler.cpp
    games/game/bg_animation.cpp
    games/game/bg_lib.cpp
    games/game/bg_misc.cpp
    games/game/bg_pmove.cpp
    games/game/bg_slidemove.cpp
    games/game/g_active.cpp
    games/game/g_alarm.cpp
    games/game/g_client.cpp
    games/game/g_cmds.cpp
    games/game/g_combat.cpp
    games/game/g_items.cpp
    games/game/g_main.cpp
    games/game/g_mem.cpp
    games/game/g_misc.cpp
    games/game/g_missile.cpp
    games/game/g_mover.cpp
    games/game/g_props.cpp
    games/game/g_save.cpp
    games/game/g_script.cpp
    games/game/g_script_actions.cpp
    games/game/g_session.cpp
    games/game/g_spawn.cpp
    games/game/g_svcmds.cpp
    games/game/g_syscalls.cpp
    games/game/g_target.cpp
    games/game/g_team.cpp
    games/game/g_tramcar.cpp
    games/game/g_trigger.cpp
    games/game/g_utils.cpp
    games/game/g_weapon.cpp
    qcommon/q_math.cpp
    qcommon/q_shared.cpp
)
if(WIN32)
    list(APPEND GAME_SOURCES games/game/game.def)
endif()

add_library(game SHARED ${GAME_SOURCES})
set_target_properties(game PROPERTIES OUTPUT_NAME "qagame_${WOLF_ARCH}")
target_compile_definitions(game PRIVATE GAMEDLL $<$<CONFIG:Debug>:BUILDING_REF_GL>)
add_dependencies(game game_function_table)
if(WIN32)
    target_link_libraries(game PRIVATE winmm)
    target_link_options(game PRIVATE /BASE:0x20000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/qagame_${WOLF_ARCH}.map)
endif()
wolf_configure_target(game)

set(CGAME_SOURCES
    games/cgame/cg_fx.cpp
    games/cgame/fx/FxSystem.cpp
    games/cgame/fx/FxUtil.cpp
    games/cgame/fx/FxPrimitives.cpp
    games/cgame/fx/FxScheduler.cpp
    games/cgame/fx/FxTemplate.cpp
    games/cgame/fx/genericparser2.cpp
    games/game/bg_animation.cpp
    games/game/bg_lib.cpp
    games/game/bg_misc.cpp
    games/game/bg_pmove.cpp
    games/game/bg_slidemove.cpp
    games/cgame/cg_consolecmds.cpp
    games/cgame/cg_draw.cpp
    games/cgame/cg_drawtools.cpp
    games/cgame/cg_effects.cpp
    games/cgame/cg_ents.cpp
    games/cgame/cg_event.cpp
    games/cgame/cg_fx_flame.cpp
    games/cgame/cg_info.cpp
    games/cgame/cg_fx_entities.cpp
    games/cgame/cg_main.cpp
    games/cgame/cg_fx_marks.cpp
    games/cgame/cg_newDraw.cpp
    games/cgame/cg_fx_particles.cpp
    games/cgame/cg_players.cpp
    games/cgame/cg_playerstate.cpp
    games/cgame/cg_predict.cpp
    games/cgame/cg_scoreboard.cpp
    games/cgame/cg_servercmds.cpp
    games/cgame/cg_snapshot.cpp
    games/cgame/cg_sound.cpp
    games/cgame/cg_syscalls.cpp
    games/cgame/cg_fx_trails.cpp
    games/cgame/cg_view.cpp
    games/cgame/cg_weapons.cpp
    qcommon/q_math.cpp
    qcommon/q_shared.cpp
    games/ui/ui_shared.cpp
)
if(WIN32)
    list(APPEND CGAME_SOURCES games/cgame/cgame.def)
endif()

add_library(cgame SHARED ${CGAME_SOURCES})
set_target_properties(cgame PROPERTIES OUTPUT_NAME "cgame_${WOLF_ARCH}")
target_compile_definitions(cgame PRIVATE CGAMEDLL)
if(WIN32)
    target_link_libraries(cgame PRIVATE odbc32 odbccp32)
    target_link_options(cgame PRIVATE /BASE:0x30000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/cgame_${WOLF_ARCH}.map)
endif()
wolf_configure_target(cgame)

set(UI_SOURCES
    games/game/bg_lib.cpp
    games/game/bg_misc.cpp
    qcommon/q_math.cpp
    qcommon/q_shared.cpp
    games/ui/ui_atoms.cpp
    games/ui/ui_gameinfo.cpp
    games/ui/ui_main.cpp
    games/ui/ui_players.cpp
    games/ui/ui_shared.cpp
    games/ui/ui_syscalls.cpp
    games/ui/ui_util.cpp
)
if(WIN32)
    list(APPEND UI_SOURCES games/ui/ui.def)
endif()

add_library(ui SHARED ${UI_SOURCES})
set_target_properties(ui PROPERTIES OUTPUT_NAME "ui_${WOLF_ARCH}")
target_compile_definitions(ui PRIVATE _USRDLL UI_EXPORTS)
if(WIN32)
    target_link_libraries(ui PRIVATE odbc32 odbccp32)
    target_link_options(ui PRIVATE /BASE:0x40000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/ui_${WOLF_ARCH}.map)
endif()
wolf_configure_target(ui)

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
    add_executable(wolf WIN32 ${WOLF_SOURCES})
else()
    list(APPEND WOLF_SOURCES
        sys/unix/unix_main.cpp
        sys/unix/unix_shared.cpp
        sys/unix/unix_net.cpp
        sys/unix/linux_common.cpp
        sys/unix/linux_glimp.cpp
        sys/unix/linux_joystick.cpp
        sys/unix/linux_snd.cpp
        sys/unix/linux_qgl.cpp
    )
    add_executable(wolf ${WOLF_SOURCES})
endif()

set_target_properties(wolf PROPERTIES OUTPUT_NAME "WolfSP_${WOLF_ARCH}")
target_compile_definitions(wolf PRIVATE __USEA3D __A3D_GEOM CINTERFACE)
target_link_libraries(wolf PRIVATE renderer botlib Splines)
if(WIN32)
    target_link_libraries(wolf PRIVATE winmm wsock32)
    target_link_options(wolf PRIVATE
        /STACK:8388608
        /MAP:${WOLF_OUTPUT_DIRECTORY}/WolfSP_${WOLF_ARCH}.map
        /NXCOMPAT:NO
    )
else()
    target_link_libraries(wolf PRIVATE X11 GL Xxf86dga Xxf86vm dl m pthread)
endif()
wolf_configure_target(wolf)

# Recreate the original solution build ordering: building WolfSP also produces
# the three game DLLs, even though they are loaded at runtime rather than linked.
add_dependencies(wolf game cgame ui)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT wolf)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES
    ${BOTLIB_SOURCES}
    ${RENDERER_SOURCES}
    ${SPLINES_SOURCES}
    ${EXTRACTFUNCS_SOURCES}
    ${GAME_SOURCES}
    ${CGAME_SOURCES}
    ${UI_SOURCES}
    ${WOLF_SOURCES}
)
