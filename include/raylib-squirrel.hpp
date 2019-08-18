#ifndef RAYLIB_SQUIRREL_HPP_
#define RAYLIB_SQUIRREL_HPP_

// Raylib
extern "C" {
    #include <raylib.h>
}
#include "squall/squall_vm.hpp"
#include "squall/squall_klass.hpp"
#include "squall/squall_table.hpp"

inline void raylib_squirrel_functions(squall::VM& vm) {
	vm.defun("IsWindowReady", &IsWindowReady);
	vm.defun("InitWindow", &InitWindow);
	vm.defun("SetTargetFPS", &SetTargetFPS);
	vm.defun("WindowShouldClose", &WindowShouldClose);
	vm.defun("BeginDrawing", &BeginDrawing);
	vm.defun("DrawText", &DrawText);
	vm.defun("DrawTexture", &DrawTexture);
	vm.defun("EndDrawing", &EndDrawing);
	vm.defun("ClearBackground", &ClearBackground);
	vm.defun("CloseWindow", &CloseWindow);

	vm.defun("IsMouseButtonDown", IsMouseButtonDown);
	vm.defun("DrawRectangle", DrawRectangle);
	vm.defun("LoadTexture", LoadTexture);
	vm.defun("UnloadTexture", UnloadTexture);
}

inline void raylib_squirrel_structs(squall::VM& vm) {
    squall::Klass<Vector2> vector2(vm, "Vector2");
    vector2.var("x", &Vector2::x);
    vector2.var("y", &Vector2::y);

    squall::Klass<Color> color(vm, "Color");
    color.var("r", &Color::r);
    color.var("g", &Color::g);
    color.var("b", &Color::b);
    color.var("a", &Color::a);

    // squall::Klass<Texture2D> texture2d(vm, "Texture2D");
    // texture2d.var("id", &Texture2D::id);
    // texture2d.var("width", &Texture2D::width);
    // texture2d.var("height", &Texture2D::height);
    // texture2d.var("mipmaps", &Texture2D::mipmaps);
    // texture2d.var("format", &Texture2D::format);
}

