#include "technology.h"

using namespace std;

// Define available technologies categories
const vector<string> Technology::techCategories = {"Production", "Military", "Society"};

// Constructor
Technology::Technology(string techName, int techInnovation, int cost, string techCategory)
    : name(techName), weeklyInnovation(techInnovation), researchProgress(0), researchCost(cost), category(techCategory) {}

// Destructor
Technology::~Technology() {}

// Getters
string Technology::getName() const
{
    return name;
}

int Technology::getWeeklyInnovation() const
{
    return weeklyInnovation;
}

int Technology::getResearchProgress() const
{
    return researchProgress;
}

int Technology::getResearchCost() const
{
    return researchCost;
}

string Technology::getCategory() const
{
    return category;
}

// Display functions
void Technology::displayTechInfo() const
{
    cout << "Technology: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Weekly Innovation: " << weeklyInnovation << endl;
    cout << "Research Progress: " << researchProgress << "/" << researchCost << endl;
}

void Technology::displayTechCategories() const
{
    cout << "Available Technology Categories:" << endl;
    for (const auto& category : techCategories)
    {
        cout << category << endl;
    }
}

// Methods to modify innovation points
void Technology::increaseWeeklyInnovation(int value)
{
    weeklyInnovation += value;
}

void Technology::decreaseWeeklyInnovation(int value)
{
    weeklyInnovation -= value;
}

// Research methods
void Technology::progressResearch()
{
    researchProgress += weeklyInnovation;
}

bool Technology::isResearched() const
{
    return researchProgress >= researchCost;
}

// Static method to display all technology categories
void Technology::displayAllTechCategories()
{
    cout << "Available Technology Categories:" << endl;
    for (const auto& category : techCategories)
    {
        cout << category << endl;
    }
}


