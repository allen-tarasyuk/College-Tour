#ifndef Button_h
#define Button_h

#include "../include/raylib.h"
#include <iostream>
using namespace std;

class Button {
    public:
        Button();
        ~Button();
        void CreateButton(int width, int height, int x, int y, Color color);
    
    private:
        int width;
        int height;
        int x;
        int y;
      
};


#endif