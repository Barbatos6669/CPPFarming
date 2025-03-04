#include "CityManager.h"

// Constructor
CityManager::CityManager() : isCityMenu(true), isBuildingMenu(false)
{
    cout << "CityManager created" << endl;
}

// Destructor
CityManager::~CityManager()
{
    cout << "CityManager destroyed" << endl;
}

// Run the city manager
void CityManager::run()
{
    cout << "CityManager is running" << endl;

    while (isCityMenu)
    {
        cityMenu();
        handleInput();
    }
}

// Display the city menu
void CityManager::cityMenu()
{
    cout << "City Menu" << endl;
    cout << "1. Building Menu" << endl;
    cout << "5. Return to Player" << endl;
}

// Handle user input
void CityManager::handleInput()
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Building Menu" << endl;
        buildingMenu();
        break;
    case 5:
        cout << "Returning to Player" << endl;
        returnToPlayer();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

// Building Menu
void CityManager::buildingMenu()
{
    cout << "Building Menu" << endl;
    cout << "1. Build Agricultural Building" << endl;
    cout << "2. Return to City Menu" << endl;

    while (isBuildingMenu)
    {
        buildingMenu();
    }
}

// Build Menu Input
void CityManager::buildMenuInput()
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Building Agricultural Building" << endl;
        break;
    case 2:
        cout << "Returning to City Menu" << endl;
        returnToCityManager();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

// Return to the player
void CityManager::returnToPlayer()
{
    cout << "Returning to Player" << endl;
    isCityMenu = false;
}

// Return to the city manager
void CityManager::returnToCityManager()
{
    cout << "Returning to City Manager" << endl;
    isCityMenu = false;
}

