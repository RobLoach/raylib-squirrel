find_package(squirrel QUIET)
if (NOT squirrel_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    squirrel
    GIT_REPOSITORY https://github.com/albertodemichelis/squirrel.git
    GIT_TAG 780e9c96b34d24d347c90756efa96f2927fcb641
  )
  FetchContent_GetProperties(squirrel)
  if (NOT squirrel_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(squirrel)
    add_subdirectory(${squirrel_SOURCE_DIR} ${squirrel_BINARY_DIR})
  endif()
endif()