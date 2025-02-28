#include <iostream>
#include <vector>
#include <iomanip>

#include "Player.h"
#include "City.h"
#include "GameManager.h"

using namespace std;

// Entry point of the program
int main() 
{
    // initialize playerName variable
    string playerName = "";
    playerName = "none";

    Player player("none"); // Initialize player object
    City city("City1"); // Initialize city object

    while (true)
    {
        // Display the main menu
        cout << "1. New Game" << endl;
        cout << "2. Player Information" << endl;
        cout << "3. Display City Information" << endl;
        cout << "4. Display Buildings" << endl;
        cout << "5. Exit" << endl;

        // Get user input
        int choice = 0;
        cout << "Enter your choice: ";
        cin >> choice;

        // Process user input
        switch (choice)
        {
            case 1:
                // Create a new player
                cout << "Enter player name: ";
                cin >> playerName;
                player = Player(playerName); // Reassign player object
                cout << "Player created" << endl;

                player.displayPlayerInfo();
                
                break;
            case 2:
                // First check if the player has been created
                if (playerName == "none")
                {
                    cout << "Player has not been created yet" << endl;
                }
                else
                {
                    // Display player information
                    cout << "Player information" << endl;
                    cout << "------------------" << endl;
                    cout << "Name: " << playerName << endl;
                    cout << "Gold: " << 100 << endl;
                }
                break;
            case 3:
                // First check if the player has been created
                if (playerName == "none")
                {
                    cout << "Player has not been created yet" << endl;
                }
                else
                {  
                    city.displayCityInfo();
                }
                break;
            case 4:
                // First check if the player has been created   
                if (playerName == "none")
                {
                    cout << "Player has not been created yet" << endl;
                }
                else
                {
                    city.displayBuildings();
                }
                break;
            case 5:
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}


