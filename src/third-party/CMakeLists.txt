# The Recast and Detour navigation libraries used by the bot AI and the
# bspc tool.

set(RECAST_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/recast")

add_library(recast STATIC
    recast/Recast/Source/Recast.cpp
    recast/Recast/Source/RecastAlloc.cpp
    recast/Recast/Source/RecastArea.cpp
    recast/Recast/Source/RecastAssert.cpp
    recast/Recast/Source/RecastContour.cpp
    recast/Recast/Source/RecastFilter.cpp
    recast/Recast/Source/RecastLayers.cpp
    recast/Recast/Source/RecastMesh.cpp
    recast/Recast/Source/RecastMeshDetail.cpp
    recast/Recast/Source/RecastRasterization.cpp
    recast/Recast/Source/RecastRegion.cpp
)
target_include_directories(recast PUBLIC "${RECAST_ROOT}/Recast/Include")
wolf_configure_target(recast)

add_library(detour STATIC
    recast/Detour/Source/DetourAlloc.cpp
    recast/Detour/Source/DetourAssert.cpp
    recast/Detour/Source/DetourCommon.cpp
    recast/Detour/Source/DetourNavMesh.cpp
    recast/Detour/Source/DetourNavMeshBuilder.cpp
    recast/Detour/Source/DetourNavMeshQuery.cpp
    recast/Detour/Source/DetourNode.cpp
)
target_include_directories(detour PUBLIC "${RECAST_ROOT}/Detour/Include")
wolf_configure_target(detour)
