cmake_minimum_required(VERSION 3.11)
project(raylib-squirrel)

# Config options
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

add_subdirectory(bin)
add_subdirectory(examples)
add_subdirectory(include)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Testing
include(CTest)
enable_testing()
if(BUILD_TESTING)
  add_subdirectory(tests)
endif()