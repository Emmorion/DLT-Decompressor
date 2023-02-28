cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(DecompressorPlugin VERSION 1.0)

add_library(DecompressorPlugin MODULE decompressorplugin.cpp)
target_include_directories(DecompressorPlugin PRIVATE compression_library)
target_link_libraries(DecompressorPlugin compressionLib)

add_plugin(DecompressorPlugin)

