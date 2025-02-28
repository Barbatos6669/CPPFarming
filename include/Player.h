#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include <string>

#include "City.h"

class Player
{
    public:

        // Attributes
        std::string name; // Name of the player
        int gold; // Amount of gold the player has

        // Methods
        Player(string playerName); // Constructor
        ~Player(); // Destructor

        // N
        void displayPlayerInfo(); // Display player information
};

#endif // PLAYER_H
