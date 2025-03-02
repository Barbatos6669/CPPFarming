#include "Goods.h"
#include <iostream>
using namespace std;

// Constructor
Goods::Goods(std::string goodsName, int goodsPrice, int goodsQuantity)
    : name(goodsName), price(goodsPrice), quantity(goodsQuantity) {}

// Destructor
Goods::~Goods() {}

// Get the name of the goods
std::string Goods::getName() const {
    return name;
}

// Get the price of the goods
int Goods::getPrice() const {
    return price;
}

// Get the quantity of the goods
int Goods::getQuantity() const {
    return quantity;
}

// Set the name of the goods
void Goods::setName(std::string goodsName) {
    name = goodsName;
}

// Set the price of the goods
void Goods::setPrice(int goodsPrice) {
    price = goodsPrice;
}

// Set the quantity of the goods
void Goods::setQuantity(int goodsQuantity) {
    quantity = goodsQuantity;
}

// Display information about the goods
void Goods::displayGoodsInfo() const {
    // Placeholder implementation
}

