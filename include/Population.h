#pragma once

#include <iostream>

/**
 * @class Population
 * @brief A class representing the population with various attributes and methods to manage it.
 * 
 * The Population class provides attributes to store the overall population, growth rate, birth rate,
 * death rate, employed population, and unemployed population. It also provides methods to display
 * population information and modify the population attributes.
 */
class Population
{
    private:
        int overallPopulation; ///< Overall population
        int populationGrowthRate; ///< Population growth rate
        int birthRate; ///< Birth rate
        int deathRate; ///< Death rate

        int employedPopulation; ///< Employed population
        int unemployedPopulation; ///< Unemployed population

    public:
        // Constructor

        /**
         * @brief Constructor for the Population class.
         * @param initialPopulation The initial overall population.
         * @param growthRate The population growth rate.
         * @param bRate The birth rate.
         * @param dRate The death rate.
         */
        Population(int initialPopulation, int growthRate, int bRate, int dRate);

        // Destructor

        /**
         * @brief Destructor for the Population class.
         */
        ~Population();

        // Getters

        /**
         * @brief Get the overall population.
         * @return The overall population.
         */
        int getOverallPopulation() const;

        /**
         * @brief Get the employed population.
         * @return The employed population.
         */
        int getEmployedPopulation() const;

        /**
         * @brief Get the unemployed population.
         * @return The unemployed population.
         */
        int getUnemployedPopulation() const;

        // Display functions

        /**
         * @brief Display information about the population.
         */
        void displayPopulationInfo() const;

        // Methods to modify population

        /**
         * @brief Increase the overall population.
         * @param value The amount to increase the population by.
         */
        void increasePopulation(int value);

        /**
         * @brief Decrease the overall population.
         * @param value The amount to decrease the population by.
         */
        void decreasePopulation(int value);

        /**
         * @brief Increase the employed population.
         * @param value The amount to increase the employed population by.
         */
        void increaseEmployedPopulation(int value);

        /**
         * @brief Decrease the employed population.
         * @param value The amount to decrease the employed population by.
         */
        void decreaseEmployedPopulation(int value);

        /**
         * @brief Increase the unemployed population.
         * @param value The amount to increase the unemployed population by.
         */
        void increaseUnemployedPopulation(int value);

        /**
         * @brief Decrease the unemployed population.
         * @param value The amount to decrease the unemployed population by.
         */
        void decreaseUnemployedPopulation(int value);               
};