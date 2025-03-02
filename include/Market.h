#pragma once
#include <iostream>
#include <vector>
#include <string>

// Forward declaration of Goods class
class Goods;

class Market {
protected:
    std::vector<Goods*> goodsList; ///< List of goods in the market
    int buyOrders; ///< Number of buy orders
    int sellOrders; ///< Number of sell orders
    double marketPrice; ///< Current market price

public:
    // Constructor & Destructor
    Market();
    ~Market();

    // Market Functions
    void addGoods(Goods* goods);
    void removeGoods(std::string goodsName);
    void displayGoodsList() const;

    // Getters & Setters
    int getBuyOrders() const;
    int getSellOrders() const;
    void setBuyOrders(int orders);
    void setSellOrders(int orders);
    double getMarketPrice() const;
    void setMarketPrice(double price);
};
