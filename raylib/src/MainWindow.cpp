#include "MainWindow.h"

// Default Constructor
MainWindow::MainWindow() {
    this->Saddleback_Button.CreateButton("Saddleback", 20, 100, 300, 70, GRAY);
    this->ASU_Button.CreateButton("ASU", 400, 100, 300, 70, GRAY);
    this->UCI_Button.CreateButton("UCI", 20, 200, 300, 70, GRAY);
    this->Custom_Button.CreateButton("Custom Trip", 400, 200, 300, 70, GRAY);
};

// Destructor
MainWindow::~MainWindow() {

};

// This function changes the buttons background colors when in their coordinate position's.
void MainWindow::ChangeButtonColorsWhenHovered(Button button){
    
    // Check if mouse cursor is within button boundary. (20, 100) -> (320, 170)
    // If mouse cursor is within button boundary the button's background color will be changed.
    if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
        // GRAY
        button.setColor(GRAY);
    } else {
        // DARKGRAY
        button.setColor(DARKGRAY);
    }
    
    // Check if mouse cursor is within button boundary. (460, 100) -> (700, 170)
    // If mouse cursor is within button boundary the button's background color will be changed.
    if((GetMouseX() >= 460 && GetMouseX() <= 700) && (GetMouseY() >= 100 && GetMouseY() <= 170)){
        // GRAY
        button.setColor(GRAY);
    } else {
        // DARKGRAY
        button.setColor(DARKGRAY);
    }
        
    // Check if mouse cursor is within button boundary. (20, 200) -> (320, 270)
    // If mouse cursor is within button boundary the button's background color will be changed.
    if((GetMouseX() >= 20 && GetMouseX() <= 320) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
        // GRAY
        button.setColor(GRAY);
    } else {
        // DARK GRAY
        button.setColor(DARKGRAY);
    }
    
    // Check if mouse cursor is within button boundary. (420, 200) -> (720, 270/
    // If mouse cursor is within button boundary the button's background color will be changed.
    if((GetMouseX() >= 420 && GetMouseX() <= 720) && (GetMouseY() >= 200 && GetMouseY() <= 270)){
        // GRAY
        button.setColor(GRAY);
    } else {
        // DARKGRAY
        button.setColor(DARKGRAY);
    }

};

// This function will be called in 'main.cpp' to handle all logic associated with the MainWindow button's.
void MainWindow::HandleButtonLogic(){
    ChangeButtonColorsWhenHovered(this->Saddleback_Button);
    ChangeButtonColorsWhenHovered(this->ASU_Button);
    ChangeButtonColorsWhenHovered(this->UCI_Button);
    ChangeButtonColorsWhenHovered(this->Custom_Button);
}