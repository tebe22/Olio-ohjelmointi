#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "DeviceBaseClass.h"
using namespace std;
#include <iostream>

class DeviceDisplay : public DeviceBaseClass{
private:
    short displayResolution;

public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
};

#endif // DEVICEDISPLAY_H
