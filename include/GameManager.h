#pragma once
#include <iostream>
#include "Player.h"
#include "City.h"
#include "Population.h"
#include "Budget.h"
#include "Building.h"
#include "Grain.h"
#include "WheatFarm.h"


/**
 * @class GameManager
 * @brief A class to manage the game, including the player and the city.
 * 
 * The GameManager class provides methods to start the game, display the menu,
 * process menu choices, display game information, and build buildings in the city.
 */
class GameManager
{
    public:
        // Attributes
        Player player; ///< Player object
        City city; ///< City object
        Population population; ///< Population object
        Budget budget; ///< Budget object   
        Building building; ///< Building object
        Grain grain; ///< Grain object
        WheatFarm wheatFarm; ///< WheatFarm object
            

        // Methods

        /**
         * @brief Constructor for the GameManager class.
         */
        GameManager();

        /**
         * @brief Destructor for the GameManager class.
         */
        ~GameManager();

        /**
         * @brief Start the game.
         */
        void startGame();

        /**
         * @brief Display the main menu.
         */
        void displayMenu();

        /**
         * @brief Process the user's menu choice.
         * @param choice The user's menu choice.
         */
        void processMenuChoice(int choice);

        /**
         * @brief Display the player and city information.
         */
        void displayGameInfo();

        /**
         * @brief One week simulation of the game.
         *            
        */
        void simulateWeek();

        /**
         * @brief Display the building menu.
         */
        void buildmenu();

        /**
         * @brief Process the user's building menu choice.
         * @param choice The user's building menu choice.
         */

        void processBuildingMenuChoice(int choice);

        /**
         * @brief Build a building in the city.
         */

        void buildBuilding();

        /**
         * @brief Display the building information.
         */

        void displayBuildingInfo();

};