#include "PlayerManager.h"

// Constructor
PlayerManager::PlayerManager() : isLoginMenu(true) 
{
    cout << "PlayerManager created" << endl;
    players.push_back(new Player("Player 1", "1234")); // Add a new player    

}

// Destructor
PlayerManager::~PlayerManager() 
{
    cout << "PlayerManager destroyed" << endl;
    // Delete all the players
    for (Player* player : players) {
        delete player;
    }
}

// Run the player manager
void PlayerManager::run() 
{
    isLoginMenu = true;
    currentState = DISPLAY_MENU;

    while (isLoginMenu) 
    {
        switch (currentState) 
        {
            case DISPLAY_MENU:
                displayMenu();
                handleInput();
                break;
            case LOGIN:
                login();
                break;
            case CREATE_ACOUUNT:
                createAccount();
                break;
            case DELETE_ACCOUNT:
                deleteAccount();
                break;
            case LIST_PLAYERS:                
                listPlayers();
                break;
            case RETURN_TO_GAME_MANAGER:
                cout << "Returning to Game Manager..." << endl;
                isLoginMenu = false;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
}

// Display the player manager menu
void PlayerManager::displayMenu() 
{
    cout << "Player Manager Menu" << endl;
    cout << "1. Login" << endl;
    cout << "2. Create Account" << endl;
    cout << "3. Delete Account" << endl;
    cout << "4. List Players" << endl;
    cout << "5. Return to Game Manager" << endl;
}

// Handle user input
void PlayerManager::handleInput() 
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            currentState = LOGIN;
            break;
        case 2:
            currentState = CREATE_ACOUUNT;
            break;
        case 3:
            currentState = DELETE_ACCOUNT;
            break;
        case 4:
            currentState = LIST_PLAYERS;
            break;
        case 5:
            currentState = RETURN_TO_GAME_MANAGER;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

// Login
void PlayerManager::login() 
{
    cout << "Login Function" << endl;

    // Get the player's name
    cout << "Enter your name: ";
    cin >> playerName;
    // Get the player's password
    cout << "Enter your password: ";
    cin >> playerPassword;

    // Find the player
    for (Player* player : players) 
    {
        if (player->getName() == playerName && player->getPassword() == playerPassword) 
        {
            cout << "Login successful" << endl;
            player->run();
            return;
        }
    }

    cout << "Login failed" << endl;
    
}

// Create account
void PlayerManager::createAccount() 
{
    // Get the player's name
    cout << "Enter your name: ";
    cin >> playerName;
    // Get the player's password
    cout << "Enter your password: ";
    cin >> playerPassword;

    // Create a new player
    players.push_back(new Player(playerName, playerPassword));
    cout << "Account created" << endl;
}

// Delete account
void PlayerManager::deleteAccount() 
{
    cout << "Delete Account Function" << endl;

    // Get the player's name
    cout << "Enter your name: ";
    cin >> playerName;
    // Get the player's password
    cout << "Enter your password: ";
    cin >> playerPassword;

    // Find the player
    for (int i = 0; i < players.size(); i++) 
    {
        if (players[i]->getName() == playerName && players[i]->getPassword() == playerPassword) 
        {
            cout << "Account deleted" << endl;
            delete players[i];
            players.erase(players.begin() + i);
            return;
        }
    }
}

// List players
void PlayerManager::listPlayers() 
{
    cout << "List of Players" << endl;
    for (Player* player : players) 
    {
        cout << player->getName() << endl;
    }

}




