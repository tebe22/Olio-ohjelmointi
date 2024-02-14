#include "DeviceTouchPad.h"

DeviceTouchPad::DeviceTouchPad() {
    touchPadSensivity = 0;
}

void DeviceTouchPad::setTouchPad() {
   cout << "Set touch pad sensivity: ";
   cin >> touchPadSensivity;
}

short DeviceTouchPad::getTouchpadSensivity() {
    return touchPadSensivity;
}
