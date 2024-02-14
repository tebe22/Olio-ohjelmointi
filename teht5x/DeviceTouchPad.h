#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "DeviceBaseClass.h"
using namespace std;

class DeviceTouchPad : public DeviceBaseClass{
private:
    short touchPadSensivity;

public:
    DeviceTouchPad();
    void setTouchPad();
    short getTouchpadSensivity();
};

#endif // DEVICETOUCHPAD_H
