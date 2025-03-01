#pragma once

#include <iostream>
#include <string>

class Player {
private:
    std::string name;  // Player's name    
    int reputation;    // Player's reputation
    int power;         // Player's power

public:
    // Constructor
    Player(std::string playerName);

    // Destructor
    ~Player();

    // Getters
    std::string getName() const;
    int getReputation() const;
    int getPower() const;

    // Display functions
    void displayPlayerInfo() const;
    void displayLeaderStats() const;

    // Methods to modify reputation & power
    void increaseReputation(int value);
    void increasePower(int value);
    void decreaseReputation(int value);
    void decreasePower(int value);
};
