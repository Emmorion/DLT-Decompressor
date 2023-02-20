cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
project(DecompressorPlugin VERSION 1.0)


add_subdirectory(compression_library)
add_executable(DecompressorPlugin decompressorplugin.cpp)

target_include_directories(DecompressorPlugin PUBLIC compressionLib)
target_include_directories(DecompressorPlugin PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/compression_library")