string(
    APPEND _opts
    "$<IF:$<CXX_COMPILER_ID:MSVC>,"
        "/W4;$<$<CONFIG:RELEASE>:/O2>,"
        "-Wall;-Wextra;"
            "$<$<CONFIG:RELEASE>:-O3>"
            "$<$<CXX_COMPILER_ID:Clang>:-stdlib=libc++>"
    ">"
)

add_compile_options("${_opts}")

add_executable(StartUp ${CMAKE_CURRENT_SOURCE_DIR}/StartUp.cpp)
add_executable(Loop1 ${CMAKE_CURRENT_SOURCE_DIR}/Loop1.cpp)
add_executable(Loop2 ${CMAKE_CURRENT_SOURCE_DIR}/Loop2.cpp)
