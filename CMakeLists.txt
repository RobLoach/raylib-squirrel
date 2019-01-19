cmake_minimum_required(VERSION 3.11)
project(raylib-squirrel)

# Config options
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include_directories(include)

add_subdirectory(bin)

# Testing
include(CTest)
enable_testing()
if(BUILD_TESTING)
  configure_file(${CMAKE_SOURCE_DIR}/cmake/CTestCustom.cmake ${CMAKE_BINARY_DIR})
  add_subdirectory(tests)
endif()