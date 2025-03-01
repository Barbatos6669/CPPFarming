#ifndef FARM_H
#define FARM_H

#include <Building.h>

class Farm : public Building
{
    private:

        // Attributes
        int foodProduction; // Food production of the farm
        int lvl; // Level of the farm

    public:

        // Methods
        Farm(std::string buildingName, int buildingCost, int buildingIncome, int buildingFoodProduction); // Constructor
        ~Farm(); // Destructor

        void displayBuildingInfo(); // Display building information
        void upgrade(); // Upgrade the farm
        void harvest(); // Harvest the food
};  

#endif // FARM_H