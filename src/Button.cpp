#include "Button.h"

Button::Button(){
    
}

Button::~Button(){

}

void Button::CreateButton(int width, int height, int x, int y){
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;

    DrawRectangle(width, height, x, y, GRAY);
    DrawRectangleLines(width, height, x, y, BLACK);
    
}


