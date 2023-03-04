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
#include <string>
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
        * Non-Default Constructor
        ***************************/
        Button(char *label, int width, int height, int x, int y, Color color);
        
        /****************************
        * Destructor
        ***************************/
        ~Button();

        /****************************
        * Setter/Mutator Functions
        ***************************/
        
        void setLabel(char *label);
        void setWidth(int w);
        void setHeight(int h);
        void setX(int x);
        void setY(int y);
        void setColor(Color c);
        
        /****************************
        * Getter/Accessor Functions
        ***************************/

        char* getLabel() const;
        int getWidth() const;
        int getHeight() const;
        int getX() const;
        int getY() const;
        Color getColor() const;

        /****************************
        * Class Functions
        ***************************/
        void CreateButton(char *label, int width, int height, int x, int y, Color color);
    
    private:
        char *btnLabel;     // Variable is used for labeling the button
        int width;          // Variable used for determining the width of the button
        int height;         // Variable used for determining the height of the button
        int x;              // Variable used for determining the x position of the button
        int y;              // Variable used for determining the y position of the button
        Color color;        // Variable used for determining the color of the button

};

#endif