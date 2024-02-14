#include "DeviceDisplay.h"

DeviceDisplay :: DeviceDisplay() {
    displayResolution  =0;
}

void DeviceDisplay::setDisplayResolution() {
    std :: cout << "Set Display resolution: ";
    std::cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution() {
    return displayResolution;
}
