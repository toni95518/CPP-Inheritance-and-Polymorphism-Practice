#include "ARGlasses.h"
#include <iostream>

using namespace std;

/**
 * Constructor that calls Wearable device and initializes variables
*/
ARGlasses::ARGlasses(std::string brandName, float devicePrice, int qty, int fieldView, bool surface)
    : WearableDevice(brandName, devicePrice, qty), fieldOfView{fieldView}, interactiveSurface{surface} {}

/**
 * Prints the information from some variable in Wearable Device (parent) class 
 * and then some additional information of product
*/
void ARGlasses::getInfo() 
{
    cout << "Brand: " << brand << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Field of View: " << fieldOfView << " degrees" << endl;
    if (interactiveSurface)
    {
        cout << "Interactive Surface: " << "Yes" << endl;
    }
    else
    {
        cout << "Interactive Surface: " << "No" << endl;
    }
}