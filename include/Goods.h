#pragma once

#include <string>

using namespace std;

/**
 * @class Goods
 * @brief A class representing goods with a name, price, and quantity.
 * 
 * The Goods class provides attributes to store the name, price, and quantity
 * of goods. It serves as a base class for more specific types of goods.
 */
class Goods
{
    protected:
        string name; ///< Name of the goods
        int price; ///< Price of the goods
        int quantity; ///< Quantity of the goods

    public:
        /**
         * @brief Constructor for the Goods class.
         * @param goodsName The name of the goods.
         * @param goodsPrice The price of the goods.
         * @param goodsQuantity The quantity of the goods.
         */
        Goods(string goodsName, int goodsPrice, int goodsQuantity);

        /**
         * @brief Destructor for the Goods class.
         */
        virtual ~Goods();

        /**
         * @brief Get the name of the goods.
         * @return The name of the goods.
         */
        string getName() const;

        /**
         * @brief Get the price of the goods.
         * @return The price of the goods.
         */
        int getPrice() const;

        /**
         * @brief Get the quantity of the goods.
         * @return The quantity of the goods.
         */
        int getQuantity() const;

        /**
         * @brief Set the name of the goods.
         * @param goodsName The name of the goods.
         */
        void setName(string goodsName);

        /**
         * @brief Set the price of the goods.
         * @param goodsPrice The price of the goods.
         */
        void setPrice(int goodsPrice);

        /**
         * @brief Set the quantity of the goods.
         * @param goodsQuantity The quantity of the goods.
         */
        void setQuantity(int goodsQuantity);

        /**
         * @brief Display information about the goods.
         */
        virtual void displayGoodsInfo() const;
};