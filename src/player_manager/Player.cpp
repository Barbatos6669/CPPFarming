#include "Player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Constructor
Player::Player(string name, string password) : name(name), password(password), fame(0)
{
    cout << "Player created: " << name << endl;
    cityManager = new CityManager();
}

// Destructor
Player::~Player()
{
    delete cityManager;
}

// Run the player
void Player::run()
{
    cout << "Player, "<< name << " is running" << endl;

    while (true)
    {
        cityManager->run();
    }
}

// Getter for name
string Player::getName() const {
    return name;
}

// Setter for name
void Player::setName(string value) {
    name = value;
}

// Getter for password
string Player::getPassword() const {
    return password;
}

// Setter for password
void Player::setPassword(string value) {
    password = value;
}