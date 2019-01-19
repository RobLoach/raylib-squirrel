find_package(squall 2.0 QUIET)
if (NOT squall_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    squall
    GIT_REPOSITORY https://github.com/jonigata/squall.git
    GIT_TAG d3c9c48a06b7d622835f6e3a8fe0c2576f4d08f3
  )
  FetchContent_GetProperties(squall)
  if (NOT squall_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(squall)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
    add_subdirectory(${squall_SOURCE_DIR} ${squall_BINARY_DIR})
  endif()
endif()