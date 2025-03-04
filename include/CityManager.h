#pragma Once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CityManager
{
    private:
        // Vector to store the cities
        string cityName;
        int population;

    public:
        CityManager();
        ~CityManager();
};