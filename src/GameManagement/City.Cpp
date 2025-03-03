#include "City.h"

City::City()
{
    cout << "City created" << endl;
}

City::~City()
{
    cout << "City destroyed" << endl;
}

void City::setCityName(string name)
{
    cout << "City name set to " << name << endl;
    cityName = name;
}

void City::setPopulation(int pop)
{
    cout << "Population set to " << pop << endl;
    population = pop;
}

