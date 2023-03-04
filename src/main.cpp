/***********************************************************
 * Team Name: Team-E aka "Team-Elephant" 
 * 
 * Team Members: Bryce, Allen, Austin, Adam, Julien
 * 
 * Project Name: College Tour
 * 
 * Project Description: Finding the closest possible 
 * distance to all the other colleges from the current 
 * college selected for calculating the distance for each.
 * There's 3 static colleges used... Saddleback, UCI, ASU,
 * and an unknown 'selectable' option to be used to
 * determine the distance. The colleges should be displayed
 * sorted from closest to furthest from the selected college.
 * More options are available for planning which college is
 * most logical for the user to select depending on the 
 * distance along with the preference of the priorities.
 * 
 * Project Due Date: 03/15/2023
************************************************************/

// User defined header files
#include "main.h"
#include "Button.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {

    /***********************************************************/
    // COMMENT THIS LINE BELOW OUT TO GO STRAIGHT TO GUI WINDOW
    /*******************************************************************************************************/
    //main_test(); // Testing the 'School' class with a main_test() function at the beginning of the program.
    /*******************************************************************************************************/

    // Initialization
    InitWindow(screenWidth, screenHeight, "Application - Closest College to the current college's location");

    SetTargetFPS(60); // Setting frames per second

    // Main game loop
    while (!WindowShouldClose()){
        //---------------------------------------------------------------------------------------------
        // Draw (All drawing functions must be called withing the BeginDraw() and EndDraw() functions)
        //---------------------------------------------------------------------------------------------

        BeginDrawing();

            ClearBackground(WHITE); // Clear the whole windows background with the color "WHITE".

            DrawText("Closet College to other college locations", 130, 30, 24, BLACK);

            /**********************************************/
            /* SADDLEBACK BUTTON & BACKGROUND COLOR LOGIC */
            /**********************************************/
            Button SaddlebackBtn;
            // Check if mouse cursor is within button boundary. (20, 100) -> (320, 170)
            // If mouse cursor is within button boundary the button's background color will be changed.
            if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
                SaddlebackBtn.CreateButton(20, 100, 300, 70, GRAY);
            } else {
                SaddlebackBtn.CreateButton(20, 100, 300, 70, DARKGRAY);
            }
            DrawText((char*)"Saddleback", TextLength((char*)"Saddleback") / 2 + 120, 125, 20, WHITE);

            /*********************************************/
            /*     ASU BUTTON BACKGROUND COLOR LOGIC     */
            /*********************************************/
            Button ASU_Btn;
            // Check if mouse cursor is within button boundary. (460, 100) -> (700, 170)
            // If mouse cursor is within button boundary the button's background color will be changed.
            if((GetMouseX() >= 460 && GetMouseX() <= 700) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
                ASU_Btn.CreateButton(400, 100, 300, 70, GRAY);
            } else {
                ASU_Btn.CreateButton(400, 100, 300, 70, DARKGRAY);
            }
            DrawText((char*)"ASU", TextLength((char*)"ASU") / 2 + 520, 125, 20, WHITE);

            /*********************************************/
            /*     UCI BUTTON BACKGROUND COLOR LOGIC     */
            /*********************************************/
            Button UCI_Btn;
            // Check if mouse cursor is within button boundary. (20, 200) -> (320, 270)
            // If mouse cursor is within button boundary the button's background color will be changed.
            if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
                UCI_Btn.CreateButton(20, 200, 300, 70, GRAY);
            } else {
                UCI_Btn.CreateButton(20, 200, 300, 70, DARKGRAY);
            }
            DrawText((char*)"UCI", (TextLength((char*)"UCI") / 2) + 150, 225, 20, WHITE);
            
            /*********************************************/
            /* CUSTOM TRIP BUTTON BACKGROUND COLOR LOGIC */
            /*********************************************/
            Button CustomTripBtn;
            // Check if mouse cursor is within button boundary. (420, 200) -> (720, 270)
            // If mouse cursor is within button boundary the button's background color will be changed.
            if((GetMouseX() >= 420 && GetMouseX() <= 720) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
                CustomTripBtn.CreateButton(400, 200, 300, 70, GRAY);
            } else {
                CustomTripBtn.CreateButton(400, 200, 300, 70, DARKGRAY);
            }
            DrawText((char*)"Custom Trip", (TextLength((char*)"Custom Trip") / 2) + 475, 225, 20, WHITE);

            /* DRAW CONTENT TO BE DISPLAYED AREA ... */
            DrawRectangle(20, 300, 680, 450, LIGHTGRAY);
            DrawRectangleLines(20, 300, 680, 450, BLACK);

        EndDrawing(); // Drawing has to be done within the BeginDrawing() and EndDrawing() functions. (Block of code to be executed with functions that draw any graphics, textures, images, etc)
    
    }

    // ---------------------------------De-Initialization ----------------------------------

    // Deallocates resources used by this program.

    // Destructors for all classes created are called automatically

    // Save to the database anything before the program terminates.

    // Anything else?

    // --------------------------------------------------------------------------------------
    /***************************************************************************************/
    //--------------------------------------------------------------------------------------
    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}