#include "City.h"
#include "Farm.h"

using namespace std;

// Constructor
City::City(string cityName) : name(cityName), population(100) {}

// Destructor
City::~City()
{
    cout << "City object is being deleted" << endl;
    for (auto building : buildings)
    {
        delete building;
    }
}

// Display city information
void City::displayCityInfo()
{
    cout << "City name: " << name << endl;
    cout << "Population: " << population << endl;
    displayBuildings();
}

// Display the buildings in the city
void City::displayBuildings()
{
    cout << "Buildings in the city:" << endl;
    for (const auto& building : buildings)
    {
        building->displayBuildingInfo();
    }
}

// Add a building to the city
void City::addBuilding(string buildingName)
{
    if (buildings.size() < maxBuildings)
    {
        Building* newBuilding = nullptr;
        if (buildingName == "Farm")
        {
            newBuilding = new Farm("Farm", 100, 10, 5); // Example parameters
        }
        // Add other building types here if needed

        if (newBuilding)
        {
            buildings.push_back(newBuilding);
            cout << buildingName << " has been added to the city." << endl;
        }
        else
        {
            cout << "Unknown building type." << endl;
        }
    }
    else
    {
        cout << "Cannot add more buildings. Maximum capacity reached." << endl;
    }
}

// Remove a building from the city
void City::removeBuilding(string buildingName)
{
    // Implementation for removing a building
}