#pragma once

#include <iostream>
#include <string>

/**
 * @class Player
 * @brief A class representing a player with a name, reputation, and power.
 * 
 * The Player class provides attributes to store the player's name, reputation, and power.
 * It also provides methods to display player information and modify the player's reputation and power.
 */
class Player {
    private:
        std::string name;  ///< Player's name    
        int reputation;    ///< Player's reputation
        int power;         ///< Player's power

    public:
        // Constructor

        /**
         * @brief Constructor for the Player class.
         * @param playerName The name of the player.
         */
        Player(std::string playerName);

        // Destructor

        /**
         * @brief Destructor for the Player class.
         */
        ~Player();

        // Getters

        /**
         * @brief Get the player's name.
         * @return The player's name.
         */
        std::string getName() const;

        /**
         * @brief Get the player's reputation.
         * @return The player's reputation.
         */
        int getReputation() const;

        /**
         * @brief Get the player's power.
         * @return The player's power.
         */
        int getPower() const;

        // Display functions

        /**
         * @brief Display information about the player.
         */
        void displayPlayerInfo() const;

        /**
         * @brief Display the player's leader stats.
         */
        void displayLeaderStats() const;

        // Methods to modify reputation & power

        /**
         * @brief Increase the player's reputation.
         * @param value The amount to increase the reputation by.
         */
        void increaseReputation(int value);

        /**
         * @brief Increase the player's power.
         * @param value The amount to increase the power by.
         */
        void increasePower(int value);

        /**
         * @brief Decrease the player's reputation.
         * @param value The amount to decrease the reputation by.
         */
        void decreaseReputation(int value);

        /**
         * @brief Decrease the player's power.
         * @param value The amount to decrease the power by.
         */
        void decreasePower(int value);
};
