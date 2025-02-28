#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>

class Building
{
    public:

        // Attributes
        std::string name; // Name of the building
        int cost; // Cost of the building
        int income; // Income generated by the building

        // Methods
        Building(std::string buildingName, int buildingCost, int buildingIncome); // Constructor
        ~Building(); // Destructor

        void displayBuildingInfo(); // Display building information
};

#endif // BUILDING_H