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
    this->btnLabel = "addLabel";
    this->x = 20;
    this->y = 100;
    this->width = 300;
    this->height = 70;
    this->color = GRAY;
}

// Non-Default Constructor
Button::Button(char *label, int width, int height, int x, int y, Color color){
    this->btnLabel = label;
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->color = color;
}

// Destructor
Button::~Button(){

}

// For setting button's label
void Button::setLabel(char *label){
    this->btnLabel = label;
}

// Function to Create an instance of a Button with the specified properties.
void Button::CreateButton(char *label, int width, int height, int x, int y, Color color){
    this->btnLabel = label;
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->color = color;

    DrawRectangle(width, height, x, y, color);
    Rectangle tempRect = {(float)width, (float)height, (float)x, (float)y};
    DrawRectangleLinesEx(tempRect, 4.0f, BLACK);

    DrawText(label, (TextLength(label) / 2) + 120, 125, 20, WHITE);
}

// Function to set the width of the button
void Button::setWidth(int w){
    this->width = w;
}

// Function to set the height of the button
void Button::setHeight(int h){
    this->height = h;
}

// Function to set the x of the button
void Button::setX(int x){
    this->x = x;
}

// Function to set the y of the button
void Button::setY(int y){
    this->y = y;
}

// Function to set the color of the button
void Button::setColor(Color c){
    this->color = c;
}

// Function gets the buttons label
char* Button::getLabel() const {
    return this->btnLabel;
}

// Function to get the width of the button (RETURNS A INTEGER)
int Button::getWidth() const{
    return this->width;
}

// Function to get the height of the button (RETURNS A INTEGER)
int Button::getHeight() const{
    return this->height;
}

// Function to get the x position of the button (RETURNS A INTEGER)
int Button::getX() const{
    return this->x;
}

// Function to get the x position of the button (RETURNS A INTEGER)
int Button::getY() const {
    return this->y;
}

// Function to get the color of the button (RETURNS A COLOR)
Color Button::getColor() const {
    return this->color;
}