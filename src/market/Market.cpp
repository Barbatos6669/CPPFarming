#include "Market.h"
#include "Goods.h" // Include Goods.h

using namespace std;

// Constructor
Market::Market() : buyOrders(0), sellOrders(0), marketPrice(0.0)
{
    cout << "Market object is being created" << endl;
}

// Destructor
Market::~Market()
{
    cout << "Market object is being deleted" << endl;
}

// Add goods to the market
void Market::addGoods(Goods* goods)
{
    goodsList.push_back(goods);
    cout << "Goods added to the market: " << goods->getName() << endl;
}

// Remove goods from the market
void Market::removeGoods(string goodsName)
{
    cout << "Removing goods from the market: " <<  endl;
}

// Display the list of goods in the market
void Market::displayGoodsList() const
{
    cout << "Goods in the market:" << endl;
}

// Get the number of buy orders
int Market::getBuyOrders() const
{
    return buyOrders;
}

// Get the number of sell orders
int Market::getSellOrders() const
{
    return sellOrders;
}

// Set the number of buy orders
void Market::setBuyOrders(int orders)
{
    buyOrders = orders;
}

// Set the number of sell orders
void Market::setSellOrders(int orders)
{
    sellOrders = orders;
}

// Get the current market price
double Market::getMarketPrice() const
{
    return marketPrice;
}

// Set the current market price
void Market::setMarketPrice(double price)
{
    marketPrice = price;
}

