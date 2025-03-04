#include "PlayerManager.h"

// Constructor
PlayerManager::PlayerManager() : isLoginMenu(true) {
    cout << "PlayerManager created" << endl;
    players.push_back(new Player("Player 1", "1234")); // Add a new player
}

// Destructor
PlayerManager::~PlayerManager() {
    cout << "PlayerManager destroyed" << endl;
    // Delete all the players
    for (Player* player : players) {
        delete player;
    }
}

// Run the player manager
void PlayerManager::run() {
    while (isLoginMenu) {
        gameMenu();
        handleInput();
    }
}

// Login to an account
void PlayerManager::login() {
    cout << "Login" << endl;

    cout << "Enter your name: ";
    cin >> playerName;
    cout << "Enter your password: ";
    cin >> playerPassword;

    for (Player* player : players) {
        if (player->getName() == playerName && player->getPassword() == playerPassword) {
            cout << "Login successful, Welcome Back, " << playerName << endl;
            player->run();
        }
    }

    cout << "Login failed" << endl;

}

// Create a new account
void PlayerManager::createAccount() {
    cout << "Create Account" << endl;

    cout << "Enter your name: ";
    cin >> playerName;
    cout << "Enter your password: ";
    cin >> playerPassword;

    players.push_back(new Player(playerName, playerPassword)); // Add a new player
    cout << "Account created" << endl;
}

// Delete an account
void PlayerManager::deleteAccount() {
    cout << "Delete Account" << endl;
}

// Display the game menu
void PlayerManager::gameMenu() {
    cout << "Game Menu" << endl;
    cout << "1. Login" << endl;
    cout << "2. Create Account" << endl;
    cout << "3. Delete Account" << endl;
    cout << "4. List Players" << endl;
    cout << "5. Return to GameManager" << endl;
}

// Handle user input
void PlayerManager::handleInput() {
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            login();
            break;
        case 2:
            createAccount();
            break;
        case 3:
            deleteAccount();
            break;
        case 4:
            cout << "List Players" << endl;
            for (Player* player : players) {
                cout << player->getName() << endl;
            }
            break;
        case 5:
            cout << "Returning to GameManager..." << endl;
            returnToGameManager();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

// Return to the game manager
void PlayerManager::returnToGameManager() {
    isLoginMenu = false;
}

// Getter for isLoginMenu
bool PlayerManager::getIsLoginMenu() const {
    return isLoginMenu;
}

// Setter for isLoginMenu
void PlayerManager::setIsLoginMenu(bool value) {
    isLoginMenu = value;
}

// Add a player to the player manager
