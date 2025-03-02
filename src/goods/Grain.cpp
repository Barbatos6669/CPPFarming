#include "Grain.h"

// Constructor
Grain::Grain(std::string goodsName, int goodsPrice, int goodsQuantity)
    : Goods(goodsName, goodsPrice, goodsQuantity) {}

// Destructor
Grain::~Grain() {}

// Get the name of the goods
std::string Grain::getName() const {
    return name;
}

// Get the price of the goods
int Grain::getPrice() const {
    return price;
}

// Get the quantity of the goods
int Grain::getQuantity() const {
    return quantity;
}

// Set the name of the goods
void Grain::setName(std::string goodsName) {
    name = goodsName;
}

// Set the price of the goods
void Grain::setPrice(int goodsPrice) {
    price = goodsPrice;
}

// Set the quantity of the goods
void Grain::setQuantity(int goodsQuantity) {
    quantity = goodsQuantity;
}

// Display information about the goods
void Grain::displayGoodsInfo() const {
    std::cout << "Grain: " << name << " | Price: " << price << " | Quantity: " << quantity << "\n";
}
