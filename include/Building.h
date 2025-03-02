#pragma once
#include <iostream>
#include <string>

class Building {
protected:
    std::string name;
    int income;
    int buildingLevel;
    float productivity;

public:
    // Constructor
    Building(const std::string& buildingName, int buildingLevel, int buildingIncome, float buildingProductivity);

    // Destructor
    virtual ~Building();

    // Getters
    std::string getName() const;
    int getIncome() const;
    int getBuildingLevel() const;
    float getProductivity() const;

    // Setters
    void setName(const std::string& buildingName);
    void setIncome(int buildingIncome);
    void setBuildingLevel(int level);
    void setProductivity(float value);

    // Display
    virtual void displayBuildingInfo() const;
};
