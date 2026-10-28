project(bspc)

set(BSPC_SOURCES
	bspc.cpp
	navmesh_builder.cpp
	navmesh_builder.h)

add_executable(${PROJECT_NAME} ${BSPC_SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_SOURCE_DIR}/qcommon")
target_link_libraries(${PROJECT_NAME} PRIVATE recast detour)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_compile_definitions(${PROJECT_NAME} PRIVATE NOMINMAX)
configure_target(${PROJECT_NAME})
