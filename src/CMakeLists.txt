cmake_minimum_required(VERSION 3.25)

project(WolfSP LANGUAGES CXX RC)

if(NOT WIN32)
    message(FATAL_ERROR "This CMake conversion currently supports the legacy Win32 projects only.")
endif()

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    message(FATAL_ERROR "WolfSP must be configured for Win32 (x86). Use one of the supplied presets.")
endif()

set(WOLF_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
cmake_path(NORMAL_PATH WOLF_ROOT OUTPUT_VARIABLE WOLF_OUTPUT_DIRECTORY)

# Keep runnable products at the repository root.  Static and import libraries
# remain inside their own build tree so ../build and ../out cannot overwrite
# one another with a different configuration of the same .lib file.
function(wolf_set_output_directory target)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        LIBRARY_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        PDB_OUTPUT_DIRECTORY "${WOLF_OUTPUT_DIRECTORY}"
        COMPILE_PDB_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/pdb"
    )

    foreach(configuration Debug Release RelWithDebInfo MinSizeRel)
        string(TOUPPER "${configuration}" configuration_upper)
        set_target_properties(${target} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY_${configuration_upper} "${WOLF_OUTPUT_DIRECTORY}"
            LIBRARY_OUTPUT_DIRECTORY_${configuration_upper} "${WOLF_OUTPUT_DIRECTORY}"
            ARCHIVE_OUTPUT_DIRECTORY_${configuration_upper} "${CMAKE_BINARY_DIR}/lib/${configuration}"
            PDB_OUTPUT_DIRECTORY_${configuration_upper} "${WOLF_OUTPUT_DIRECTORY}"
            COMPILE_PDB_OUTPUT_DIRECTORY_${configuration_upper} "${CMAKE_BINARY_DIR}/pdb/${configuration}"
        )
    endforeach()
endfunction()

function(wolf_configure_target target)
    target_compile_definitions(${target} PRIVATE
        WIN32 _WINDOWS _CRT_SECURE_NO_WARNINGS
        $<$<CONFIG:Debug>:_DEBUG;DEBUG>
        $<$<NOT:$<CONFIG:Debug>>:NDEBUG>
    )
    target_compile_options(${target} PRIVATE
        $<$<CONFIG:Debug>:/W3>
        $<$<NOT:$<CONFIG:Debug>>:/W4>
    )
    wolf_set_output_directory(${target})
endfunction()

# Match the runtime selection in the original projects: /MTd for Debug and /MT
# for optimized configurations.
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# bg_lib.cpp supplies the C runtime replacements used by the native game DLLs. Modern
# MSVC otherwise reserves these names as compiler intrinsics and rejects their
# definitions.
set_source_files_properties(game/bg_lib.cpp PROPERTIES COMPILE_OPTIONS /Oi-)

