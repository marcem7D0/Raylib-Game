#include <iostream>

#include "raylib.h"

#define DEBUG
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

int main()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Raylib Game");
    SetTargetFPS(60);

    Font font = LoadFont("../assets/Kenney Pixel Square.ttf");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        auto [x, y] = MeasureTextEx(font, "Welcome to Raylib!", 20, 1.0f);

        DrawText("Welcome to Raylib!", WINDOW_WIDTH / 2 - (x / 2), WINDOW_HEIGHT / 2 - (y / 2), 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}