#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Goods.h"

/**
 * @class Grain
 * @brief A class representing grain goods with a name, price, and quantity.
 *  
 */
class Grain : public Goods
{
    protected:
        // Attributes
        std::string name = "Grain"; ///< Name of the goods
        int price = 10; ///< Price of the goods
        int quantity = 1; ///< Quantity of the goods

    public:
        // Constructor
        Grain(std::string goodsName, int goodsPrice, int goodsQuantity);

        // Destructor
        ~Grain();

        // Getters
        std::string getName() const;
        int getPrice() const;
        int getQuantity() const;

        // Setters
        void setName(std::string goodsName);
        void setPrice(int goodsPrice);
        void setQuantity(int goodsQuantity);

        // Display
        void displayGoodsInfo() const;

};