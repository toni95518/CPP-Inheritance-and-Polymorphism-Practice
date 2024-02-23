#ifndef WEARABLE_DEVICE_H
#define WEARABLE_DEVICE_H

#include <iostream>
#include <string>

class WearableDevice 
{
public:
    WearableDevice(std::string brandName, float devicePrice, int qty);

    virtual void getInfo();

    int getQuantity() { return quantity; }

    void sell(int units);

    void restock(int units);

protected:
    std::string brand;
    float price;
    int quantity;
};

#endif