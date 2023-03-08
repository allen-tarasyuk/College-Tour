#ifndef ENV_H
#define ENV_H

#include <QString>

class env {
    public:
        // Default Constructor
        env();

        // Destructor
        ~env();

        /******************************
         * ********* SETTERS **********
         ******************************/

        // set the path of the database
        void setDatabasePath(QString path);

        /******************************
         * ********* GETTERS **********
         ******************************/

        // get the path of the database
        QString getDatabasePath();

    private:
        QString databasePath;  // Path to database file

};

#endif // ENV_H
