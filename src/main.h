#ifndef main_h
#define main_h

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

// User defined header files
#include "main_test.h"

// System included files
#include <iostream>

using namespace std;

// Variables for setting the GUI window's dimensions. (Width and Height)
const int screenWidth = 720;
const int screenHeight = 800;

#endif