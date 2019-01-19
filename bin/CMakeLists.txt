# Dependencies
find_package(Raylib)
find_package(Squirrel)
find_package(Squall)

# raylib-squirrel
list(APPEND SOURCES raylib-squirrel.cpp)
list(APPEND LIBS raylib squirrel_static sqstdlib_static)
add_executable(raylib-squirrel ${SOURCES})
target_include_directories(raylib-squirrel PUBLIC
    ${raylib_SOURCE_DIR}/src
    ${squall_SOURCE_DIR}
    ${squirrel_SOURCE_DIR}/include
)
target_link_libraries(raylib-squirrel ${LIBS})