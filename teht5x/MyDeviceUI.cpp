#include "MyDeviceUI.h"


MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI :: uiShowMenu(){
    int choice = 0;
    while (true){
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show All Devices' Information " << endl;
    cout << "5: Finish" << endl;
    cout << endl;

    cout << "Choose: " << endl;
    cin >> choice;
    cout << endl;
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice: Please enter a number between 1 and 5." << endl;
        cout << endl;
        continue;
    }

    else if (choice == 1){
        MyDeviceUI::uiSetMouseInformation();
        choice = 0;
    }
    else if (choice == 2){
        MyDeviceUI::uiSetTouchPadInformation();
        choice = 0;
    }
    else if (choice == 3){
        MyDeviceUI::uiSetDisplayInformation();
        choice = 0;
    }
    else if (choice ==4){
        MyDeviceUI::uiShowDeviceInformation();
        choice = 0;
    }
    else if (choice == 5){
        return;
    }
    }
}

void MyDeviceUI :: uiSetMouseInformation(){
    cout << "choose: 1"<< endl;
    cout << "\nSET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
    cout <<endl;

}
void MyDeviceUI :: uiSetTouchPadInformation(){
    cout << "choose: 2"<< endl;
    cout << "\nSET TOUCH PAF INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set touch pad Device ID: " ;
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPad();
    cout <<endl;

}
void MyDeviceUI :: uiSetDisplayInformation(){
    cout << "choose: 3"<< endl;
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;
    cout << "Set Display Device ID: " ;
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}
void MyDeviceUI :: uiShowDeviceInformation(){
    cout << "ALL DEVICE INFORMATION" << endl;
    cout << "======================" << endl;
    int mouseDeviceID = objectDeviceMouse->getDeviceID();
    int mousePrimaryButton = objectDeviceMouse->getPrimaryButton();
    int touchpadDeviceID = objectDeviceTouchPad->getDeviceID();
    int touchpadSensitivity = objectDeviceTouchPad->getTouchpadSensivity();
    int displayDeviceID = objectDeviceDisplay->getDeviceID();
    int  displayResolution = objectDeviceDisplay->getDisplayResolution();

    cout << "Mouse Device ID: " << mouseDeviceID << endl;
    cout << "Mouse Primary Button: " << mousePrimaryButton << endl;
    cout << "Touchpad Device ID: " << touchpadDeviceID << endl;
    cout << "Touchpad Device Sensitivity: " << touchpadSensitivity << endl;
    cout << "Display Device ID: " << displayDeviceID << endl;
    cout << "Display Device Resolution: " << displayResolution << endl;

    cout << "" << endl;

}
