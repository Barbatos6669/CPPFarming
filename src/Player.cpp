#include "iostream"

#include "Player.h"

using namespace std;

// Constructor
Player::Player(string playerName)
{
    name = playerName;
    gold = 100;
}

// Destructor
Player::~Player()
{
    cout << "Player object is being deleted" << endl;
}

// Display player information
void Player::displayPlayerInfo()
{
    cout << "Player name: " << name << endl;
    cout << "Gold: " << gold << endl;
}






