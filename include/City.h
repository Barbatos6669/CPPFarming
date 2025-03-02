#pragma once
#include <iostream>
#include <unordered_map>
#include <vector>
#include "Building.h"

class City {
private:
    std::string name;
    double grossDomesticProduct;
    int population;
    bool incorporated;
    bool capital;

    std::unordered_map<std::string, int> buildingCounts; ///< Categorized building counts
    std::unordered_map<std::string, std::vector<Building*>> buildings; ///< Stores buildings by type

    int maxResourceBuildings;
    int maxAgriculturalBuildings;

public:
    // Constructor & Destructor
    City(std::string cityName);
    ~City();

    // Display Methods
    void displayCityInfo() const;
    void displayBuildings() const;

    // Building Management
    void addBuilding(std::string category, Building* building);
    void removeBuilding(std::string category, Building* building);
    
    // Getters
    int getBuildingCount(std::string category) const;
    int getPopulation() const;
    double getGDP() const;
    std::string getName() const;
    bool isIncorporated() const;
    bool isCapital() const;

    // Setters
    void setBuildingCount(std::string category, int value);
    void setPopulation(int value);
    void setGDP(double value);
};
