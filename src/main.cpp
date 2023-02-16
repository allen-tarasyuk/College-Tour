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
            
            /* SADDLEBACK BUTTON BACKGROUND COLOR LOGIC */
            Button SaddlebackBtn;
            if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
                SaddlebackBtn.CreateButton(20, 100, 300, 70, GRAY);
            } else {
                SaddlebackBtn.CreateButton(20, 100, 300, 70, DARKGRAY);
            }
            DrawText((char*)"Saddleback", TextLength((char*)"Saddleback") / 2 + 120, 125, 20, WHITE);

            /* ASU BUTTON BACKGROUND COLOR LOGIC */
            Button ASU_Btn;
            if((GetMouseX() >= 460 && GetMouseX() <= 700) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
                ASU_Btn.CreateButton(400, 100, 300, 70, GRAY);
            } else {
                ASU_Btn.CreateButton(400, 100, 300, 70, DARKGRAY);
            }
            DrawText((char*)"ASU", TextLength((char*)"ASU") / 2 + 520, 125, 20, WHITE);

            /* UCI BUTTON BACKGROUND COLOR LOGIC */
            Button UCI_Btn;
            if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
                UCI_Btn.CreateButton(20, 200, 300, 70, GRAY);
            } else {
                UCI_Btn.CreateButton(20, 200, 300, 70, DARKGRAY);
            }
            DrawText((char*)"UCI", (TextLength((char*)"UCI") / 2) + 150, 225, 20, WHITE);
            
            /* CUSTOM TRIP BUTTON BACKGROUND COLOR LOGIC */
            Button CustomTripBtn;
            if((GetMouseX() >= 420 && GetMouseX() <= 720) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
                CustomTripBtn.CreateButton(400, 200, 300, 70, GRAY);
            } else {
                CustomTripBtn.CreateButton(400, 200, 300, 70, DARKGRAY);
            }
            DrawText((char*)"Custom Trip", (TextLength((char*)"Custom Trip") / 2) + 475, 225, 20, WHITE);

            /* DRAW CONTENT TO BE DISPLAYED AREA ... */
            DrawRectangle(20, 300, 680, 450, LIGHTGRAY);
            DrawRectangleLines(20, 300, 680, 450, BLACK);
            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}