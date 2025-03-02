#include "City.h"
#include <algorithm> // For std::find

using namespace std;

// Constructor
City::City(string cityName)
    : name(cityName), grossDomesticProduct(0), population(0), incorporated(false), capital(false), maxResourceBuildings(5), maxAgriculturalBuildings(3) {
    cout << "City object is being created" << endl;
}

// Destructor
City::~City() {
    cout << "City object is being deleted" << endl;
}

// Display City Information
void City::displayCityInfo() const {
    cout << "City: " << name << endl;
    cout << "Population: " << population << endl;
    cout << "GDP: $" << grossDomesticProduct << endl;
    cout << "Incorporated: " << (incorporated ? "Yes" : "No") << endl;
    cout << "Capital: " << (capital ? "Yes" : "No") << endl;
}

// Display Buildings
void City::displayBuildings() const {
    cout << "Buildings in the city:" << endl;
    for (const auto& buildingType : buildings) {
        cout << "Category: " << buildingType.first << endl;
        for (const auto& building : buildingType.second) {
            cout << "   - " << building->getName() << endl;
        }
    }
}

// Add Building
void City::addBuilding(string category, Building* building) 
{
    cout << "Adding building: " << endl;
}

// Remove Building
void City::removeBuilding(string category, Building* building) 
{
    cout << "Removing building: " << endl;
}

// Get Building Count
int City::getBuildingCount(string category) const 
{
    cout << "Getting building count: " << endl;
    return 0;
}

// Get Population
int City::getPopulation() const 
{
    cout << "Getting population: " << endl;
    return 0;
}

// Get GDP
double City::getGDP() const 
{
    cout << "Getting GDP: " << endl;
    return 0;
}

// Get Name
string City::getName() const 
{
    cout << "Getting name: " << endl;
    return "";
}

// Is Incorporated
bool City::isIncorporated() const 
{
    cout << "Checking if incorporated: " << endl;
    return false;
}

// Is Capital
bool City::isCapital() const 
{
    cout << "Checking if capital: " << endl;
    return false;
}

// Set Building Count
void City::setBuildingCount(string category, int value) 
{
    cout << "Setting building count: " << endl;
}

// Set Population
void City::setPopulation(int value) 
{
    cout << "Setting population: " << endl;
}

// Set GDP
void City::setGDP(double value) 
{
    cout << "Setting GDP: " << endl;
}
