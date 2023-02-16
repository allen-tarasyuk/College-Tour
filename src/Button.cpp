#include "Button.h"

Button::Button(){
    
}

Button::~Button(){

}

void Button::CreateButton(int width, int height, int x, int y, Color color){
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;

    DrawRectangle(width, height, x, y, color);
    Rectangle tempRect = {(float)width, (float)height, (float)x, (float)y};
    DrawRectangleLinesEx(tempRect, 4.0f, BLACK);
}

