#include <Player.h>
#include <iostream>

/// @brief Initializes a new Player object with the specified amount of gold, setting the gold attribute to initialGold and the food attribute to 0.
/// @param initialGold The amount of gold to start the player with.
Player::Player(double initialGold)
{
    gold = initialGold;
    food = 0;
}

/// @brief Adds the specified amount of gold to the player's current gold total.
/// @param amount The amount of gold to add.
void Player::addGold(int amount)
{
    gold += amount;
}

/// @brief Adds the specified amount of food to the player's current food total.
/// @param amount The amount of food to add.
void Player::addFood(int amount)
{
    food += amount;
}

/// @brief Subtracts the specified amount of gold from the player's current gold total.
/// @param amount The amount of gold to subtract.
void Player::spendGold(int amount)
{
    gold -= amount;
}

/// @brief Subtracts the specified amount of food from the player's current food total.
/// @param amount The amount of food to subtract.
void Player::spendFood(int amount)
{
    food -= amount;
}

/// @brief Returns the player's current gold total.
/// @return The player's current gold total.
int Player::getGold()
{
    return gold;
}

/// @brief Returns the player's current food total.
/// @return The player's current food total.
int Player::getFood()
{
    return food;
}

