#include <Game.h>
#include <limits>

Game::Game() : player(100), farm(5) {} // initialize player with 100 gold and farm with 5 plots

void Game::run()
{
    int choice;
    double cost;
    int plotIndex;

    while (true)
    {
        std::cout << "1. Build plot" << std::endl;
        std::cout << "2. Display plots" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }

        switch (choice)
        {
            case 1:
                std::cout << "Enter plot index: ";
                std::cin >> plotIndex;
                std::cout << "Enter cost: ";
                std::cin >> cost;
                farm.buildPlot(plotIndex, cost, player);
                break;
            case 2:
                farm.displayPlots();
                break;
            case 3:
                std::cout << "Exiting game." << std::endl;
                return;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    }
}
