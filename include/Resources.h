#ifndef RESOURCES_H
#define RESOURCES_H

#include <iostream>

using namespace std;

class Resources
{
    protected:
        string name;
        int amount;
        int maxCapacity;
        
    public:
        Resources(string resourceName, int resourceAmount, int maxCap)
            : name(resourceName), amount(resourceAmount), maxCapacity(maxCap) {}

            virtual void add(int value) = 0;
            virtual void remove(int value) = 0;
            virtual void display() = 0;

            int getAmount() const { return amount; }
            int getMaxCapacity() const { return maxCapacity; }
};

#endif // RESOURCES_H
