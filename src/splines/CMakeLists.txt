# The camera spline math library linked into the engine.

add_library(Splines STATIC
    math_angles.cpp
    math_matrix.cpp
    math_quaternion.cpp
    math_vector.cpp
    q_parse.cpp
    q_shared.cpp
    splines.cpp
    util_str.cpp
)
target_compile_definitions(Splines PRIVATE _LIB)
wolf_configure_target(Splines)
