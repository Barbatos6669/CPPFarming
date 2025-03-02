#include "Building.h"

// Constructor
Building::Building(const std::string& buildingName, int buildingLevel, int buildingIncome, float buildingProductivity)
    : name(buildingName), buildingLevel(buildingLevel), income(buildingIncome), productivity(buildingProductivity) {}

// Destructor
Building::~Building() {}

// Getters
std::string Building::getName() const { return name; }
int Building::getIncome() const { return income; }
int Building::getBuildingLevel() const { return buildingLevel; }
float Building::getProductivity() const { return productivity; }

// Setters
void Building::setName(const std::string& buildingName) { name = buildingName; }
void Building::setIncome(int buildingIncome) { income = buildingIncome; }
void Building::setBuildingLevel(int level) { buildingLevel = level; }
void Building::setProductivity(float value) { productivity = value; }

// Display Building Info
void Building::displayBuildingInfo() const {
    std::cout << "Building: " << name << " | Level: " << buildingLevel 
              << " | Income: $" << income << " | Productivity: " << productivity << "\n";
}
