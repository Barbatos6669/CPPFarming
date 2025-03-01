#pragma once

#include <iostream>
#include <string>

/**
 * @class Money
 * @brief A class representing money with a currency and amount.
 * 
 * The Money class provides attributes to store the currency and amount of money.
 * It also provides methods to display money information and modify the amount of money.
 */
class Money 
{
    private:
        std::string currency;  ///< Currency name
        int amount;            ///< Amount of money

    public:
        // Constructor

        /**
         * @brief Constructor for the Money class.
         * @param currencyName The name of the currency.
         * @param initialAmount The initial amount of money.
         */
        Money(std::string currencyName, int initialAmount);

        // Destructor

        /**
         * @brief Destructor for the Money class.
         */
        ~Money();

        // Getters

        /**
         * @brief Get the currency name.
         * @return The currency name.
         */
        std::string getCurrency() const;

        /**
         * @brief Get the amount of money.
         * @return The amount of money.
         */
        int getAmount() const;

        // Display functions

        /**
         * @brief Display information about the money.
         */
        void displayMoneyInfo() const;

        // Methods to modify money

        /**
         * @brief Add money to the current amount.
         * @param value The amount of money to add.
         */
        void addMoney(int value);

        /**
         * @brief Subtract money from the current amount.
         * @param value The amount of money to subtract.
         */
        void subtractMoney(int value);

        /**
         * @brief Multiply the current amount of money.
         * @param value The multiplier value.
         */
        void multiplyMoney(int value);

        /**
         * @brief Divide the current amount of money.
         * @param value The divisor value.
         */
        void divideMoney(int value);
};
