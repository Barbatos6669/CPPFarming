#pragma once
#include <iostream>
#include "Player.h"
#include "City.h"

class GameManager
{
    public:
        // Attributes
        Player player; // Player object
        City city; // City object

        // Methods
        GameManager(); // Constructor
        ~GameManager(); // Destructor

        void startGame(); // Start the game
        void displayMenu(); // Display the main menu
        void processMenuChoice(int choice); // Process the user's choice
        void displayGameInfo(); // Display the player and city information
        void buildBuilding(); // Build a building in the city
};