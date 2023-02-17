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
#include "Button.h"

// Default Constructor
Button::Button(){
    
}


// Destructor
Button::~Button(){

}


// Function to Create an instance of a Button with the specified properties.
void Button::CreateButton(int width, int height, int x, int y, Color color){
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;

    DrawRectangle(width, height, x, y, color);
    Rectangle tempRect = {(float)width, (float)height, (float)x, (float)y};
    DrawRectangleLinesEx(tempRect, 4.0f, BLACK);
}

