project(ui)

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
	set_source_files_properties(../game/bg_lib.cpp PROPERTIES COMPILE_OPTIONS /Oi-)
endif()

add_library(${PROJECT_NAME} SHARED ${UI_SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "ui_${CPU_ARCH}")
target_compile_definitions(${PROJECT_NAME} PRIVATE _USRDLL UI_EXPORTS)
if(WIN32)
	target_link_libraries(${PROJECT_NAME} PRIVATE odbc32 odbccp32)
	target_link_options(${PROJECT_NAME} PRIVATE /BASE:0x40000000 /MAP:${ENGINE_MODULE_OUTPUT_DIRECTORY}/ui_${CPU_ARCH}.map)
endif()
configure_target(${PROJECT_NAME})
