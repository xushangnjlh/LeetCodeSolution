cmake_minimum_required( VERSION 2.8 )
project (leetcode)

set( CMAKE_CXX_COMPILER "g++" )
set( CMAKE_BUILD_TYPE "Release" )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3")

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin )
include_directories( ${PROJECT_SOURCE_DIR}/include )

## executable
add_executable(leet001 src/leet001.cpp)
# add_executable(leet002 src/leet002.cpp)


