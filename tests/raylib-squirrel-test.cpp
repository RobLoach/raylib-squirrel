#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"

#include <string>

// Raylib
#include <raylib.h>

// Squirrel VM
#include "squall/squall_vmstd.hpp"

// Raylib
#include "raylib-squirrel.hpp"

TEST_CASE( "raylib-squirrel functions work", "[raylib-squirrel]" ) {

    // Create the Squirrel virtual machine.
    squall::VMStd vm;

    // Boostrap the VM with Raylib.
    raylib_squirrel(vm);

    // Global Function
    vm.dostring("function test() {return IsWindowReady();}");
    CHECK(vm.call<bool>("test") == false);

    // Colors
    vm.dostring("function colorTest() {return RAYWHITE.r;}");
    CHECK(vm.call<int>("colorTest") == 245);
}