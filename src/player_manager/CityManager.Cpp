#include "CityManager.h"

// Constructor
CityManager::CityManager() : isCityMenu(true), isBuildingMenu(false)
{
    cout << "CityManager created" << endl;
    buildingManager = new BuildingManager();
}

// Destructor
CityManager::~CityManager()
{
    cout << "CityManager destroyed" << endl;
    delete buildingManager;
}

// Run the city manager
void CityManager::run()
{
    isCityMenu = true;

    while (isCityMenu)
    {
        switch (currentState)
        {
        case DISPLAY_MENU:
            displayMenu();
            handleInput();
            break;
        case BUILD_MENU:
            buildingManager->run();
            break;
        case RETURN_TO_PLAYER_MENU:
            cout << "Returning to Player Manager..." << endl;
            isCityMenu = false;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

// Display the city manager menu
void CityManager::displayMenu()
{
    cout << "City Manager Menu" << endl;
    cout << "1. Build" << endl;
    cout << "2. Return to Player Manager" << endl;
}

// Handle user input
void CityManager::handleInput()
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        currentState = BUILD_MENU;
        break;
    case 2:
        currentState = RETURN_TO_PLAYER_MENU;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}