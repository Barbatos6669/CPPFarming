#pragma once

#include <iostream>
#include <string>
#include "City.h"

using namespace std;

class Player
{
    private:
        string rulerName;
        int reputation;   
        
        City city;

    public:

        Player();
        ~Player(); 
        
        void setRulerName(string name);

        // Getters
        string getRulerName() { return rulerName; }
};