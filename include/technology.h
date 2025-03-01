#pragma once
#include <iostream>
#include <vector>
#include <algorithm> // For std::find

class Technology {
private:
    std::string name; // Technology name
    int weeklyInnovation; // Innovation points generated per week
    int researchProgress; // Progress towards completing the technology
    int researchCost; // Innovation points required to unlock

    std::string category; // Category of the technology

    // List of available technology categories
    static const std::vector<std::string> techCategories;

public:
    // Constructor
    Technology(std::string techName, int techInnovation, int cost, std::string techCategory);

    // Destructor
    ~Technology();

    // Getters
    std::string getName() const;
    int getWeeklyInnovation() const;
    int getResearchProgress() const;
    int getResearchCost() const;
    std::string getCategory() const;

    // Display functions
    void displayTechInfo() const;
    void displayTechCategories() const;

    // Methods to modify innovation points
    void increaseWeeklyInnovation(int value);
    void decreaseWeeklyInnovation(int value);
    
    // Research methods
    void progressResearch();
    bool isResearched() const;

    // Static method to display all technology categories
    static void displayAllTechCategories();
};
