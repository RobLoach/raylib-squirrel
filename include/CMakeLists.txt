add_library(raylib-squirrel-h INTERFACE)

set(RAYLIBJS_HEADERS
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-squirrel.h
)

install(FILES
  ${RAYLIBJS_HEADERS} DESTINATION include/raylib-squirrel
)

target_include_directories(raylib-squirrel-h INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

