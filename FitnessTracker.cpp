#include "FitnessTracker.h"
#include <iostream>

using namespace std;

/**
 * Constructor that calls Wearable device and initializes variables
*/
FitnessTracker::FitnessTracker(std::string brandName, float devicePrice, int qty, bool monitor, int battery)
    : WearableDevice(brandName, devicePrice, qty), heartRateMonitor{monitor}, batteryLife{battery} {}

/**
 * Prints the information from some variable in Wearable Device (parent) class 
 * and then some additional information of product
*/
void FitnessTracker::getInfo() 
{
    cout << "Brand: " << brand << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    if (heartRateMonitor)
    {
        cout << "Heart Rate Monitor: " << "Yes" << endl;
    }
    else
    {
        cout << "Heart Rate Monitor: " << "No" << endl;
    }
    cout << "Battery Life: " << batteryLife << " hours" << endl;
}