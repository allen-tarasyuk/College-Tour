#include "env.h"

// Constructor function
env::env(){

    // Change the initializing value to your path to th db file.
    this->databasePath = "/Users/bryceberwald/Desktop/CS1D/Project #1-Due 03:15/College-Tour (CURRENT)/College-Tour/QT/QT/College-Tour/DB/Colleges.db";
}

// Destructor function
env::~env(){

}

// sets the database path with passed parameter
void env::setDatabasePath(QString path){
    this->databasePath = path;
}

// gets the database path from the private section of the class. (RETURNED-VALUE)
QString env::getDatabasePath(){
    return this->databasePath;
}
