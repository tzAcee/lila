#include <raylib-cpp.hpp>

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");

    SetTargetFPS(15);

    while (!window.ShouldClose())
    {
        BeginDrawing();

        window.ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    return 0;
}