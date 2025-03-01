#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include <string>

#include "City.h"

using namespace std;

class Player
{
    public:

        // Attributes
        string name; // Name of the player
        int gold; // Amount of gold the player has

        // Methods
        Player(string playerName); // Constructor
        ~Player(); // Destructor

        // Display player information
        void displayPlayerInfo(); // Display player information
};

#endif // PLAYER_H
