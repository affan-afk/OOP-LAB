#include <iostream>
using namespace std;
class Device{
    public:
    int deviceID;
    bool status;
    string location;
    
    void virtual turnOn(){
        status = true;
    }
    void virtual turnOff(){
    status = false;
    }
    bool virtual getStatus(){
        return status;
    }
    void virtual displayInfo(){
        cout<<"Device ID: "<<deviceID<<endl;
        cout<<"Status: "<< (status ? "true" : "false") << endl;
        cout<<"Location: "<<location<<endl;
    }
};
class Light : public Device{
    public:
    int brightnessLevel;
    string colorMode;
    
    void displayInfo(){
        cout<<"Brightness Level "<<brightnessLevel<<endl;
        cout<<"Color Mode "<<colorMode<<endl;
    }
};
class Thermostat : public Device{
    public:
    double temp;
    string mode;
    double targetTemp;
    
    bool getStatus(){
        cout<<"Current Temperature: "<<temp<<endl;
    }
};
class SecurityCamera : public Device{
    public:
    double resolution;
    bool recordingStatus;
    bool nightVisionEnabled;
    
    void turnOn(){
        recordingStatus = true;
    }
};
class SmartPlug : public Device{
    public:
    int powerConsumption;
    int timerSetting;
    
    void turnOff(){
        powerConsumption = 0;
    }
};
int main(){
    Device *d1;
    Light l1;
    l1.brightnessLevel = 21;
    Thermostat t1;
    SecurityCamera s1;
    SmartPlug sp1;
    d1 = &l1;
    d1->displayInfo();
    d1 = &t1;
    d1->getStatus();
    d1 = &s1;
    d1->turnOn();
    d1 = &sp1;
    d1->turnOff(); 
}
