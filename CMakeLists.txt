cmake_minimum_required(VERSION 3.23)
project(
        Calculator
        VERSION 1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)

add_executable(Calculator main.cpp)
add_subdirectory(lib)
enable_testing()
add_subdirectory(tests)
