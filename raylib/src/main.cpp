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

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {

    // Initialization
    InitWindow(screenWidth, screenHeight, "Application - Closest College to the current college's location");

    MainWindow window;

    SetTargetFPS(60); // Setting frames per second

    // Main game loop
    while (!WindowShouldClose()){
        //---------------------------------------------------------------------------------------------
        // Draw (All drawing functions must be called withing the BeginDraw() and EndDraw() functions)
        //---------------------------------------------------------------------------------------------

        BeginDrawing();

            ClearBackground(WHITE); // Clear the whole windows background with the color "WHITE".

            window.HandleButtonLogic();

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