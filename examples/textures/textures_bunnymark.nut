/*******************************************************************************************
*
*   raylib [textures] example - Bunnymark
*
*   This example has been created using raylib 1.6 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2014-2019 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

local MAX_BUNNIES = 100000

// This is the maximum amount of elements (quads) per batch
// NOTE: This value is defined in [rlgl] module and can be changed there
local MAX_BATCH_ELEMENTS = 8192

class Bunny {
    constructor() {
        color = Color(GetRandomValue(50, 240), GetRandomValue(80, 240), GetRandomValue(100, 240), 255)
        position = GetMousePosition()
        speed = Vector2(GetRandomValue(-250, 250) / 60, GetRandomValue(-250, 250) / 60)
    }

    color = 0
    position = 0
    speed = 0
}

// Initialization
//--------------------------------------------------------------------------------------
local screenWidth = 800
local screenHeight = 450

InitWindow(screenWidth, screenHeight, "raylib [textures] example - bunnymark")

// Load bunny texture
local texBunny = LoadTexture("resources/wabbit_alpha.png")

local bunnies = []

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose()) {    // Detect window close button or ESC key
    // Update
    //----------------------------------------------------------------------------------
    if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
        // Create more bunnies
        for (i = 0; i < 100; i += 1) {
            if (bunnies.len() < MAX_BUNNIES) {
            	bunnies.push(Bunny())
            }
        }
    }

    // Update bunnies
    foreach (i,bunny in bunnies) {
        bunnies[i].position.x += bunny.speed.x
        bunnies[i].position.y += bunny.speed.y

        if (((bunny.position.x + texBunny.width/2) > GetScreenWidth()) || ((bunny.position.x + texBunny.width/2) < 0)) {
            bunnies[i].speed.x *= -1
        }
        if (((bunny.position.y + texBunny.height/2) > GetScreenHeight()) || ((bunny.position.y + texBunny.height/2 - 40) < 0)) {
            bunnies[i].speed.y *= -1
        }
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing()
        ClearBackground(RAYWHITE)

        foreach (bunny in bunnies) {
        	DrawTexture(texBunny, bunny.position.x, bunny.position.y, bunny.color)
        }

        DrawRectangle(0, 0, screenWidth, 40, BLACK)
        DrawText("bunnies: " + bunnies.len().tostring(), 120, 10, 20, GREEN)
        DrawText("batched draw calls: " + (1 + bunnies.len() / MAX_BATCH_ELEMENTS).tostring(), 320, 10, 20, MAROON)

        DrawFPS(10, 10)

    EndDrawing()
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture(texBunny)    // Unload bunny texture

CloseWindow()              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
