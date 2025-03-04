#include "Player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Constructor
Player::Player(string name, string password) : name(name), password(password), fame(0)
{
    cout << "Player created" << endl;
    cityManager = new CityManager();
}

// Destructor
Player::~Player()
{
    delete cityManager;
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