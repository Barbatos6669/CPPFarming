#pragma once
#include <iostream>

class Population {
private:
    int totalPopulation; ///< Total population    
    int birthRate; ///< Birth rate per 1000 people
    int deathRate; ///< Death rate per 1000 people
    float growthRate; ///< Growth rate in percentage (e.g., 1.5%)

    int employedPopulation; ///< Number of employed people
    int unemployedPopulation; ///< Number of unemployed people

    int grainPerPerson; ///< Grain consumption per person

public:
    // Constructor
    Population(int initialPopulation, float growthRate, int bRate, int dRate, int grain);

    // Destructor
    ~Population();

    // Getters
    int getTotalPopulation() const;
    int getEmployedPopulation() const;
    int getUnemployedPopulation() const;
    int getTotalGrainConsumption() const;

    // Display functions
    void displayPopulationInfo() const;

    // Population Modifiers (Increase & Decrease Combined)
    void adjustPopulation(int value);
    void adjustEmployedPopulation(int value);
    void adjustUnemployedPopulation(int value);

    // Population Growth Simulation
    void updatePopulation();

    // Goods Consumption
    void consumeGoods();

    // Setters
    void setGrainPerPerson(int value);
    void setGrowthRate(float value);
    void setBirthRate(int value);
    void setDeathRate(int value);
};
