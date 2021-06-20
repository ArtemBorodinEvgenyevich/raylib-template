#include <cstdlib>
#include "raylib-cpp.hpp"

int main() {
    // INTIALIZATION -------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 450;
    raylib::Color textColor = raylib::Color::Black();
    raylib::Window window(screenWidth, screenHeight,
                          "raylib [core] example - basic window");

    SetTargetFPS(60);
    //----------------------------------------------------------------

    // Main loop
    while (!window.ShouldClose()) {
        BeginDrawing();
        {
            window.ClearBackground(RAYWHITE);

            const char* text = "Oh Lord, it works!";
            const raylib::Vector2 textSize = MeasureTextEx(GetFontDefault(), text, 20, 1);
            textColor.DrawText(text,screenWidth / 2 - textSize.x / 2,
                               screenHeight / 2, 20);
        }
        EndDrawing();
    }

    return EXIT_SUCCESS;
}
