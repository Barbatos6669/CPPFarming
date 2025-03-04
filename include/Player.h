#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CityManager.h"


using namespace std;

class Player
{
    private:
        string name;
        string password;
        int fame;

        CityManager* cityManager;
        
    public:
        Player(string name, string password);
        ~Player(); 

        // getters and setters
        string getName() const;
        void setName(string value);

        string getPassword() const;
        void setPassword(string value);



};