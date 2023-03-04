#include "MainWindow.h"

MainWindow::MainWindow() {
    this->ButtonSize.x = 20;
    this->ButtonSize.y = 100;
    this->ButtonSize.width = 300;
    this->ButtonSize.height = 70;
    this->ButtonSize.color = GRAY;
};

MainWindow::~MainWindow() {

};

void MainWindow::FindMouseLocation(Button button, char *schoolName){
    if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
        button.CreateButton(20, 100, 300, 70, GRAY);
    } else {
        button.CreateButton(20, 100, 300, 70, DARKGRAY);
    }
    DrawText(schoolName, TextLength(schoolName) / 2 + 120, 125, 20, WHITE);
};

// Function to Create an instance of a Button with the specified properties.
void MainWindow::CreateButton(int width, int height, int x, int y, Color color){
    this->ButtonSize.width = width;
    this->ButtonSize.height = height;
    this->ButtonSize.x = x;
    this->ButtonSize.y = y;

    DrawRectangle(width, height, x, y, color);
    Rectangle tempRect = {(float)width, (float)height, (float)x, (float)y};
    DrawRectangleLinesEx(tempRect, 4.0f, BLACK);
};


void MainWindow::ButtonLogic(Button button, char *schoolName){
    button.CreateButton(ButtonSize.width, ButtonSize.height, ButtonSize.x, ButtonSize.y, ButtonSize.color);
    FindMouseLocation(button, schoolName);
};