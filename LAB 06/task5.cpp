#include <iostream>
using namespace std;

class Device {
protected:
    int deviceID;
    bool status;

public:
    Device(int id, bool on) : deviceID(id), status(on) {}

    void displayDetails() {
        cout << "Device ID: " << deviceID << "\nStatus: " << (status ? "On" : "Off") << endl;
    }
};

class SmartFeatures : public Device {
protected:
    float screenSize;

public:
    SmartFeatures(int id, bool on, float screen)
        : Device(id, on), screenSize(screen) {}

    void displayDetails() {
        Device::displayDetails();
        cout << "Screen Size: " << screenSize << " inches" << endl;
    }
};

class SmartWatch : public SmartFeatures {
protected:
    bool heartRateMonitor;

public:
    SmartWatch(int id, bool on, float screen, bool hrm)
        : SmartFeatures(id, on, screen), heartRateMonitor(hrm) {}

    void displayDetails() {
        SmartFeatures::displayDetails();
        cout << "Heart Rate Monitor: " << (heartRateMonitor ? "Available" : "Not Available") << endl;
    }
};

class StepCounter : public SmartWatch {
    int stepCounter;

public:
    StepCounter(int id, bool on, float screen, bool hrm, int steps)
        : SmartWatch(id, on, screen, hrm), stepCounter(steps) {}

    void displayDetails() {
        SmartWatch::displayDetails();
        cout << "Step Count: " << stepCounter << " steps" << endl;
    }
};

int main() {
    StepCounter device(1, true, 1.8, true, 5432);

    cout << "Smart Wearable Specifications:\n";
    device.displayDetails();

    return 0;
}
