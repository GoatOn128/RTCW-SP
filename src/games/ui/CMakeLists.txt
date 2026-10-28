# The menu UI module, loaded by the engine at runtime as
# ui_<arch>.dll/.so.

set(UI_SOURCES
    ../game/bg_lib.cpp
    ../game/bg_misc.cpp
    ../../qcommon/q_math.cpp
    ../../qcommon/q_shared.cpp
    ui_atoms.cpp
    ui_gameinfo.cpp
    ui_main.cpp
    ui_players.cpp
    ui_shared.cpp
    ui_syscalls.cpp
    ui_util.cpp
)
if(WIN32)
    list(APPEND UI_SOURCES ui.def)
endif()

if(MSVC)
    # bg_lib.cpp supplies the C runtime replacements used by the native game
    # DLLs.  Modern MSVC otherwise reserves these names as compiler
    # intrinsics and rejects their definitions.
    set_source_files_properties(../game/bg_lib.cpp PROPERTIES COMPILE_OPTIONS /Oi-)
endif()

add_library(ui SHARED ${UI_SOURCES})
set_target_properties(ui PROPERTIES OUTPUT_NAME "ui_${WOLF_ARCH}")
target_compile_definitions(ui PRIVATE _USRDLL UI_EXPORTS)
if(WIN32)
    target_link_libraries(ui PRIVATE odbc32 odbccp32)
    target_link_options(ui PRIVATE /BASE:0x40000000 /MAP:${WOLF_MODULE_OUTPUT_DIRECTORY}/ui_${WOLF_ARCH}.map)
endif()
wolf_configure_target(ui)
