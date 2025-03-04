#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BuildingManager
{
    private:
        // Vector to store the buildings
        vector<string> urban;
        vector<string> resource;
        vector<string> agricultural;
        vector<string> commercial;
        int choice;
        bool isBuildingMenu;

        enum BuildingManagerState
        {
            DISPLAY_MENU,
            URBAN_MENU,
            RESOURCE_MENU,
            AGRICULTURAL_MENU,
            DEVELOPEMENT_MENU,
            RETURN_TO_CITY_MANAGER
        };

    public:
        // Constructor
        BuildingManager();

        // Destructor
        ~BuildingManager();

        BuildingManagerState currentState;

        // Run the building manager
        void run();
        void displayMenu();
        void handleInput(); 

};
