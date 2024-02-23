#ifndef ARGLASSES_H
#define ARGLASSES_H

#include <string>
#include "WearableDevice.h"

class ARGlasses : public WearableDevice
{
    public:
    ARGlasses(std::string brandName, float devicePrice, int qty, int fieldView, bool surface);
    void getInfo();

    private:
    int fieldOfView;
    bool interactiveSurface;
};

#endif