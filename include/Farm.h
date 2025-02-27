#ifndef FARMS_H
#define FARMS_H

#include <iostream>
#include <vector>

// include the Player class so we can interact with the player's gold
#include "Player.h"

class Farm
{
    private:
        std::vector<bool> plots; // vector of bools to represent whether a plot is occupied or not
        int maxPlots; // maximum number of plots on the farm

    public:
        Farm(int MaxPlots = 5); // constructor with default value of 5 for maxPlots
        bool buildPlot(int plotIndex, double cost, Player& player); // build a new plot on the farm
        void displayPlots() const; // display the status of each plot
};

#endif // FARMS_H