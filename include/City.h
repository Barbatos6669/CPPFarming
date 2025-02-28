#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class City
{
    public:

        // Attributes
        string name; // Name of the city
        int population; // Number of people in the city
        int gold; // Amount of gold in the city
        vector<bool> buildings; // List of buildings in the city

        int maxBuildings = 5; // Maximum number of buildings in the city

        // Methods
        City(string cityName); // Constructor
        ~City(); // Destructor

        void displayCityInfo(); // Display city information
        void displayBuildings(); // Display the buildings in the city
        void addBuilding(string buildingName); // Add a building to the city
        void removeBuilding(string buildingName); // Remove a building from the city

};

#endif // CITY_H