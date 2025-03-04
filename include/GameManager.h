#pragma once

#include <iostream>
#include <string>
#include "PlayerManager.h"

using namespace std;

class GameManager
{
private:
    PlayerManager* playerManager; // Pointer to the player manager

    bool isRunning;
    int choice;

    enum GameManagerState
    {
        
        LOGIN_MENU,
        EXIT,
        MAIN_MENU
    };

public:
    GameManager();
    ~GameManager();

    GameManagerState currentState;

    void run();
    void displayMenu();
    void handleInput();
    void exitGame();

};

