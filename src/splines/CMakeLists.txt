project(splines)

set(SPLINES_SOURCES
	math_angles.cpp
	math_matrix.cpp
	math_quaternion.cpp
	math_vector.cpp
	q_parse.cpp
	q_shared.cpp
	splines.cpp
	util_str.cpp
)

add_library(${PROJECT_NAME} STATIC ${SPLINES_SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE _LIB)
configure_target(${PROJECT_NAME})
