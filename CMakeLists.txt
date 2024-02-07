cmake_minimum_required(VERSION 3.10)
project(atlas_benchmark)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

link_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(atlas_benchmark main.cpp OptionParser.o)

target_link_libraries(atlas_benchmark cppbenchmark hdr_histogram_static)
