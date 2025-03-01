#include "Resources.h"
#include <iostream>
using namespace std;

Resources::Resources(string resourceName, int resourceAmount, int maxCap)
    : name(resourceName), amount(resourceAmount), maxCapacity(maxCap) {}

int Resources::getAmount() const
{
    return amount;
}

int Resources::getMaxCapacity() const
{
    return maxCapacity;
}

void Resources::add(int value)
{
    amount += value;
    if (amount > maxCapacity)
    {
        amount = maxCapacity;
    }
}

void Resources::remove(int value)
{
    amount -= value;
    if (amount < 0)
    {
        amount = 0;
    }
}

void Resources::display() const
{
    cout << name << ": " << amount << "/" << maxCapacity << endl;
}