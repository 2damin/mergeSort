cmake_minimum_required(VERSION 3.10)

project(sorting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OUTPUT_DIR ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_DIR ${CMAKE_SOURCE_DIR}/lib)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)

add_subdirectory(example)
