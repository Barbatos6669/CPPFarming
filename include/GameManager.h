#pragma once

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class GameManager
{
private:
    Player player;
public:
    GameManager();
    ~GameManager();

    void Run();    
    void Update();
    void Render();
    void displayMenu();
    void clearScreen();
    void Exit();
};

