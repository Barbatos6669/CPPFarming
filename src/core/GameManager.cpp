#include <iostream>
#include <thread>
#include "GameManager.h"
#include "Building.h" // Include Building.h

using namespace std;

GameManager::GameManager() : 
    player("Default Player"), city("My City"), population(10000, 0.02, 10, 5, 1), 
    budget("Gold"), building("Building", 1, 0, 0.5), grain("Grain", 10, 100), 
    wheatFarm("Wheat Farm", 1, 5, 0.5) // Initialize the Building, Grain, and WheatFarm objects
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
    cout << "2. Simulate Week" << endl;
    cout << "3. Building Menu" << endl; // Add a new menu option

    cout << "4. Exit" << endl;

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
            simulateWeek();
            break;      
        case 3:
            buildBuilding(); // Call the buildBuilding function
            break;
        case 4:
            cout << "Exiting the game. Goodbye!" << endl;
            return;
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

    // Display population information
    population.displayPopulationInfo();

    // Display budget information
    budget.displayBudgetReport();
}

void GameManager::simulateWeek()
{
    cout << "simulating a week" << endl;

    // Update the population
    population.updatePopulation();

    // Update the budget
    budget.calculateBudget();

}

void GameManager::buildBuilding()
{
    // Display the building menu
    cout << "Building Menu" << endl;
    cout << "1. Add Wheat Farm" << endl;
    cout << "2. Remove Wheat Farm" << endl;
    cout << "3. Display Wheat Farm Stats" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "level up wheat farm" << endl;
            break;
        case 2:
            cout << "level down wheat farm" << endl;
            break;
        case 3:
            wheatFarm.displayBuildingInfo(); // Display the stats of the WheatFarm building
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }



}