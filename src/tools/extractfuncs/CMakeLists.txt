project(extractfuncs)

set(EXTRACTFUNCS_SOURCES
	extractfuncs.cpp
	l_log.cpp
	l_memory.cpp
	l_precomp.cpp
	l_script.cpp)

add_executable(${PROJECT_NAME} ${EXTRACTFUNCS_SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE _CONSOLE SCREWUP)
if(MSVC)
	target_compile_options(${PROJECT_NAME} PRIVATE /Od)
endif()
configure_target(${PROJECT_NAME})
