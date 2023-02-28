#ifndef TRAVELPLAN_H
#define TRAVELPLAN_H

#include <QtSql/QSqlDatabase>
#include <vector>
#include <QString>

using namespace std;


class TravelPlan
{

private:

    /// Compare Colleges
    ///
    /// Checks if two city strings are the same
    /// @param college1 first city name
    /// @param college2 second city name
    /// @returns if they are the same or not
    bool Compare(const QString& college1, const QString& college2);

public:

    /// Contains previosly visited colleges' names.
    vector<QString> visitedColleges;

    /// Pointer to primary, shared sql database.
    QSqlDatabase& db;

    /// Index of current college.
    int collegeIndex;

    /// Number of colleges in this plan.
    int collegeCount;

public:


    /// Receipt struct
    ///
    /// Holds the items needed to display the receipt
    struct Receipt
    {
        /// Cost of each purchased item. Order synced with itemsBought
        std::vector<double> costOfItems;

        /// Name of each purchased item. Order synced with costOfItems
        std::vector<QString> itemsBought;

        /// Total travel expenses
        double cost;

        /// Total distance traveled.
        int distanceTraveled;

    };

    /// Name of current college
    QString currentCollege;

    /// This plan's receipt
    Receipt receipt;

    /// This plan's current college receipt
    Receipt collegeReceipt;

    /// TravelPlan constructor
    ///
    /// Constructs TravelPlan object needs database
    TravelPlan(QSqlDatabase& db);

    ~TravelPlan();

    /// Finds closest College
    ///
    /// This method recursively finds the closest college
    /// @param college college to find closest college to
    /// @param cities vector of cities that will be visisted
    /// @param size amount of colleges wanting to visit
    /// @param Saddleback if the method is being used for the initial Saddleback plan
    /// @param custom if the method is being used for the custom plan
    /// @param customColleges custom set of colleges to visit
    void FindClosestCollege(const QString& college, std::vector<QString> &colleges, int size = 11, bool saddleback = false, bool custom = false,
                         vector<QString> customColleges = vector<QString>());

    /// Checks if college was visited
    ///
    /// Goes through the vector of colleges to see if the passed college was already visited
    /// @param college college to check if visited
    /// @param visitedColleges vector of college already visited
    bool CheckIfCollegeVisited(const QString& college, std::vector<QString>& visitedColleges);




};

#endif // TRAVELPLAN_H
