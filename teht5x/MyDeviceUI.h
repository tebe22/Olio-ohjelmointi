#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include <iostream>
#include "DeviceDisplay.h"
#include "DeviceMouse.h"
#include "DeviceTouchPad.h"
using namespace std;


class MyDeviceUI{
private:
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay;

public:
    MyDeviceUI();
    ~MyDeviceUI();

    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();



};

#endif // MYDEVICEUI_H
