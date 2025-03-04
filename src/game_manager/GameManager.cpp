#include "GameManager.h"
#include <iostream>

using namespace std;

// Constructor
GameManager::GameManager() {
    cout << "GameManager created" << endl;
    playerManager = new PlayerManager(); // allocate memory for the player manager
    isRunning = true;
}

// Destructor
GameManager::~GameManager() {
    cout << "GameManager destroyed" << endl;
    delete playerManager; // deallocate memory for the player manager
}

// Run the game
void GameManager::Run() {
    StartGame();
    
    while (isRunning) {
        DisplayMenu();
        HandleInput();
        Update();
        Render();
    }
}

// Start the game
void GameManager::StartGame() {
    cout << "Game started" << endl;
}

// Display the main menu
void GameManager::DisplayMenu() {
    cout << "Main Menu" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Exit Game" << endl;    
}

// Handle user input
void GameManager::HandleInput() {
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Starting game..." << endl;
            playerManager->setIsLoginMenu(true);
            playerManager->run();
            break;
        case 2:
            ExitGame();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

// Update the game
void GameManager::Update() {
    // Update the player manager
}

// Render the game
void GameManager::Render() {
    // Render the player manager
}

// Clear the screen
void GameManager::ClearScreen() {
    // Clear the screen
}

// Exit the game
void GameManager::ExitGame() {
    isRunning = false;
    cout << "Exiting game..." << endl;
}


