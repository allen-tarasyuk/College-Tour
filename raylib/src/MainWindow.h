#ifndef MainWindow_h
#define MainWindow_h

// System included files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// User defined header files
#include "Button.h"

struct MainWindowButtonDimensions {
    int x;
    int y;
    int width;
    int height;
    Color color;
};

class MainWindow {

    public:
        MainWindow();
        ~MainWindow();
        void ButtonLogic(Button button, char *schoolName);


    protected:
        void FindMouseLocation(Button button, char *schoolName);
        void CreateButton(int width, int height, int x, int y, Color color);


    private:
        MainWindowButtonDimensions ButtonSize;
        Button Saddleback_Button;
        Button UCI_Button;
        Button ASU_Button;
        Button Custom_Button;



};


#endif MainWindow_h