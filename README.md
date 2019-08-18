# raylib-squirrel (Proof-of-Concept)

[raylib](https://www.raylib.com/) bindings for [Squirrel](http://squirrel-lang.org), using [Squall](https://github.com/jonigata/squall).

## Example

The following is an example of what raylib looks like through Squirrel:

``` squirrel
local screenWidth = 800
local screenHeight = 450

InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window")

SetTargetFPS(60)

while (!WindowShouldClose())
{
	BeginDrawing()

	// TODO: Add color constants
	//ClearBackground(RAYWHITE)

	//DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY)

	EndDrawing()
}

CloseWindow()
```

## Build

```
git clone https://github.com/RobLoach/raylib-squirrel.git
cd raylib-squirrel
mkdir build
cd build
cmake ..
make
```