set(RECAST_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/external/recast")
set(RECAST_SOURCES
    external/recast/Recast/Source/Recast.cpp
    external/recast/Recast/Source/RecastAlloc.cpp
    external/recast/Recast/Source/RecastArea.cpp
    external/recast/Recast/Source/RecastAssert.cpp
    external/recast/Recast/Source/RecastContour.cpp
    external/recast/Recast/Source/RecastFilter.cpp
    external/recast/Recast/Source/RecastLayers.cpp
    external/recast/Recast/Source/RecastMesh.cpp
    external/recast/Recast/Source/RecastMeshDetail.cpp
    external/recast/Recast/Source/RecastRasterization.cpp
    external/recast/Recast/Source/RecastRegion.cpp
)
set(DETOUR_SOURCES
    external/recast/Detour/Source/DetourAlloc.cpp
    external/recast/Detour/Source/DetourAssert.cpp
    external/recast/Detour/Source/DetourCommon.cpp
    external/recast/Detour/Source/DetourNavMesh.cpp
    external/recast/Detour/Source/DetourNavMeshBuilder.cpp
    external/recast/Detour/Source/DetourNavMeshQuery.cpp
    external/recast/Detour/Source/DetourNode.cpp
)

add_library(recast STATIC ${RECAST_SOURCES})
target_include_directories(recast PUBLIC "${RECAST_ROOT}/Recast/Include")
wolf_configure_target(recast)

add_library(detour STATIC ${DETOUR_SOURCES})
target_include_directories(detour PUBLIC "${RECAST_ROOT}/Detour/Include")
wolf_configure_target(detour)

add_subdirectory(bspc)

set(BOTLIB_SOURCES
    botlib/be_nav_interface.cpp
    botlib/be_ai_char.cpp
    botlib/be_ai_chat.cpp
    botlib/be_ai_gen.cpp
    botlib/be_ai_goal.cpp
    botlib/be_ai_move.cpp
    botlib/be_ai_weap.cpp
    botlib/be_ai_weight.cpp
    botlib/be_ea.cpp
    botlib/be_interface.cpp
    botlib/l_crc.cpp
    botlib/l_libvar.cpp
    botlib/l_log.cpp
    botlib/l_memory.cpp
    botlib/l_precomp.cpp
    botlib/l_script.cpp
    botlib/l_struct.cpp
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
    win32/win_gamma.cpp
    win32/win_glimp.cpp
    win32/win_qgl.cpp
    jpeg-6/jcapimin.cpp
    jpeg-6/jccoefct.cpp
    jpeg-6/jccolor.cpp
    jpeg-6/jcdctmgr.cpp
    jpeg-6/jchuff.cpp
    jpeg-6/jcinit.cpp
    jpeg-6/jcmainct.cpp
    jpeg-6/jcmarker.cpp
    jpeg-6/jcmaster.cpp
    jpeg-6/jcomapi.cpp
    jpeg-6/jcparam.cpp
    jpeg-6/jcphuff.cpp
    jpeg-6/jcprepct.cpp
    jpeg-6/jcsample.cpp
    jpeg-6/jctrans.cpp
    jpeg-6/jdapimin.cpp
    jpeg-6/jdapistd.cpp
    jpeg-6/jdatadst.cpp
    jpeg-6/jdatasrc.cpp
    jpeg-6/jdcoefct.cpp
    jpeg-6/jdcolor.cpp
    jpeg-6/jddctmgr.cpp
    jpeg-6/jdhuff.cpp
    jpeg-6/jdinput.cpp
    jpeg-6/jdmainct.cpp
    jpeg-6/jdmarker.cpp
    jpeg-6/jdmaster.cpp
    jpeg-6/jdpostct.cpp
    jpeg-6/jdsample.cpp
    jpeg-6/jdtrans.cpp
    jpeg-6/jerror.cpp
    jpeg-6/jfdctflt.cpp
    jpeg-6/jidctflt.cpp
    jpeg-6/jmemmgr.cpp
    jpeg-6/jmemnobs.cpp
    jpeg-6/jutils.cpp
    ft2/ahangles.cpp
    ft2/ahglobal.cpp
    ft2/ahglyph.cpp
    ft2/ahhint.cpp
    ft2/ahmodule.cpp
    ft2/ahoptim.cpp
    ft2/ftcalc.cpp
    ft2/ftdebug.cpp
    ft2/ftextend.cpp
    ft2/ftglyph.cpp
    ft2/ftgrays.cpp
    ft2/ftinit.cpp
    ft2/ftlist.cpp
    ft2/ftmm.cpp
    ft2/ftnames.cpp
    ft2/ftobjs.cpp
    ft2/ftoutln.cpp
    ft2/ftraster.cpp
    ft2/ftrend1.cpp
    ft2/ftsmooth.cpp
    ft2/ftstream.cpp
    ft2/ftsystem.cpp
    ft2/sfdriver.cpp
    ft2/sfobjs.cpp
    ft2/ttcmap.cpp
    ft2/ttdriver.cpp
    ft2/ttgload.cpp
    ft2/ttinterp.cpp
    ft2/ttload.cpp
    ft2/ttobjs.cpp
    ft2/ttpload.cpp
    ft2/ttpost.cpp
    ft2/ttsbit.cpp
)

add_library(renderer STATIC ${RENDERER_SOURCES})
target_compile_definitions(renderer PRIVATE _LIB __USEA3D __A3D_GEOM)
wolf_configure_target(renderer)

set(SPLINES_SOURCES
    splines/math_angles.cpp
    splines/math_matrix.cpp
    splines/math_quaternion.cpp
    splines/math_vector.cpp
    splines/q_parse.cpp
    splines/splines.cpp
    splines/util_str.cpp
)

add_library(Splines STATIC ${SPLINES_SOURCES})
target_compile_definitions(Splines PRIVATE _LIB)
wolf_configure_target(Splines)

set(EXTRACTFUNCS_SOURCES
    extractfuncs/extractfuncs.cpp
    extractfuncs/l_log.cpp
    extractfuncs/l_memory.cpp
    extractfuncs/l_precomp.cpp
    extractfuncs/l_script.cpp
)

add_executable(extractfuncs ${EXTRACTFUNCS_SOURCES})
target_compile_definitions(extractfuncs PRIVATE _CONSOLE SCREWUP)
# The optimizer in current MSVC releases crashes on this legacy parser.
target_compile_options(extractfuncs PRIVATE /Od)
wolf_configure_target(extractfuncs)

add_custom_target(game_function_table
    COMMAND $<TARGET_FILE:extractfuncs> "*.cpp" "ai/*.cpp" "ai/fsm/*.cpp"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/game"
    DEPENDS extractfuncs
    COMMENT "Building the game function table"
    VERBATIM
)

set(GAME_SOURCES
    game/ai/fsm/ai_ability.cpp
    game/ai/ai_system.cpp
    game/ai/ai_characters.cpp
    game/ai/ai_spawn.cpp
    game/ai/ai_debug.cpp
    game/ai/ai_events.cpp
    game/ai/fsm/ai_state_machine.cpp
    game/ai/fsm/ai_state_legacy.cpp
    game/ai/ai_awareness.cpp
    game/ai/ai_targeting.cpp
    game/ai/ai_perception.cpp
    game/ai/ai_weapons.cpp
    game/ai/fsm/ai_combat.cpp
    game/ai/ai_navigation.cpp
    game/ai/ai_danger.cpp
    game/ai/fsm/ai_monster_zombie.cpp
    game/ai/fsm/ai_monster_loper.cpp
    game/ai/fsm/ai_monster_stimsoldier.cpp
    game/ai/fsm/ai_monster_blackguard.cpp
    game/ai/fsm/ai_monster_reject.cpp
    game/ai/fsm/ai_monster_warzombie.cpp
    game/ai/fsm/ai_boss_helga.cpp
    game/ai/fsm/ai_boss_heinrich.cpp
    game/ai/ai_movement.cpp
    game/ai/fsm/ai_behavior_doors.cpp
    game/ai/fsm/ai_behavior_idle.cpp
    game/ai/fsm/ai_behavior_investigate.cpp
    game/ai/fsm/ai_behavior_pursuit.cpp
    game/ai/fsm/ai_behavior_evasion.cpp
    game/ai/fsm/ai_behavior_cover.cpp
    game/ai/fsm/ai_behavior_grenades.cpp
    game/ai/fsm/ai_behavior_mounted.cpp
    game/ai/ai_script.cpp
    game/ai/ai_script_actions_combat.cpp
    game/ai/ai_script_actions_movement.cpp
    game/ai/ai_script_actions_mission.cpp
    game/ai/ai_script_actions_animation.cpp
    game/ai/ai_script_entities.cpp
    game/ai/ai_input.cpp
    game/ai/ai_actor.cpp
    game/ai/ai_scheduler.cpp
    game/bg_animation.cpp
    game/bg_lib.cpp
    game/bg_misc.cpp
    game/bg_pmove.cpp
    game/bg_slidemove.cpp
    game/g_active.cpp
    game/g_alarm.cpp
    game/g_client.cpp
    game/g_cmds.cpp
    game/g_combat.cpp
    game/g_items.cpp
    game/g_main.cpp
    game/g_mem.cpp
    game/g_misc.cpp
    game/g_missile.cpp
    game/g_mover.cpp
    game/g_props.cpp
    game/g_save.cpp
    game/g_script.cpp
    game/g_script_actions.cpp
    game/g_session.cpp
    game/g_spawn.cpp
    game/g_svcmds.cpp
    game/g_syscalls.cpp
    game/g_target.cpp
    game/g_team.cpp
    game/g_tramcar.cpp
    game/g_trigger.cpp
    game/g_utils.cpp
    game/g_weapon.cpp
    game/q_math.cpp
    game/q_shared.cpp
    game/game.def
)

add_library(game SHARED ${GAME_SOURCES})
set_target_properties(game PROPERTIES OUTPUT_NAME qagamex86)
target_compile_definitions(game PRIVATE GAMEDLL $<$<CONFIG:Debug>:BUILDING_REF_GL>)
target_link_libraries(game PRIVATE winmm)
target_link_options(game PRIVATE /BASE:0x20000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/qagamex86.map)
add_dependencies(game game_function_table)
wolf_configure_target(game)

set(CGAME_SOURCES
    cgame/cg_fx.cpp
    cgame/FxSystem.cpp
    cgame/FxUtil.cpp
    cgame/FxPrimitives.cpp
    cgame/FxScheduler.cpp
    cgame/FxTemplate.cpp
    cgame/genericparser2.cpp
    game/bg_animation.cpp
    game/bg_lib.cpp
    game/bg_misc.cpp
    game/bg_pmove.cpp
    game/bg_slidemove.cpp
    cgame/cg_consolecmds.cpp
    cgame/cg_draw.cpp
    cgame/cg_drawtools.cpp
    cgame/cg_effects.cpp
    cgame/cg_ents.cpp
    cgame/cg_event.cpp
    cgame/cg_fx_flame.cpp
    cgame/cg_info.cpp
    cgame/cg_fx_entities.cpp
    cgame/cg_main.cpp
    cgame/cg_fx_marks.cpp
    cgame/cg_newDraw.cpp
    cgame/cg_fx_particles.cpp
    cgame/cg_players.cpp
    cgame/cg_playerstate.cpp
    cgame/cg_predict.cpp
    cgame/cg_scoreboard.cpp
    cgame/cg_servercmds.cpp
    cgame/cg_snapshot.cpp
    cgame/cg_sound.cpp
    cgame/cg_syscalls.cpp
    cgame/cg_fx_trails.cpp
    cgame/cg_view.cpp
    cgame/cg_weapons.cpp
    game/q_math.cpp
    game/q_shared.cpp
    ui/ui_shared.cpp
    cgame/cgame.def
)

add_library(cgame SHARED ${CGAME_SOURCES})
set_target_properties(cgame PROPERTIES OUTPUT_NAME cgamex86)
target_compile_definitions(cgame PRIVATE CGAMEDLL)
target_link_libraries(cgame PRIVATE odbc32 odbccp32)
target_link_options(cgame PRIVATE /BASE:0x30000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/cgamex86.map)
wolf_configure_target(cgame)

set(UI_SOURCES
    game/bg_lib.cpp
    game/bg_misc.cpp
    game/q_math.cpp
    game/q_shared.cpp
    ui/ui_atoms.cpp
    ui/ui_gameinfo.cpp
    ui/ui_main.cpp
    ui/ui_players.cpp
    ui/ui_shared.cpp
    ui/ui_syscalls.cpp
    ui/ui_util.cpp
    ui/ui.def
)

add_library(ui SHARED ${UI_SOURCES})
set_target_properties(ui PROPERTIES OUTPUT_NAME uix86)
target_compile_definitions(ui PRIVATE _USRDLL UI_EXPORTS)
target_link_libraries(ui PRIVATE odbc32 odbccp32)
target_link_options(ui PRIVATE /BASE:0x40000000 /MAP:${WOLF_OUTPUT_DIRECTORY}/uix86.map)
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
    game/q_math.cpp
    game/q_shared.cpp
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
    win32/win_input.cpp
    win32/win_main.cpp
    win32/win_net.cpp
    win32/win_shared.cpp
    win32/win_snd.cpp
    win32/win_syscon.cpp
    win32/win_wndproc.cpp
    win32/winquake.rc
)

add_executable(wolf WIN32 ${WOLF_SOURCES})
set_target_properties(wolf PROPERTIES OUTPUT_NAME WolfSP)
target_compile_definitions(wolf PRIVATE __USEA3D __A3D_GEOM CINTERFACE)
target_link_libraries(wolf PRIVATE renderer botlib Splines winmm wsock32)
target_link_options(wolf PRIVATE
    /STACK:8388608
    /MAP:${WOLF_OUTPUT_DIRECTORY}/WolfSP.map
    /NXCOMPAT:NO
)
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
