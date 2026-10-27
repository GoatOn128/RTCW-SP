add_executable(bspc
    bspc.cpp
    navmesh_builder.cpp
    navmesh_builder.h
    ../nav/wolf_nav.h
)

target_include_directories(bspc PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/../game"
)
target_link_libraries(bspc PRIVATE recast detour)
target_compile_features(bspc PRIVATE cxx_std_17)
target_compile_definitions(bspc PRIVATE NOMINMAX)
wolf_configure_target(bspc)

set(BSPC_OUTPUT_DIRECTORY "${WOLF_ROOT}/bin_nt")
set_target_properties(bspc PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${BSPC_OUTPUT_DIRECTORY}")
foreach(configuration Debug Release RelWithDebInfo MinSizeRel)
    string(TOUPPER "${configuration}" configuration_upper)
    set_target_properties(bspc PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_${configuration_upper} "${BSPC_OUTPUT_DIRECTORY}"
    )
endforeach()
