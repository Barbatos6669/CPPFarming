#include "Budget.h"

// Constructor
Budget::Budget(std::string currencyType)
    : currency(currencyType), nationalRevenue(0), nationalExpenses(0), surplus(0), deficit(0) {
    // Initialize default tax rates
    taxes["IncomeTax"] = 0.1f;
    taxes["PollTax"] = 0.05f;
    taxes["DividendsTax"] = 0.02f;
    taxes["Tariffs"] = 0.03f;
    taxes["Minting"] = 0.00f;

    // Initialize wages
    wages["Government"] = 5000;
    wages["Military"] = 8000;
}

// Add Revenue
void Budget::addRevenue(float amount) {
    nationalRevenue += amount;
}

// Set Tax
void Budget::setTax(std::string taxType, float rate) {
    taxes[taxType] = rate;
}

// Set Taxation Level
void Budget::setTaxationLevel(int level) {
    taxationLevel = level;
}

// Add Expense
void Budget::addExpense(float amount) {
    nationalExpenses += amount;
}

// Set Wages
void Budget::setWages(std::string wageType, float amount) {
    wages[wageType] = amount;
}

// Calculate Budget
void Budget::calculateBudget() {
    float totalTaxRevenue = 0;
    for (const auto& tax : taxes) {
        totalTaxRevenue += nationalRevenue * tax.second;
    }

    float totalWageExpense = 0;
    for (const auto& wage : wages) {
        totalWageExpense += wage.second;
    }

    nationalRevenue += totalTaxRevenue;
    nationalExpenses += totalWageExpense;

    if (nationalRevenue > nationalExpenses) {
        surplus = nationalRevenue - nationalExpenses;
        deficit = 0;
    } else {
        deficit = nationalExpenses - nationalRevenue;
        surplus = 0;
    }
}

// Get Surplus
float Budget::getSurplus() const {
    return surplus;
}

// Get Deficit
float Budget::getDeficit() const {
    return deficit;
}

// Display Budget Report
void Budget::displayBudgetReport() const {
    std::cout << "\nNational Budget Report (" << currency << "):\n";
    std::cout << "   Revenue: $" << nationalRevenue << "\n";
    std::cout << "   Expenses: $" << nationalExpenses << "\n";
    
    std::cout << "   Tax Rates:\n";
    for (const auto& tax : taxes) {
        std::cout << "      - " << tax.first << ": " << (tax.second * 100) << "%\n";
    }

    std::cout << "   Wages:\n";
    for (const auto& wage : wages) {
        std::cout << "      - " << wage.first << ": $" << wage.second << "\n";
    }

    if (surplus > 0) {
        std::cout << "   Budget Surplus: $" << surplus << "\n";
    } else if (deficit > 0) {
        std::cout << "   Budget Deficit: $" << deficit << "\n";
    } else {
        std::cout << "   Budget Balanced.\n";
    }
}
