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
float WheatFarm::getEfficiency() const 
{ 
    int workers = workersEmployed;
    int required = workersRequired;
    float efficiency = (workers / (float)required);
    return efficiency; 
}
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

void WheatFarm::displayProduction() const {
    std::cout << "🌾 " << name << " Production Rates:\n";
    std::cout << "   - Grain: " << production.at("Grain") << " per cycle.\n";
}

void WheatFarm::displayWorkers() const {
    std::cout << "🌾 " << name << " Worker Information:\n";
    std::cout << "   - Workers Required: " << workersRequired << " | Workers Employed: " << workersEmployed << "\n";
}

void WheatFarm::displayEfficiency() const {
    std::cout << "🌾 " << name << " Efficiency:\n";
    std::cout << "   - Efficiency: " << efficiency * 100 << "%\n";
}

void WheatFarm::displayAll() const {
    displayBuildingInfo();
    displayProduction();
    displayWorkers();
    displayEfficiency();
}

// Level Up
void WheatFarm::levelUp() {
    setBuildingLevel(getBuildingLevel() + 1);
    workersRequired += 5; // Increase workers required
    production["Grain"] += 30; // Increase grain production

    // Subtract 5 unemployed workers from the population
    workersEmployed += 5;
    population.adjustUnemployedPopulation(-5);


    std::cout << "🌾 " << name << " has been upgraded to Level " << getBuildingLevel() << "!\n";
}

void WheatFarm::levelDown() {
    if (getBuildingLevel() > 1) {
        setBuildingLevel(getBuildingLevel() - 1);
        workersRequired -= 5; // Decrease workers required
        production["Grain"] -= 10; // Decrease grain production

        // Add 5 unemployed workers back to the population
        workersEmployed -= 5;
        population.adjustUnemployedPopulation(5);
        
        std::cout << "🌾 " << name << " has been downgraded to Level " << getBuildingLevel() << "!\n";
    } else {
        std::cout << "🌾 " << name << " is already at the lowest level!\n";
    }
}

