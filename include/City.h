#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Building.h"

using namespace std;

class City
{
    public:
        // Attributes
        string name; // Name of the city
        int population; // Number of people in the city
        vector<Building*> buildings; // Buildings in the city

        int maxBuildings = 5; // Maximum number of buildings in the city

    public:
        // Methods
        City(string cityName); // Constructor
        ~City(); // Destructor

        void displayCityInfo(); // Display city information
        void displayBuildings(); // Display the buildings in the city
        void addBuilding(string buildingName); // Add a building to the city
        void removeBuilding(string buildingName); // Remove a building from the city
};