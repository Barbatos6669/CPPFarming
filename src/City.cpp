#include <iostream>
#include <vector>
#include <City.h>

using namespace std;

// Constructor
City::City(string cityName)
{
    cout << "City object is being created" << endl;
    name = cityName;
    population = 0;
    gold = 0;
}

// Destructor
City::~City()
{
    cout << "City object is being deleted" << endl;
}

// Display city information
void City::displayCityInfo()
{
    cout << "City Stats" << endl;
}

// Display the buildings in the city
void City::displayBuildings()
{
    cout << "List of buildings in the city" << endl;
}

