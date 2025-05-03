#include <iostream>
using namespace std;
class WeatherSensor {
public:
    virtual void readData() = 0;
    virtual void displayReport() = 0;
};
class Thermometer : public WeatherSensor {
private:
    double temperature;
public:
    void readData(){
        temperature = 33.2;
    }
    void displayReport(){
        cout << "Thermometer Reading: " << temperature << " C" << endl;
    }
};
class Barometer : public WeatherSensor {
private:
    double pressure;
public:
    void readData()  {
        pressure = 1000;
    }
    void displayReport() {
        cout <<"Barometer Reading: "<< pressure <<" hPa" << endl;
    }
};
int main(){
    WeatherSensor* sensors[2];
    sensors[0] = new Thermometer();
    sensors[1] = new Barometer();
    for (int i = 0; i< 2; i++) {
        sensors[i]->readData();
        sensors[i]->displayReport();}
    for (int i = 0; i < 2; i++) {
        delete sensors[i];
    }
    return 0;
}
