# The client-side game module, loaded by the engine at runtime as
# cgame_<arch>.dll/.so.

set(CGAME_SOURCES
    cg_fx.cpp
    fx/FxSystem.cpp
    fx/FxUtil.cpp
    fx/FxPrimitives.cpp
    fx/FxScheduler.cpp
    fx/FxTemplate.cpp
    fx/genericparser2.cpp
    ../game/bg_animation.cpp
    ../game/bg_lib.cpp
    ../game/bg_misc.cpp
    ../game/bg_pmove.cpp
    ../game/bg_slidemove.cpp
    cg_consolecmds.cpp
    cg_draw.cpp
    cg_drawtools.cpp
    cg_effects.cpp
    cg_ents.cpp
    cg_event.cpp
    cg_fx_flame.cpp
    cg_info.cpp
    cg_fx_entities.cpp
    cg_main.cpp
    cg_fx_marks.cpp
    cg_newDraw.cpp
    cg_fx_particles.cpp
    cg_players.cpp
    cg_playerstate.cpp
    cg_predict.cpp
    cg_scoreboard.cpp
    cg_servercmds.cpp
    cg_snapshot.cpp
    cg_sound.cpp
    cg_syscalls.cpp
    cg_fx_trails.cpp
    cg_view.cpp
    cg_weapons.cpp
    ../../qcommon/q_math.cpp
    ../../qcommon/q_shared.cpp
    ../ui/ui_shared.cpp
)
if(WIN32)
    list(APPEND CGAME_SOURCES cgame.def)
endif()

if(MSVC)
    # bg_lib.cpp supplies the C runtime replacements used by the native game
    # DLLs.  Modern MSVC otherwise reserves these names as compiler
    # intrinsics and rejects their definitions.
    set_source_files_properties(../game/bg_lib.cpp PROPERTIES COMPILE_OPTIONS /Oi-)
endif()

add_library(cgame SHARED ${CGAME_SOURCES})
set_target_properties(cgame PROPERTIES OUTPUT_NAME "cgame_${WOLF_ARCH}")
target_compile_definitions(cgame PRIVATE CGAMEDLL)
target_include_directories(cgame PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/fx"
    "${WOLF_SOURCE_DIR}/renderer"
)
if(WIN32)
    target_link_libraries(cgame PRIVATE odbc32 odbccp32)
    target_link_options(cgame PRIVATE /BASE:0x30000000 /MAP:${WOLF_MODULE_OUTPUT_DIRECTORY}/cgame_${WOLF_ARCH}.map)
endif()
wolf_configure_target(cgame)
