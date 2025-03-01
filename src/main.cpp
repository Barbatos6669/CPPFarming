#include <iostream>
#include <vector>
#include <iomanip>



#include "Player.h"
#include "City.h"
#include "GameManager.h"

using namespace std;

// Entry point of the program
int main() 
{
    // Create a new game manager
    GameManager gameManager;

    // Start the game
    gameManager.startGame();
    return 0;
}


