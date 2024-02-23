#include "SmartWatch.h"
#include <iostream>

using namespace std;

/**
 * Constructor that calls Wearable device and initializes variables
*/
SmartWatch::SmartWatch(std::string brandName, float devicePrice, int qty, float size, bool GPS)
    : WearableDevice(brandName, devicePrice, qty), screenSize{size}, hasGPS{GPS} {}

/**
 * Prints the information from some variable in Wearable Device (parent) 
 * class and then some additional information of product
*/
void SmartWatch::getInfo() 
{
    cout << "Brand: " << brand << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Screen Size: " << screenSize << " inches" << endl;
    if (hasGPS)
    {
        cout << "GPS: " << "Yes" << endl;
    }
    else
    {
        cout << "GPS: " << "No" << endl;
    }
}