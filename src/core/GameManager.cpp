#include <iostream>
#include <thread>
#include "GameManager.h"

using namespace std;

GameManager::GameManager() : player("Default Player"), city("My City")
{
    cout << "Game Manager object is being created" << endl;
}

GameManager::~GameManager()
{
    cout << "Game Manager object is being deleted" << endl;
}

void GameManager::startGame()
{
    cout << "Welcome to the City Builder Game!" << endl;

    // Create a new city
    city = City("My City");

    // Display the main menu
    displayMenu();
}

void GameManager::displayMenu()
{
    cout << "Main Menu" << endl;
    cout << "1. Display Game Info" << endl;
    cout << "2. View Production info" << endl;
    cout << "3" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    processMenuChoice(choice);
}

void GameManager::processMenuChoice(int choice)
{
    switch (choice)
    {
        case 1:
            displayGameInfo();
            break;
        case 2:
            buildBuilding();
            break;
        case 3:
            cout << "Exiting the game..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    // Wait for a few seconds before displaying the menu again
    this_thread::sleep_for(chrono::seconds(2));

    // Display the main menu
    displayMenu();
}

void GameManager::displayGameInfo()
{
    // Display player information
    player.displayPlayerInfo();

    // Display city information
    city.displayCityInfo();
}

void GameManager::buildBuilding()
{
    cout << "Building a new building..." << endl;

    // Add a building to the city
    city.addBuilding("Farm");
}