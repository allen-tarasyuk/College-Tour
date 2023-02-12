#include "main.h"
#include "Button.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "Application - Closest College to the current college's location");

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()){
        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(WHITE);
            DrawText("Closet College to other college locations", 130, 30, 24, BLACK);
            
            Button SaddlebackBtn;
            SaddlebackBtn.CreateButton(20, 100, 300, 70);
            DrawText((char*)"Saddleback", TextLength((char*)"Saddleback") / 2 + 120, 125, 20, WHITE);
            
            Button ASU_Btn;
            ASU_Btn.CreateButton(400, 100, 300, 70);
            DrawText((char*)"ASU", TextLength((char*)"ASU") / 2 + 520, 125, 20, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}