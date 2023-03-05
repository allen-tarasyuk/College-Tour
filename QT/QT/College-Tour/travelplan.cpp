#include "travelplan.h"

#include <vector>
#include <list>
#include <QString>
#include <QSqlQuery>

using namespace std;

TravelPlan::TravelPlan(QSqlDatabase& db): db{db}
{}
TravelPlan::~TravelPlan()
{}
void TravelPlan::FindClosestCollege(const QString& college, std::vector<QString> &colleges, int size, bool saddleback, bool custom, vector<QString> customColleges)
{
    // Base Case
    if(colleges.size() < size)
    {
        // Opens database
        db.open();
        std::list<QString> End;
        QSqlQuery q;
        QString string;

        // If the Saddleback plan or Custom plan execute a different sql statement
        if(saddleback || custom)
        {
            // If custom add each college the user wants to visit into the sql statement
            if(custom)
            {

                string = "SELECT DISTINCT Ending_College FROM Distances WHERE Starting_College = \'" + college + "\'"
                        + "AND ENDING_COLLEGE = \'";
                for(int i = 0; i < customColleges.size(); i++)
                {
                    string += customColleges[i] + "\' OR Starting_College = \'" + college + "\'"
                            + "AND ENDING_COLLEGE = \'";
                }
                string += "\' ORDER BY Distance ASC";
            }
            else
            {
                // If Saddleback excluded the added cities from the sql statement
                string = "SELECT DISTINCT Ending_College FROM Distances WHERE Starting_College = \'" + college + "\'"
                        + "AND NOT ENDING_COLLEGE = 'California State University, Fullerton' AND NOT ENDING_COLLEGE = 'University of Texas' ORDER BY Distance ASC";
            }

            qDebug() << string;
        }
        else
        {
            // Default sql statement
            string = "SELECT DISTINCT Ending_College FROM Distances WHERE Starting_College = \'" + college + "\' ORDER BY Distance ASC";
        }
        q.exec(string);

        // Get first closest college from current college and add it to list
        while(q.next())
        {
            End.push_back(q.value(0).toString());
        }

        // Check if the college has been visisted
        for(; !CheckIfCollegeVisited(End.front(), colleges); End.pop_front());

        // Add to the vector if it hasn't
        colleges.push_back(End.front());

        // Recall function until you reach amount of colleges wanted to visit
        FindClosestCollege(End.front(), colleges, size, saddleback, custom, customColleges);
    }

    db.close();
}

bool TravelPlan::CheckIfCollegeVisited(const QString& college, std::vector<QString>& visitedColleges)
{
    // Checks the colleges vector to if the college passed has been visited before
    for(unsigned int i = 0; i < visitedColleges.size(); i++)
    {
        if(Compare(college, visitedColleges[i]))
            return false;
    }
    return true;
}

bool TravelPlan::Compare(const QString& college1, const QString& college2)
{
    // Returns true if they are equal
    if(college1.size() != college2.size())
        return false;

    for(int i = 0; i < college1.size(); i++)
    {
        if(college1[i] != college2[i])
            return false;
    }
    return true;
}
