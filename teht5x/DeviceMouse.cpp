#include "DeviceMouse.h"

DeviceMouse :: DeviceMouse(){
    primaryButton = 0;
}

void DeviceMouse :: setPrimaryButton(){
    cout << "Set Mouse Primary Button: ";

    cin >> primaryButton;
}

short DeviceMouse :: getPrimaryButton(){
    return primaryButton;
}

