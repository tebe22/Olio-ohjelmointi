#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "DeviceBaseClass.h"
#include <iostream>
using namespace std;
class DeviceMouse : public DeviceBaseClass{

private:
    short primaryButton;

public:
    DeviceMouse();

    void setPrimaryButton();
    short getPrimaryButton();
};

#endif // DEVICEMOUSE_H
