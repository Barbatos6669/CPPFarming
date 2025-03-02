#pragma once
#include <iostream>
#include <unordered_map>
#include "Building.h"
#include "Grain.h"

class WheatFarm : public Building {
protected:
    int workersRequired;
    int workersEmployed;
    float efficiency;
    std::unordered_map<std::string, int> production; ///< Stores production rates

public:
    // Constructor
    WheatFarm(const std::string& farmName, int farmLevel, int workersReq, float prodEfficiency);

    // Destructor
    ~WheatFarm();

    // Getters
    int getWorkersRequired() const;
    int getWorkersEmployed() const;
    float getEfficiency() const;
    int getProduction(const std::string& good) const;

    // Setters
    void setWorkersRequired(int value);
    void setWorkersEmployed(int value);
    void setEfficiency(float value);
    void setProduction(const std::string& good, int amount);

    // Production
    void produce(Grain& grain);
    
    // Display Info
    void displayBuildingInfo() const override;
};
