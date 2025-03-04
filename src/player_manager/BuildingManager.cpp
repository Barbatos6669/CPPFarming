#include "BuildingManager.h"

// Constructor
BuildingManager::BuildingManager() : isBuildingMenu(true)
{
    cout << "BuildingManager created" << endl;
}

// Destructor
BuildingManager::~BuildingManager()
{
    cout << "BuildingManager destroyed" << endl;
}

// Run the building manager
void BuildingManager::run()
{
    isBuildingMenu = true;

    while (isBuildingMenu)
    {
        switch (currentState)
        {
        case DISPLAY_MENU:
            displayMenu();
            handleInput();
            break;
        case URBAN_MENU:
            cout << "Urban Menu" << endl;
            break;
        case RESOURCE_MENU:
            cout << "Resource Menu" << endl;
            break;
        case AGRICULTURAL_MENU:
            cout << "Agricultural Menu" << endl;
            break;
        case DEVELOPEMENT_MENU:
            cout << "Development Menu" << endl;
            break;
        case RETURN_TO_CITY_MANAGER:
            cout << "Returning to City Manager..." << endl;
            isBuildingMenu = false;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

// Display the building manager menu
void BuildingManager::displayMenu()
{
    cout << "Building Manager Menu" << endl;
    cout << "1. Urban" << endl;
    cout << "2. Resource" << endl;
    cout << "3. Agricultural" << endl;
    cout << "4. Development" << endl;
    cout << "5. Return to City Manager" << endl;
}

// Handle user input
void BuildingManager::handleInput()
{
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        currentState = URBAN_MENU;
        break;
    case 2:
        currentState = RESOURCE_MENU;
        break;
    case 3:
        currentState = AGRICULTURAL_MENU;
        break;
    case 4:
        currentState = DEVELOPEMENT_MENU;
        break;
    case 5:
        currentState = RETURN_TO_CITY_MANAGER;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

