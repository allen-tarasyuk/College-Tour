#ifndef MainWindow_h
#define MainWindow_h

// System included files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// User defined header files
#include "Button.h"

class MainWindow {

    public:
        MainWindow();
        ~MainWindow();
        void HandleButtonLogic();


    protected:


    private:
        Button Saddleback_Button;
        Button UCI_Button;
        Button ASU_Button;
        Button Custom_Button;

        void ChangeButtonColorsWhenHovered(Button button);
};

#endif