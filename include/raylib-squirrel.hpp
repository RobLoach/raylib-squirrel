#ifndef RAYLIB_SQUIRREL_HPP_
#define RAYLIB_SQUIRREL_HPP_

#include "raylib.h"
#include "squall/squall_vm.hpp"
#include "squall/squall_klass.hpp"

void raylib_squirrel_color(squall::TableBase& table, const std::string& name, Color c) {
	table.set(name, c);
}

/**
 * Adds raylib bindings to the given Squirrel VM.
 */
void raylib_squirrel(squall::VM& vm) {
	vm.defun("IsWindowReady", &IsWindowReady);
	vm.defun("InitWindow", &InitWindow);
	vm.defun("SetTargetFPS", &SetTargetFPS);
	vm.defun("WindowShouldClose", &WindowShouldClose);
	vm.defun("BeginDrawing", &BeginDrawing);
	vm.defun("DrawText", &DrawText);
	vm.defun("EndDrawing", &EndDrawing);
	vm.defun("ClearBackground", &ClearBackground);
	vm.defun("CloseWindow", &CloseWindow);

    squall::Klass<Color> color(vm, "Color");
    color.var("r", &Color::r);
    color.var("g", &Color::g);
    color.var("b", &Color::b);
    color.var("a", &Color::a);

    squall::TableBase table = vm.root_table();


	raylib_squirrel_color(table, "RAYWHITE", RAYWHITE);
	raylib_squirrel_color(table, "LIGHTGRAY", LIGHTGRAY);
};

#endif