#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <string>

class Building
{
    public:

        // Attributes
        std::string name; // Name of the building
        int cost; // Cost of the building
        int income; // Income generated by the building
        std::string buildingType; //     

        // Methods
        Building(std::string buildingName, int buildingCost, int buildingIncome); // Constructor
        virtual ~Building(); // Destructor

        virtual void displayBuildingInfo(); // Display building information
};

#endif // BUILDING_H