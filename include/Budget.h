#pragma once
#include <iostream>
#include <unordered_map>

class Budget {
private:
    // Currency & Revenue
    std::string currency; ///< Currency name
    float nationalRevenue; ///< National revenue
    int taxationLevel; ///< Taxation level
    std::unordered_map<std::string, float> taxes; ///< Stores different tax types (income, poll, tariffs, etc.)

    // Expenses
    float nationalExpenses; ///< Total expenses
    std::unordered_map<std::string, float> wages; ///< Stores wage categories (Govt, Military)

    // Budget Tracking
    float surplus;
    float deficit;

public:
    // Constructor
    Budget(std::string currencyType = "Gold");

    // Revenue Methods
    void addRevenue(float amount);
    void setTax(std::string taxType, float rate);
    void setTaxationLevel(int level);
    
    // Expense Methods
    void addExpense(float amount);
    void setWages(std::string wageType, float amount);

    // Budget Calculation
    void calculateBudget();
    float getSurplus() const;
    float getDeficit() const;

    // Display Budget
    void displayBudgetReport() const;
};
