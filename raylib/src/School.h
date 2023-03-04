#ifndef SCHOOL_H
#define SCHOOL_H

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

// System included files
#include <string>
#include <iostream>
#include <map>

using namespace std;

/****************************
 * Object/Class School
 ***************************/
class School{ 
    public:
        /************************
        * Default constructor
        *************************/
        School();
        
        /************************
        * Non-Default constructor
        *************************/
        School(string Name, string Souvenir, double souvenirPrice);
        
        /************************
        * Destructor
        *************************/
        ~School();
        
        /************************
        * Setters/Mutators
        *************************/
        void setName(string Name);
        void setSouvenir(string Souvenir);
        void setSouvenirPrice(double souvenirPrice);
        map<string, int> distances; // Haven't completed function in src file

        /************************
        * Getters/Accessors
        *************************/
        string getName() const;
        string getSouvenir() const;
        double getSouvenirPrice() const;
        
    private:
        string Name;          // Variable of type string
        string Souvenir;      // Variable of type string
        double souvenirPrice; // Variable of type double
};

#endif
