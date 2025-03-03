#include "Population.h"

using namespace std;

// Default Constructor
Population::Population()
    : totalPopulation(0), birthRate(0), deathRate(0), growthRate(0.0f), 
      employedPopulation(0), unemployedPopulation(0), grainPerPerson(0) {
    cout << "Default Population object is being created" << endl;
}

// Parameterized Constructor
Population::Population(int initialPopulation, float growthRate, int bRate, int dRate, int grain)
    : totalPopulation(initialPopulation), growthRate(growthRate), birthRate(bRate), deathRate(dRate), grainPerPerson(grain),
      employedPopulation(0), unemployedPopulation(initialPopulation) {
    cout << "Population object is being created" << endl;
}

// Destructor
Population::~Population() {
    cout << "Population object is being deleted" << endl;
}

// Getters
int Population::getTotalPopulation() const {
    return totalPopulation;
}

int Population::getEmployedPopulation() const {
    return employedPopulation;
}

int Population::getUnemployedPopulation() const {
    return unemployedPopulation;
}

int Population::getTotalGrainConsumption() const {
    return totalPopulation * grainPerPerson;
}

// Display functions
void Population::displayPopulationInfo() const {
    cout << "Total Population: " << totalPopulation << endl;
    cout << "Employed Population: " << employedPopulation << endl;
    cout << "Unemployed Population: " << unemployedPopulation << endl;
    cout << "Total Grain Consumption: " << getTotalGrainConsumption() << " tons" << endl;
}

// Population Modifiers (Increase & Decrease Combined)
void Population::adjustPopulation(int value) {
    totalPopulation += value;
    unemployedPopulation += value;
}

void Population::adjustEmployedPopulation(int value) {
    employedPopulation += value;
    unemployedPopulation -= value;
}

void Population::adjustUnemployedPopulation(int value) {
    unemployedPopulation += value;
    employedPopulation -= value;
}

// Population Growth Simulation
void Population::updatePopulation() {
    int births = totalPopulation * birthRate / 1000;
    int deaths = totalPopulation * deathRate / 1000;

    totalPopulation += births - deaths;
    unemployedPopulation += births - deaths;
}

// Goods Consumption
void Population::consumeGoods() {
    int totalGrainConsumed = getTotalGrainConsumption();
    cout << "Population is consuming " << totalGrainConsumed << " tons of grain..." << endl;
}

// Setters
void Population::setGrainPerPerson(int value) {
    grainPerPerson = value;
}

void Population::setGrowthRate(float value) {
    growthRate = value;
}

void Population::setBirthRate(int value) {
    birthRate = value;
}

void Population::setDeathRate(int value) {
    deathRate = value;
}

