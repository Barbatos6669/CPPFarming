#pragma Once
#include <iostream>
#include <string>
#include <vector>
#include "BuildingManager.h"

using namespace std;

class CityManager
{
    private:
        // Vector to store the cities
        string cityName;
        int population;
        int workers;
        int unemployed;
        int choice;
        bool isCityMenu;
        bool isBuildingMenu;

        BuildingManager* buildingManager;

        enum CityManagerState
        {
            DISPLAY_MENU,
            BUILD_MENU,
            RETURN_TO_PLAYER_MENU
        };

    public:
        // Constructor
        CityManager();

        // Destructor
        ~CityManager();

        CityManagerState currentState;

        // Run the city manager
        void run();
        void displayMenu();
        void handleInput();       
};