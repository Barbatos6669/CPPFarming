#include "WheatFarm.h"

// Constructor
WheatFarm::WheatFarm(const std::string& farmName, int farmLevel, int workersReq, float prodEfficiency)
    : Building(farmName, farmLevel, 0, prodEfficiency), workersRequired(workersReq), workersEmployed(0), efficiency(prodEfficiency) {
    
    // Initial Production Setup
    production["Grain"] = 50 * farmLevel; // Produces 50 Grain per level
}

// Destructor
WheatFarm::~WheatFarm() {}

// Getters
int WheatFarm::getWorkersRequired() const { return workersRequired; }
int WheatFarm::getWorkersEmployed() const { return workersEmployed; }
float WheatFarm::getEfficiency() const { return efficiency; }
int WheatFarm::getProduction(const std::string& good) const { return production.at(good); }

// Setters
void WheatFarm::setWorkersRequired(int value) { workersRequired = value; }
void WheatFarm::setWorkersEmployed(int value) { workersEmployed = value; }
void WheatFarm::setEfficiency(float value) { efficiency = value; }
void WheatFarm::setProduction(const std::string& good, int amount) { production[good] = amount; }

// Produce Grain
void WheatFarm::produce(Grain& grain) {
    int actualProduction = production["Grain"] * (workersEmployed / (float)workersRequired);
    grain.setQuantity(grain.getQuantity() + actualProduction); // Add to the grain stock
    std::cout << "🌾 " << name << " produced " << actualProduction << " units of Grain.\n";
}

// Display Info
void WheatFarm::displayBuildingInfo() const {
    std::cout << "🌾 " << name << " (Wheat Farm) | Level: " << getBuildingLevel() << " | Efficiency: " << efficiency * 100 << "%\n";
    std::cout << "   - Workers Required: " << workersRequired << " | Workers Employed: " << workersEmployed << "\n";
    std::cout << "   - Producing: " << production.at("Grain") << " Grain per cycle.\n";
}
