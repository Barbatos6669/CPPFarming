#include <iostream>
#include <vector>
#include <City.h>

using namespace std;

// Constructor
City::City(string cityName)
{
    name = cityName;
    population = 100;
    gold = 1000;
    buildings.resize(maxBuildings, false);
}

// Destructor
City::~City()
{
    cout << "City object is being deleted" << endl;
}

// Display city information
void City::displayCityInfo()
{
    cout << "City name: " << name << endl;
    cout << "Population: " << population << endl;
    cout << "Gold: " << gold << endl;
    displayBuildings();
}

// Display the buildings in the city
void City::displayBuildings()
{
    cout << "Buildings in the city:" << endl;
    for (int i = 0; i < buildings.size(); i++)
    {
        if (buildings[i])
        {
            cout << "Building " << i + 1 << ": Constructed" << endl;
        }
        else
        {
            cout << "Building " << i + 1 << ": Not constructed" << endl;
        }
    }
}

// Add a building to the city
void City::addBuilding(string buildingName)
{
    // Check if the city has reached the maximum number of buildings
    if (buildings.size() >= maxBuildings)
    {
        cout << "Cannot add more buildings. Maximum limit reached." << endl;
        return;
    }

    // Add the building to the city
    buildings.push_back(true);
    cout << buildingName << " has been added to the city." << endl;
}

// Remove a building from the city
void City::removeBuilding(string buildingName)
{
    // Check if the city has any buildings
    if (buildings.empty())
    {
        cout << "No buildings to remove." << endl;
        return;
    }

    // Remove the last building from the city
    buildings.pop_back();
    cout << buildingName << " has been removed from the city." << endl;
}
