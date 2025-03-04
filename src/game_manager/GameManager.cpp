#include "GameManager.h"
#include <iostream>

using namespace std;

// Constructor
GameManager::GameManager() {
    cout << "GameManager created" << endl;
    playerManager = new PlayerManager(); // allocate memory for the player manager
    currentState = MAIN_MENU;
    isRunning = true;
}

// Destructor
GameManager::~GameManager() {
    cout << "GameManager destroyed" << endl;
    delete playerManager; // deallocate memory for the player manager
}

// Run the game 
void GameManager::run() 
{
    while (isRunning) 
    {
        switch (currentState) 
        {
            case MAIN_MENU:
                displayMenu();
                handleInput();
                break;
            case LOGIN_MENU:
                playerManager->run();
                currentState = MAIN_MENU; // Reset state after PlayerManager finishes
                break;
            case EXIT:
                exitGame();
                break;
        }
    }
}

// Display the main menu
void GameManager::displayMenu() 
{
    cout << "Main Menu" << endl;
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
}

// Handle user input
void GameManager::handleInput() 
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            currentState = LOGIN_MENU;
            break;
        case 2:
            currentState = EXIT;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

// Exit the game
void GameManager::exitGame() 
{
    isRunning = false;
}


