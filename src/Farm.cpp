#include <Farm.h>
#include <iostream>

Farm::Farm(int MaxPlots)
{
    maxPlots = MaxPlots;
    plots = std::vector<bool>(maxPlots, false);
}

bool Farm::buildPlot(int plotIndex, double cost, Player& player)
{
    // check if the plot index is valid
    if (plotIndex < 0 || plotIndex >= maxPlots)
    {
        std::cout << "Invalid plot index." << std::endl;
        return false;
    }

    if (plots[plotIndex])
    {
        std::cout << "Plot is already occupied." << std::endl;
        return false;
    }

    if (player.getGold() < cost)
    {
        std::cout << "Not enough gold to build plot." << std::endl;
        return false;
    }

    player.spendGold(cost);
    plots[plotIndex] = true;

    std::cout << "Plot built successfully." << std::endl;
    return true;
}

void Farm::displayPlots() const
{
    for (int i = 0; i < maxPlots; i++)
    {
        std::cout << "Plot " << i << ": " << (plots[i] ? "Occupied" : "Empty") << std::endl;
    }
}

