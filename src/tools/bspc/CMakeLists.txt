add_executable(bspc
    bspc.cpp
    navmesh_builder.cpp
    navmesh_builder.h
)

target_include_directories(bspc PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_SOURCE_DIR}/qcommon"
)
target_link_libraries(bspc PRIVATE recast detour)
target_compile_features(bspc PRIVATE cxx_std_17)
target_compile_definitions(bspc PRIVATE NOMINMAX)
wolf_configure_target(bspc)
