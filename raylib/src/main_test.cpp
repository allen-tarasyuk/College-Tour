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

// User defined header files
#include "main_test.h"

// main testing function
int main_test() {
    
    // user input variables
    string userInputString;
    double userInputDouble;

    School tempSchool;
    vector<School> schools;

    bool inSession = true;
    while(inSession){

        // Get school name from user
        cout << "\nWhat's the school's name? ";
        getline(cin, userInputString);

        tempSchool.setName(userInputString); // store name to tempSchool class object of type 'School'
        
        // Get school souvenir from user
        cout << "\nWhat's the school's souvenir? ";
        getline(cin, userInputString);

        tempSchool.setSouvenir(userInputString); // store souvenir to tempSchool class object of type 'School'
        
        // Get school souvenir price from user
        cout << "\nWhat's the school's souvenir price? ";
        cin >> userInputDouble;

        tempSchool.setSouvenirPrice(userInputDouble); // store souvenir price to tempSchool class object of type 'School'

        // Push the tempSchool into the vector of type 'School' and continue adding if the user wants to.
        schools.push_back(tempSchool);

        // Check for continuation...
        string userInput;
        cout << "\nPress 'Y' to continue... ";
        cin >> userInput;
        
        if(userInput == "Y" || userInput == "y"){
            inSession = true;
        } else {
            inSession = false;
        }
        cin.ignore('\n', 10);
    }

    // Display the schools entered into the vector via the console window that pops up with the GUI window/beforehand.
    cout << "\n*** ALL SCHOOLS ENTERED ***\n";
    cout << "***************************";
    for(int i = 0; i < schools.size(); i++){
        cout << endl;
        cout << "\nSchool Name: " << schools[i].getName();
        cout << "\nSchool Souvenir: " << schools[i].getSouvenir();
        cout << "\nSchool Souvenir Price: " << schools[i].getSouvenirPrice();
        cout << endl << endl << endl << endl << endl;
    }

    return 0;
}
