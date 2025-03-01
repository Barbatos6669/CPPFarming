#pragma once
#include <iostream>
#include "Player.h"
#include "City.h"

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
         * @brief Build a building in the city.
         */
        void buildBuilding();
};