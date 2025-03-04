#pragma Once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CityManager
{
    private:
        // Vector to store the cities
        string cityName;
        int population;
        int choice;
        bool isCityMenu;
        bool isBuildingMenu;

    public:
        CityManager();
        ~CityManager();

        void run();
        void cityMenu();
        void handleInput();
        void buildingMenu();
        void buildMenuInput();
        
        void returnToPlayer();
        void returnToCityManager();

        bool getIsCityMenu() const;
        void setIsCityMenu(bool value);
        bool getIsBuildingMenu() const;
        void setIsBuildingMenu(bool value);
};