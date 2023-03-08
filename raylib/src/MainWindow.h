#ifndef MainWindow_h
#define MainWindow_h

// External library header files
#include "../include/raylib.h"

// User defined header files
#include "Button.h"

// System included files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class MainWindow {

    public:
        MainWindow();
        ~MainWindow();
        void HandleButtonLogic();
        void DisplayButtons();


    protected:


    private:
        Button Saddleback_Button;
        Button UCI_Button;
        Button ASU_Button;
        Button Custom_Button;

        void ChangeButtonColorsWhenHovered(Button button);
};

#endif