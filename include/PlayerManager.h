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

    enum PlayerManagerState
    {
        DISPLAY_MENU,
        LOGIN,
        CREATE_ACOUUNT,
        DELETE_ACCOUNT,
        LIST_PLAYERS,
        RETURN_TO_GAME_MANAGER
    };

public:
    PlayerManager();
    ~PlayerManager();

    PlayerManagerState currentState;

    void run();
    void displayMenu();
    void handleInput();

    void login();
    void createAccount();
    void deleteAccount();
    void listPlayers();       
};