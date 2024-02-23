#include "WearableDevice.h"
using namespace std;

WearableDevice::WearableDevice(string brandName, float devicePrice, int qty)
    : brand(brandName), price(devicePrice), quantity(qty) 
{

}

void WearableDevice::getInfo() 
{
    cout << "Brand: " << brand << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
}

void WearableDevice::sell(int units) 
{
    if (quantity >= units) 
    {
        quantity -= units;
    } 
    else 
    {
        cout << "Not enough stock!" << endl;
    }
}

void WearableDevice::restock(int units) 
{
    quantity += units;
}
