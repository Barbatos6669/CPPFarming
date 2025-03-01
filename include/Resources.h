#pragma once

#include <string>

using namespace std;

class Resources
{
    private:
        string name;
        int amount;
        int maxCapacity;

    public:
        Resources(string resourceName, int resourceAmount, int maxCap); // Declaration only
        int getAmount() const;
        int getMaxCapacity() const;
        void add(int value);
        void remove(int value);
        void display() const;
};