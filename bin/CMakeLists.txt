find_package(Raylib)
find_package(Squirrel)
find_package(Squall)

add_executable(raylib-squirrel raylib-squirrel.cpp)

target_link_libraries(raylib-squirrel raylib squirrel_static sqstdlib_static raylib-squirrel-h)

target_include_directories(raylib-squirrel PUBLIC
    ${raylib_SOURCE_DIR}/src
    ${squall_SOURCE_DIR}
    ${squirrel_SOURCE_DIR}/include
)