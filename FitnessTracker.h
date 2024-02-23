#ifndef FitnessTracker_H
#define FitnessTracker_H

#include <string>
#include "WearableDevice.h"


class FitnessTracker : public WearableDevice
{
    public:
    FitnessTracker(std::string brandName, float devicePrice, int qty, bool monitor, int battery);
    void getInfo();

    private:
    bool heartRateMonitor;
    int batteryLife;
};

#endif