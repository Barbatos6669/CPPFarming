#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

class PlayerManager
{
private:
    vector<Player*> players; // Vector to store the players
    int choice;
    bool isLoginMenu;

    string playerName;
    string playerPassword;

public:
    PlayerManager();
    ~PlayerManager();

    void run();
    void login();
    void createAccount();
    void deleteAccount();

    void gameMenu();
    void handleInput();
    void returnToGameManager();
    
    // getters and setters
    bool getIsLoginMenu() const;
    void setIsLoginMenu(bool value);

    
};