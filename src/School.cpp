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

// User defined headers
#include "School.h"

// Default Constructor
School::School(){
    this->Name = "N/A";
    this->Souvenir = "N/A";
    this->souvenirPrice = 0.0; 
};


// Non-Default Constructor
School::School(string Name, string Souvenir, double souvenirPrice) {
    this->Name = Name;
    this->Souvenir = Souvenir;
    this->souvenirPrice = souvenirPrice; 
};


// Destructor
School::~School() {

};


/***********************************
* Setter functions (nothing returned)
***********************************/


// Sets the value (string) of the variable called 'Name' within private section of the class.
void School::setName(string Name) {
    this->Name=Name;
};


// Sets the value (string) of the variable called 'Souvenir' within private section of the class.
void School::setSouvenir(string Souvenir) {
    this->Souvenir=Souvenir;
};


// Sets the value (double) of the variable called 'souvenirPrice' within private section of the class.
void School::setSouvenirPrice(double souvenirPrice) {
    this->souvenirPrice=souvenirPrice;
};


/***********************************
* Getter functions (Value-Returned)
***********************************/


// Returns the value of the variable called 'Name'. (TYPE = string)
string School::getName() const {
    return this->Name;
}


// Returns the value of the variable called 'Souvenir'. (TYPE = string)
string School::getSouvenir() const {
    return this->Souvenir;
}


// Returns the value of the variable called 'Souvenir'. (TYPE = double)
double School::getSouvenirPrice() const {
    return this->souvenirPrice;
}