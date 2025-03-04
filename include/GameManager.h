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

public:
    GameManager();
    ~GameManager();

    void Run();
    void StartGame();

    void DisplayMenu();
    void HandleInput();
    void Update();
    void Render();
    void ClearScreen();
    void ExitGame();
};

