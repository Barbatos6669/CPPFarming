#include <iostream>
#include "Player.h"

using namespace std;

// Constructor
Player::Player(string playerName) : name(playerName), reputation(0), power(10) {}

// Destructor
Player::~Player()
{
    cout << "Player object is being deleted" << endl;
}

// Getters
string Player::getName() const
{
    return name;
}

int Player::getReputation() const
{
    return reputation;
}

int Player::getPower() const
{
    return power;
}

// Display functions
void Player::displayPlayerInfo() const
{
    cout << "Player name: " << name << endl;
    cout << "Reputation: " << reputation << endl;
    cout << "Power: " << power << endl;
}

void Player::displayLeaderStats() const
{
    cout << "Leader Stats" << endl;
    cout << "Reputation: " << reputation << endl;
    cout << "Power: " << power << endl;
}

// Methods to modify reputation & power
void Player::increaseReputation(int value)
{
    reputation += value;
}

void Player::increasePower(int value)
{
    power += value;
}

void Player::decreaseReputation(int value)
{
    reputation -= value;
}

void Player::decreasePower(int value)
{
    power -= value;
}


