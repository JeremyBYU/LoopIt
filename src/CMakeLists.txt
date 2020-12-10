string(
    APPEND _opts
    "$<IF:$<CXX_COMPILER_ID:MSVC>,"
        "/W4;$<$<CONFIG:RELEASE>:/O2>,"
        "-Wall;"
            "$<$<CONFIG:RELEASE>:-O3>"
            "$<$<CXX_COMPILER_ID:Clang>:-stdlib=libc++>"
    ">"
)

add_compile_options("${_opts}")

add_executable(StartUp ${CMAKE_CURRENT_SOURCE_DIR}/StartUp.cpp)
add_executable(While1 ${CMAKE_CURRENT_SOURCE_DIR}/While1.cpp)
add_executable(While2 ${CMAKE_CURRENT_SOURCE_DIR}/While2.cpp)
add_executable(While3 ${CMAKE_CURRENT_SOURCE_DIR}/While3.cpp)
add_executable(For1 ${CMAKE_CURRENT_SOURCE_DIR}/For1.cpp)
add_executable(For2 ${CMAKE_CURRENT_SOURCE_DIR}/For2.cpp)
add_executable(For3 ${CMAKE_CURRENT_SOURCE_DIR}/For3.cpp)
