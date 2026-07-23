cmake_minimum_required(VERSION 3.15)
project(TDDEmbeddedC C)
set(CMAKE_C_STANDARD 99)

add_subdirectory(example)
add_subdirectory(example1)
add_subdirectory(example2)
# add_subdirectory(LinkTimeExample)
add_subdirectory(ThermalController)