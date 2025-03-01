#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Building.h"

using namespace std;

/**
 * @class City
 * @brief A class representing a city with a name, population, and buildings.
 * 
 * The City class provides attributes to store the name, population, and buildings
 * of a city. It also provides methods to display city information, display buildings,
 * add a building, and remove a building.
 */
class City
{
    public:
        // Attributes
        string name; ///< Name of the city
        int population; ///< Number of people in the city
        vector<Building*> buildings; ///< Buildings in the city

        int maxBuildings = 5; ///< Maximum number of buildings in the city

    public:
        // Methods

        /**
         * @brief Constructor for the City class.
         * @param cityName The name of the city.
         */
        City(string cityName);

        /**
         * @brief Destructor for the City class.
         */
        ~City();

        /**
         * @brief Display information about the city.
         */
        void displayCityInfo();

        /**
         * @brief Display the buildings in the city.
         */
        void displayBuildings();

        /**
         * @brief Add a building to the city.
         * @param buildingName The name of the building to add.
         */
        void addBuilding(string buildingName);

        /**
         * @brief Remove a building from the city.
         * @param buildingName The name of the building to remove.
         */
        void removeBuilding(string buildingName);
};