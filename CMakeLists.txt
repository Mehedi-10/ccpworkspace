cmake_minimum_required(VERSION 3.17)
project(ccpworkspace)

set(CMAKE_CXX_STANDARD 20)

add_executable(main cmake-build-debug/main.cpp)
add_executable(test cmake-build-debug/test.cpp)
add_executable(zbf cmake-build-debug/bf.cpp)
add_executable(zgf cmake-build-debug/gf.cpp)
