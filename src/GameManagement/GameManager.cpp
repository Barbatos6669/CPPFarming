#include "GameManager.h"

using namespace std;

// Constructor
GameManager::GameManager()
{
    cout << "Game Manager created" << endl;
}

// Destructor
GameManager::~GameManager()
{
    cout << "Game Manager destroyed" << endl;
}

// Run the game
void GameManager::Run()
{
    cout << "Game is running" << endl;

    player.setRulerName("King Arthur");
}

// Update the game
void GameManager::Update()
{
    cout << "Game is updating" << endl;
}

// Render the game
void GameManager::Render()
{
    cout << "Game is rendering" << endl;
}

// Display the menu
void GameManager::displayMenu()
{
    cout << "Game menu displayed" << endl;
}

// Clear the screen
void GameManager::clearScreen()
{
    cout << "Screen cleared" << endl;
}

// Exit the game
void GameManager::Exit()
{
    cout << "Game exited" << endl;
}   

