cmake_minimum_required(VERSION 3.8)

project(lab6)

include_directories(include)

add_subdirectory(lib/array)

add_executable(lab6
    src/main.cpp
)

target_link_libraries(lab6 ArifmeticArray_lib)