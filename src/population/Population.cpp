#include "Population.h"
#include <iostream>

// Constructor
Population::Population(int initialPopulation, int growthRate, int bRate, int dRate)
    : overallPopulation(initialPopulation), populationGrowthRate(growthRate), birthRate(bRate), deathRate(dRate),
      employedPopulation(0), unemployedPopulation(0) {}

// Destructor
Population::~Population() {}

// Getters
int Population::getOverallPopulation() const
{
    return overallPopulation;
}

int Population::getEmployedPopulation() const
{
    return employedPopulation;
}

int Population::getUnemployedPopulation() const
{
    return unemployedPopulation;
}

// Display functions
void Population::displayPopulationInfo() const
{
    std::cout << "Overall Population: " << overallPopulation << std::endl;
    std::cout << "Employed Population: " << employedPopulation << std::endl;
    std::cout << "Unemployed Population: " << unemployedPopulation << std::endl;
}

// Methods to modify population
void Population::increasePopulation(int value)
{
    overallPopulation += value;
}

void Population::decreasePopulation(int value)
{
    overallPopulation -= value;
}

void Population::increaseEmployedPopulation(int value)
{
    employedPopulation += value;
}

void Population::decreaseEmployedPopulation(int value)
{
    employedPopulation -= value;
}

void Population::increaseUnemployedPopulation(int value)
{
    unemployedPopulation += value;
}

void Population::decreaseUnemployedPopulation(int value)
{
    unemployedPopulation -= value;
}



