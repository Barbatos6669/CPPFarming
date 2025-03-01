#include "Building.h"

Building::Building(std::string buildingName, int buildingCost, int buildingIncome)
    : name(buildingName), cost(buildingCost), income(buildingIncome) {}

Building::~Building() {}

void Building::displayBuildingInfo() const
{
    std::cout << "Building name: " << name << std::endl;
    std::cout << "Cost: " << cost << std::endl;
    std::cout << "Income: " << income << std::endl;
}