#include <fstream>
#include <iostream>
#include <vector>
#include "School.h"
using namespace std;

int main()
{
ifstream inFile;
string temp;
string startSchool;
string endSchool;
string distanceBetween;
School currSchool;
vector<School> mySchools;
inFile.open("Distances.csv");
getline(inFile,temp);
while (!inFile.eof()) {
    getline(inFile,startSchool,',');
    cout << startSchool << endl;
    getline(inFile,endSchool,',');
    cout << endSchool << endl;
    getline(inFile,distanceBetween,',');
    cout << distanceBetween << endl;
    currSchool.setName(startSchool);
    currSchool.distances[endSchool] = distanceBetween;       //this is the map setting
    mySchools.push_back(currSchool);
}
return 0;
}
