#ifndef SMARTWATCH_H
#define SMARTWATCH_H

#include <string>
#include "WearableDevice.h"


class SmartWatch : public WearableDevice
{
    public:
    SmartWatch(std::string brandName, float devicePrice, int qty, float size, bool GPS);
    void getInfo();

    private:
    float screenSize;
    bool hasGPS;

};

#endif