#pragma once

#include <iostream>

class Population
{
    private:
        int overallPopulation;
        int populationGrowthRate;
        int birthRate;
        int deathRate;

        int employedPopulation;
        int unemployedPopulation;

    public:
        // Constructor
        Population(int initialPopulation, int growthRate, int bRate, int dRate);

        // Destructor
        ~Population();

        // Getters
        int getOverallPopulation() const;
        int getEmployedPopulation() const;
        int getUnemployedPopulation() const;

        // Display functions
        void displayPopulationInfo() const;

        // Methods to modify population
        void increasePopulation(int value);
        void decreasePopulation(int value);
        void increaseEmployedPopulation(int value);
        void decreaseEmployedPopulation(int value);
        void increaseUnemployedPopulation(int value);
        void decreaseUnemployedPopulation(int value);               
};