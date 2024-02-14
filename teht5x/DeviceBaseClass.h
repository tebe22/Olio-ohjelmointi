#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H
#include <iostream>

using namespace std;

class DeviceBaseClass{
protected:
    short deviceID;

public:
    DeviceBaseClass();

    void setDeviceID();
    short getDeviceID();

};

#endif // DEVICEBASECLASS_H
