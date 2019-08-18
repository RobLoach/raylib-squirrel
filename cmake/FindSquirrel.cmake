find_package(squirrel QUIET)
if (NOT squirrel_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    squirrel
    GIT_REPOSITORY https://github.com/albertodemichelis/squirrel.git
    GIT_TAG 1b25d4acda9e636cb7109629260a88badc58d884
  )
  FetchContent_GetProperties(squirrel)
  if (NOT squirrel_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(squirrel)
    add_subdirectory(${squirrel_SOURCE_DIR} ${squirrel_BINARY_DIR})
  endif()
endif()
