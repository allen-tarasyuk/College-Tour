#ifndef Button_h
#define Button_h

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

// External library header files
#include "../include/raylib.h"

// System included libraries
#include <iostream>
using namespace std;

/****************************
 * Object/Class Button
 ***************************/
class Button {
    public:
        /****************************
        * Constructor
        ***************************/
        Button();

        /****************************
        * Destructor
        ***************************/
        ~Button();

        /****************************
        * Class Functions
        ***************************/
        void CreateButton(int width, int height, int x, int y, Color color);
    
    private:
        int width;    // Variable used for determining the width of the button
        int height;   // Variable used for determining the height of the button
        int x;        // Variable used for determining the x position of the button
        int y;        // Variable used for determining the y position of the button

};

#endif