#pragma Once
#include <iostream>

using namespace std;

class City
{
    private:
        string cityName;
        int population;

    public:
        City();
        ~City();

        void setCityName(string name);
        void setPopulation(int pop);

        // Getters
        string getCityName() { return cityName; }
        int getPopulation() { return population; }

};