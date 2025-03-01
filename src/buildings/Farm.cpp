#include <iostream>
#include "Farm.h"

using namespace std;

Farm::Farm(string buildingName, int buildingCost, int buildingIncome, int buildingFoodProduction)
    : Building(buildingName, buildingCost, buildingIncome), foodProduction(buildingFoodProduction), lvl(1) {}

Farm::~Farm() {}

void Farm::displayBuildingInfo() const
{
    Building::displayBuildingInfo();
    cout << "Food production: " << foodProduction << endl;
    cout << "Level: " << lvl << endl;
}

void Farm::upgrade()
{
    cost *= 2;
    income *= 2;
    foodProduction *= 2;
    lvl++;
    cout << "Farm has been upgraded to level " << lvl << endl;
}

void Farm::harvest()
{
    cout << "Harvesting " << foodProduction << " food..." << endl;
    cout << "Food has been added to the city's resources." << endl;
}