inline void raylib_squirrel_defines(squall::VM& vm) {
    squall::TableBase table = vm.root_table();
    //squall::Table table(vm);

    // Colors
	table.set("LIGHTGRAY", LIGHTGRAY);
	table.set("GRAY", GRAY);
	table.set("DARKGRAY", DARKGRAY);
	table.set("YELLOW", YELLOW);
	table.set("GOLD", GOLD);
	table.set("ORANGE", ORANGE);
	table.set("PINK", PINK);
	table.set("RED", RED);
	table.set("MAROON", MAROON);
	table.set("GREEN", GREEN);
	table.set("LIME", LIME);
	table.set("DARKGREEN", DARKGREEN);
	table.set("SKYBLUE", SKYBLUE);
	table.set("BLUE", BLUE);
	table.set("DARKBLUE", DARKBLUE);
	table.set("PURPLE", PURPLE);
	table.set("VIOLET", VIOLET);
	table.set("DARKPURPLE", DARKPURPLE);
	table.set("BEIGE", BEIGE);
	table.set("BROWN", BROWN);
	table.set("DARKBROWN", DARKBROWN);
	table.set("WHITE", WHITE);
	table.set("BLACK", BLACK);
	table.set("BLANK", BLANK);
	table.set("MAGENTA", MAGENTA);
	table.set("RAYWHITE", RAYWHITE);

	// Enums
	table.set("FLAG_SHOW_LOGO", (int)FLAG_SHOW_LOGO);
	table.set("FLAG_FULLSCREEN_MODE", (int)FLAG_FULLSCREEN_MODE);
	table.set("FLAG_WINDOW_RESIZABLE", (int)FLAG_WINDOW_RESIZABLE);
	table.set("FLAG_WINDOW_UNDECORATED", (int)FLAG_WINDOW_UNDECORATED);
	table.set("FLAG_WINDOW_TRANSPARENT", (int)FLAG_WINDOW_TRANSPARENT);
	table.set("FLAG_WINDOW_HIDDEN", (int)FLAG_WINDOW_HIDDEN);
	table.set("FLAG_WINDOW_ALWAYS_RUN", (int)FLAG_WINDOW_ALWAYS_RUN);
	table.set("FLAG_MSAA_4X_HINT", (int)FLAG_MSAA_4X_HINT);
	table.set("FLAG_VSYNC_HINT", (int)FLAG_VSYNC_HINT);
	table.set("LOG_ALL", (int)LOG_ALL);
	table.set("LOG_TRACE", (int)LOG_TRACE);
	table.set("LOG_DEBUG", (int)LOG_DEBUG);
	table.set("LOG_INFO", (int)LOG_INFO);
	table.set("LOG_WARNING", (int)LOG_WARNING);
	table.set("LOG_ERROR", (int)LOG_ERROR);
	table.set("LOG_FATAL", (int)LOG_FATAL);
	table.set("LOG_NONE", (int)LOG_NONE);
	table.set("KEY_APOSTROPHE", (int)KEY_APOSTROPHE);
	table.set("KEY_COMMA", (int)KEY_COMMA);
	table.set("KEY_MINUS", (int)KEY_MINUS);
	table.set("KEY_PERIOD", (int)KEY_PERIOD);
	table.set("KEY_SLASH", (int)KEY_SLASH);
	table.set("KEY_ZERO", (int)KEY_ZERO);
	table.set("KEY_ONE", (int)KEY_ONE);
	table.set("KEY_TWO", (int)KEY_TWO);
	table.set("KEY_THREE", (int)KEY_THREE);
	table.set("KEY_FOUR", (int)KEY_FOUR);
	table.set("KEY_FIVE", (int)KEY_FIVE);
	table.set("KEY_SIX", (int)KEY_SIX);
	table.set("KEY_SEVEN", (int)KEY_SEVEN);
	table.set("KEY_EIGHT", (int)KEY_EIGHT);
	table.set("KEY_NINE", (int)KEY_NINE);
	table.set("KEY_SEMICOLON", (int)KEY_SEMICOLON);
	table.set("KEY_EQUAL", (int)KEY_EQUAL);
	table.set("KEY_A", (int)KEY_A);
	table.set("KEY_B", (int)KEY_B);
	table.set("KEY_C", (int)KEY_C);
	table.set("KEY_D", (int)KEY_D);
	table.set("KEY_E", (int)KEY_E);
	table.set("KEY_F", (int)KEY_F);
	table.set("KEY_G", (int)KEY_G);
	table.set("KEY_H", (int)KEY_H);
	table.set("KEY_I", (int)KEY_I);
	table.set("KEY_J", (int)KEY_J);
	table.set("KEY_K", (int)KEY_K);
	table.set("KEY_L", (int)KEY_L);
	table.set("KEY_M", (int)KEY_M);
	table.set("KEY_N", (int)KEY_N);
	table.set("KEY_O", (int)KEY_O);
	table.set("KEY_P", (int)KEY_P);
	table.set("KEY_Q", (int)KEY_Q);
	table.set("KEY_R", (int)KEY_R);
	table.set("KEY_S", (int)KEY_S);
	table.set("KEY_T", (int)KEY_T);
	table.set("KEY_U", (int)KEY_U);
	table.set("KEY_V", (int)KEY_V);
	table.set("KEY_W", (int)KEY_W);
	table.set("KEY_X", (int)KEY_X);
	table.set("KEY_Y", (int)KEY_Y);
	table.set("KEY_Z", (int)KEY_Z);
	table.set("KEY_SPACE", (int)KEY_SPACE);
	table.set("KEY_ESCAPE", (int)KEY_ESCAPE);
	table.set("KEY_ENTER", (int)KEY_ENTER);
	table.set("KEY_TAB", (int)KEY_TAB);
	table.set("KEY_BACKSPACE", (int)KEY_BACKSPACE);
	table.set("KEY_INSERT", (int)KEY_INSERT);
	table.set("KEY_DELETE", (int)KEY_DELETE);
	table.set("KEY_RIGHT", (int)KEY_RIGHT);
	table.set("KEY_LEFT", (int)KEY_LEFT);
	table.set("KEY_DOWN", (int)KEY_DOWN);
	table.set("KEY_UP", (int)KEY_UP);
	table.set("KEY_PAGE_UP", (int)KEY_PAGE_UP);
	table.set("KEY_PAGE_DOWN", (int)KEY_PAGE_DOWN);
	table.set("KEY_HOME", (int)KEY_HOME);
	table.set("KEY_END", (int)KEY_END);
	table.set("KEY_CAPS_LOCK", (int)KEY_CAPS_LOCK);
	table.set("KEY_SCROLL_LOCK", (int)KEY_SCROLL_LOCK);
	table.set("KEY_NUM_LOCK", (int)KEY_NUM_LOCK);
	table.set("KEY_PRINT_SCREEN", (int)KEY_PRINT_SCREEN);
	table.set("KEY_PAUSE", (int)KEY_PAUSE);
	table.set("KEY_F1", (int)KEY_F1);
	table.set("KEY_F2", (int)KEY_F2);
	table.set("KEY_F3", (int)KEY_F3);
	table.set("KEY_F4", (int)KEY_F4);
	table.set("KEY_F5", (int)KEY_F5);
	table.set("KEY_F6", (int)KEY_F6);
	table.set("KEY_F7", (int)KEY_F7);
	table.set("KEY_F8", (int)KEY_F8);
	table.set("KEY_F9", (int)KEY_F9);
	table.set("KEY_F10", (int)KEY_F10);
	table.set("KEY_F11", (int)KEY_F11);
	table.set("KEY_F12", (int)KEY_F12);
	table.set("KEY_LEFT_SHIFT", (int)KEY_LEFT_SHIFT);
	table.set("KEY_LEFT_CONTROL", (int)KEY_LEFT_CONTROL);
	table.set("KEY_LEFT_ALT", (int)KEY_LEFT_ALT);
	table.set("KEY_LEFT_SUPER", (int)KEY_LEFT_SUPER);
	table.set("KEY_RIGHT_SHIFT", (int)KEY_RIGHT_SHIFT);
	table.set("KEY_RIGHT_CONTROL", (int)KEY_RIGHT_CONTROL);
	table.set("KEY_RIGHT_ALT", (int)KEY_RIGHT_ALT);
	table.set("KEY_RIGHT_SUPER", (int)KEY_RIGHT_SUPER);
	table.set("KEY_KB_MENU", (int)KEY_KB_MENU);
	table.set("KEY_LEFT_BRACKET", (int)KEY_LEFT_BRACKET);
	table.set("KEY_BACKSLASH", (int)KEY_BACKSLASH);
	table.set("KEY_RIGHT_BRACKET", (int)KEY_RIGHT_BRACKET);
	table.set("KEY_GRAVE", (int)KEY_GRAVE);
	table.set("KEY_KP_0", (int)KEY_KP_0);
	table.set("KEY_KP_1", (int)KEY_KP_1);
	table.set("KEY_KP_2", (int)KEY_KP_2);
	table.set("KEY_KP_3", (int)KEY_KP_3);
	table.set("KEY_KP_4", (int)KEY_KP_4);
	table.set("KEY_KP_5", (int)KEY_KP_5);
	table.set("KEY_KP_6", (int)KEY_KP_6);
	table.set("KEY_KP_7", (int)KEY_KP_7);
	table.set("KEY_KP_8", (int)KEY_KP_8);
	table.set("KEY_KP_9", (int)KEY_KP_9);
	table.set("KEY_KP_DECIMAL", (int)KEY_KP_DECIMAL);
	table.set("KEY_KP_DIVIDE", (int)KEY_KP_DIVIDE);
	table.set("KEY_KP_MULTIPLY", (int)KEY_KP_MULTIPLY);
	table.set("KEY_KP_SUBTRACT", (int)KEY_KP_SUBTRACT);
	table.set("KEY_KP_ADD", (int)KEY_KP_ADD);
	table.set("KEY_KP_ENTER", (int)KEY_KP_ENTER);
	table.set("KEY_KP_EQUAL", (int)KEY_KP_EQUAL);
	table.set("KEY_BACK", (int)KEY_BACK);
	table.set("KEY_MENU", (int)KEY_MENU);
	table.set("KEY_VOLUME_UP", (int)KEY_VOLUME_UP);
	table.set("KEY_VOLUME_DOWN", (int)KEY_VOLUME_DOWN);
	table.set("MOUSE_LEFT_BUTTON", (int)MOUSE_LEFT_BUTTON);
	table.set("MOUSE_RIGHT_BUTTON", (int)MOUSE_RIGHT_BUTTON);
	table.set("MOUSE_MIDDLE_BUTTON", (int)MOUSE_MIDDLE_BUTTON);
	table.set("GAMEPAD_PLAYER1", (int)GAMEPAD_PLAYER1);
	table.set("GAMEPAD_PLAYER2", (int)GAMEPAD_PLAYER2);
	table.set("GAMEPAD_PLAYER3", (int)GAMEPAD_PLAYER3);
	table.set("GAMEPAD_PLAYER4", (int)GAMEPAD_PLAYER4);
	table.set("GAMEPAD_BUTTON_UNKNOWN", (int)GAMEPAD_BUTTON_UNKNOWN);
	table.set("GAMEPAD_BUTTON_LEFT_FACE_UP", (int)GAMEPAD_BUTTON_LEFT_FACE_UP);
	table.set("GAMEPAD_BUTTON_LEFT_FACE_RIGHT", (int)GAMEPAD_BUTTON_LEFT_FACE_RIGHT);
	table.set("GAMEPAD_BUTTON_LEFT_FACE_DOWN", (int)GAMEPAD_BUTTON_LEFT_FACE_DOWN);
	table.set("GAMEPAD_BUTTON_LEFT_FACE_LEFT", (int)GAMEPAD_BUTTON_LEFT_FACE_LEFT);
	table.set("GAMEPAD_BUTTON_RIGHT_FACE_UP", (int)GAMEPAD_BUTTON_RIGHT_FACE_UP);
	table.set("GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", (int)GAMEPAD_BUTTON_RIGHT_FACE_RIGHT);
	table.set("GAMEPAD_BUTTON_RIGHT_FACE_DOWN", (int)GAMEPAD_BUTTON_RIGHT_FACE_DOWN);
	table.set("GAMEPAD_BUTTON_RIGHT_FACE_LEFT", (int)GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
	table.set("GAMEPAD_BUTTON_LEFT_TRIGGER_1", (int)GAMEPAD_BUTTON_LEFT_TRIGGER_1);
	table.set("GAMEPAD_BUTTON_LEFT_TRIGGER_2", (int)GAMEPAD_BUTTON_LEFT_TRIGGER_2);
	table.set("GAMEPAD_BUTTON_RIGHT_TRIGGER_1", (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_1);
	table.set("GAMEPAD_BUTTON_RIGHT_TRIGGER_2", (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_2);
	table.set("GAMEPAD_BUTTON_MIDDLE_LEFT", (int)GAMEPAD_BUTTON_MIDDLE_LEFT);
	table.set("GAMEPAD_BUTTON_MIDDLE", (int)GAMEPAD_BUTTON_MIDDLE);
	table.set("GAMEPAD_BUTTON_MIDDLE_RIGHT", (int)GAMEPAD_BUTTON_MIDDLE_RIGHT);
	table.set("GAMEPAD_BUTTON_LEFT_THUMB", (int)GAMEPAD_BUTTON_LEFT_THUMB);
	table.set("GAMEPAD_BUTTON_RIGHT_THUMB", (int)GAMEPAD_BUTTON_RIGHT_THUMB);
	table.set("GAMEPAD_AXIS_UNKNOWN", (int)GAMEPAD_AXIS_UNKNOWN);
	table.set("GAMEPAD_AXIS_LEFT_X", (int)GAMEPAD_AXIS_LEFT_X);
	table.set("GAMEPAD_AXIS_LEFT_Y", (int)GAMEPAD_AXIS_LEFT_Y);
	table.set("GAMEPAD_AXIS_RIGHT_X", (int)GAMEPAD_AXIS_RIGHT_X);
	table.set("GAMEPAD_AXIS_RIGHT_Y", (int)GAMEPAD_AXIS_RIGHT_Y);
	table.set("GAMEPAD_AXIS_LEFT_TRIGGER", (int)GAMEPAD_AXIS_LEFT_TRIGGER);
	table.set("GAMEPAD_AXIS_RIGHT_TRIGGER", (int)GAMEPAD_AXIS_RIGHT_TRIGGER);
	table.set("LOC_VERTEX_POSITION", (int)LOC_VERTEX_POSITION);
	table.set("LOC_VERTEX_TEXCOORD01", (int)LOC_VERTEX_TEXCOORD01);
	table.set("LOC_VERTEX_TEXCOORD02", (int)LOC_VERTEX_TEXCOORD02);
	table.set("LOC_VERTEX_NORMAL", (int)LOC_VERTEX_NORMAL);
	table.set("LOC_VERTEX_TANGENT", (int)LOC_VERTEX_TANGENT);
	table.set("LOC_VERTEX_COLOR", (int)LOC_VERTEX_COLOR);
	table.set("LOC_MATRIX_MVP", (int)LOC_MATRIX_MVP);
	table.set("LOC_MATRIX_MODEL", (int)LOC_MATRIX_MODEL);
	table.set("LOC_MATRIX_VIEW", (int)LOC_MATRIX_VIEW);
	table.set("LOC_MATRIX_PROJECTION", (int)LOC_MATRIX_PROJECTION);
	table.set("LOC_VECTOR_VIEW", (int)LOC_VECTOR_VIEW);
	table.set("LOC_COLOR_DIFFUSE", (int)LOC_COLOR_DIFFUSE);
	table.set("LOC_COLOR_SPECULAR", (int)LOC_COLOR_SPECULAR);
	table.set("LOC_COLOR_AMBIENT", (int)LOC_COLOR_AMBIENT);
	table.set("LOC_MAP_ALBEDO", (int)LOC_MAP_ALBEDO);
	table.set("LOC_MAP_METALNESS", (int)LOC_MAP_METALNESS);
	table.set("LOC_MAP_NORMAL", (int)LOC_MAP_NORMAL);
	table.set("LOC_MAP_ROUGHNESS", (int)LOC_MAP_ROUGHNESS);
	table.set("LOC_MAP_OCCLUSION", (int)LOC_MAP_OCCLUSION);
	table.set("LOC_MAP_EMISSION", (int)LOC_MAP_EMISSION);
	table.set("LOC_MAP_HEIGHT", (int)LOC_MAP_HEIGHT);
	table.set("LOC_MAP_CUBEMAP", (int)LOC_MAP_CUBEMAP);
	table.set("LOC_MAP_IRRADIANCE", (int)LOC_MAP_IRRADIANCE);
	table.set("LOC_MAP_PREFILTER", (int)LOC_MAP_PREFILTER);
	table.set("LOC_MAP_BRDF", (int)LOC_MAP_BRDF);
	table.set("LOC_MAP_DIFFUSE", (int)LOC_MAP_DIFFUSE);
	table.set("LOC_MAP_SPECULAR", (int)LOC_MAP_SPECULAR);
	table.set("UNIFORM_FLOAT", (int)UNIFORM_FLOAT);
	table.set("UNIFORM_VEC2", (int)UNIFORM_VEC2);
	table.set("UNIFORM_VEC3", (int)UNIFORM_VEC3);
	table.set("UNIFORM_VEC4", (int)UNIFORM_VEC4);
	table.set("UNIFORM_INT", (int)UNIFORM_INT);
	table.set("UNIFORM_IVEC2", (int)UNIFORM_IVEC2);
	table.set("UNIFORM_IVEC3", (int)UNIFORM_IVEC3);
	table.set("UNIFORM_IVEC4", (int)UNIFORM_IVEC4);
	table.set("UNIFORM_SAMPLER2D", (int)UNIFORM_SAMPLER2D);
	table.set("MAP_ALBEDO", (int)MAP_ALBEDO);
	table.set("MAP_METALNESS", (int)MAP_METALNESS);
	table.set("MAP_NORMAL", (int)MAP_NORMAL);
	table.set("MAP_ROUGHNESS", (int)MAP_ROUGHNESS);
	table.set("MAP_OCCLUSION", (int)MAP_OCCLUSION);
	table.set("MAP_EMISSION", (int)MAP_EMISSION);
	table.set("MAP_HEIGHT", (int)MAP_HEIGHT);
	table.set("MAP_CUBEMAP", (int)MAP_CUBEMAP);
	table.set("MAP_IRRADIANCE", (int)MAP_IRRADIANCE);
	table.set("MAP_PREFILTER", (int)MAP_PREFILTER);
	table.set("MAP_BRDF", (int)MAP_BRDF);
	table.set("MAP_DIFFUSE", (int)MAP_DIFFUSE);
	table.set("MAP_SPECULAR", (int)MAP_SPECULAR);
	table.set("UNCOMPRESSED_GRAYSCALE", (int)UNCOMPRESSED_GRAYSCALE);
	table.set("UNCOMPRESSED_GRAY_ALPHA", (int)UNCOMPRESSED_GRAY_ALPHA);
	table.set("UNCOMPRESSED_R5G6B5", (int)UNCOMPRESSED_R5G6B5);
	table.set("UNCOMPRESSED_R8G8B8", (int)UNCOMPRESSED_R8G8B8);
	table.set("UNCOMPRESSED_R5G5B5A1", (int)UNCOMPRESSED_R5G5B5A1);
	table.set("UNCOMPRESSED_R4G4B4A4", (int)UNCOMPRESSED_R4G4B4A4);
	table.set("UNCOMPRESSED_R8G8B8A8", (int)UNCOMPRESSED_R8G8B8A8);
	table.set("UNCOMPRESSED_R32", (int)UNCOMPRESSED_R32);
	table.set("UNCOMPRESSED_R32G32B32", (int)UNCOMPRESSED_R32G32B32);
	table.set("UNCOMPRESSED_R32G32B32A32", (int)UNCOMPRESSED_R32G32B32A32);
	table.set("COMPRESSED_DXT1_RGB", (int)COMPRESSED_DXT1_RGB);
	table.set("COMPRESSED_DXT1_RGBA", (int)COMPRESSED_DXT1_RGBA);
	table.set("COMPRESSED_DXT3_RGBA", (int)COMPRESSED_DXT3_RGBA);
	table.set("COMPRESSED_DXT5_RGBA", (int)COMPRESSED_DXT5_RGBA);
	table.set("COMPRESSED_ETC1_RGB", (int)COMPRESSED_ETC1_RGB);
	table.set("COMPRESSED_ETC2_RGB", (int)COMPRESSED_ETC2_RGB);
	table.set("COMPRESSED_ETC2_EAC_RGBA", (int)COMPRESSED_ETC2_EAC_RGBA);
	table.set("COMPRESSED_PVRT_RGB", (int)COMPRESSED_PVRT_RGB);
	table.set("COMPRESSED_PVRT_RGBA", (int)COMPRESSED_PVRT_RGBA);
	table.set("COMPRESSED_ASTC_4x4_RGBA", (int)COMPRESSED_ASTC_4x4_RGBA);
	table.set("COMPRESSED_ASTC_8x8_RGBA", (int)COMPRESSED_ASTC_8x8_RGBA);
	table.set("FILTER_POINT", (int)FILTER_POINT);
	table.set("FILTER_BILINEAR", (int)FILTER_BILINEAR);
	table.set("FILTER_TRILINEAR", (int)FILTER_TRILINEAR);
	table.set("FILTER_ANISOTROPIC_4X", (int)FILTER_ANISOTROPIC_4X);
	table.set("FILTER_ANISOTROPIC_8X", (int)FILTER_ANISOTROPIC_8X);
	table.set("FILTER_ANISOTROPIC_16X", (int)FILTER_ANISOTROPIC_16X);
	table.set("CUBEMAP_AUTO_DETECT", (int)CUBEMAP_AUTO_DETECT);
	table.set("CUBEMAP_LINE_VERTICAL", (int)CUBEMAP_LINE_VERTICAL);
	table.set("CUBEMAP_LINE_HORIZONTAL", (int)CUBEMAP_LINE_HORIZONTAL);
	table.set("CUBEMAP_CROSS_THREE_BY_FOUR", (int)CUBEMAP_CROSS_THREE_BY_FOUR);
	table.set("CUBEMAP_CROSS_FOUR_BY_THREE", (int)CUBEMAP_CROSS_FOUR_BY_THREE);
	table.set("CUBEMAP_PANORAMA", (int)CUBEMAP_PANORAMA);
	table.set("WRAP_REPEAT", (int)WRAP_REPEAT);
	table.set("WRAP_CLAMP", (int)WRAP_CLAMP);
	table.set("WRAP_MIRROR_REPEAT", (int)WRAP_MIRROR_REPEAT);
	table.set("WRAP_MIRROR_CLAMP", (int)WRAP_MIRROR_CLAMP);
	table.set("FONT_DEFAULT", (int)FONT_DEFAULT);
	table.set("FONT_BITMAP", (int)FONT_BITMAP);
	table.set("FONT_SDF", (int)FONT_SDF);
	table.set("BLEND_ALPHA", (int)BLEND_ALPHA);
	table.set("BLEND_ADDITIVE", (int)BLEND_ADDITIVE);
	table.set("BLEND_MULTIPLIED", (int)BLEND_MULTIPLIED);
	table.set("GESTURE_NONE", (int)GESTURE_NONE);
	table.set("GESTURE_TAP", (int)GESTURE_TAP);
	table.set("GESTURE_DOUBLETAP", (int)GESTURE_DOUBLETAP);
	table.set("GESTURE_HOLD", (int)GESTURE_HOLD);
	table.set("GESTURE_DRAG", (int)GESTURE_DRAG);
	table.set("GESTURE_SWIPE_RIGHT", (int)GESTURE_SWIPE_RIGHT);
	table.set("GESTURE_SWIPE_LEFT", (int)GESTURE_SWIPE_LEFT);
	table.set("GESTURE_SWIPE_UP", (int)GESTURE_SWIPE_UP);
	table.set("GESTURE_SWIPE_DOWN", (int)GESTURE_SWIPE_DOWN);
	table.set("GESTURE_PINCH_IN", (int)GESTURE_PINCH_IN);
	table.set("GESTURE_PINCH_OUT", (int)GESTURE_PINCH_OUT);
	table.set("CAMERA_CUSTOM", (int)CAMERA_CUSTOM);
	table.set("CAMERA_FREE", (int)CAMERA_FREE);
	table.set("CAMERA_ORBITAL", (int)CAMERA_ORBITAL);
	table.set("CAMERA_FIRST_PERSON", (int)CAMERA_FIRST_PERSON);
	table.set("CAMERA_THIRD_PERSON", (int)CAMERA_THIRD_PERSON);
	table.set("CAMERA_PERSPECTIVE", (int)CAMERA_PERSPECTIVE);
	table.set("CAMERA_ORTHOGRAPHIC", (int)CAMERA_ORTHOGRAPHIC);
	table.set("NPT_9PATCH", (int)NPT_9PATCH);
	table.set("NPT_3PATCH_VERTICAL", (int)NPT_3PATCH_VERTICAL);
	table.set("NPT_3PATCH_HORIZONTAL", (int)NPT_3PATCH_HORIZONTAL);
}

/**
 * Adds raylib bindings to the given Squirrel VM.
 */
void raylib_squirrel(squall::VM& vm) {
	raylib_squirrel_functions(vm);
	raylib_squirrel_structs(vm);
	raylib_squirrel_defines(vm);
};

#endif
