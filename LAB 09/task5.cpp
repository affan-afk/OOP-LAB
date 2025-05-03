#include <iostream>
using namespace std;

class Shipment {
protected:
    string trackingNumber;
    double weight;
public:
    Shipment(string trackingNumber, double weight) : trackingNumber(trackingNumber), weight(weight) {}
    virtual void estimateDeliveryTime() = 0;
    virtual void showDetails() = 0;
};

class AirFreight : public Shipment {
public:
    AirFreight(string trackingNumber, double weight) : Shipment(trackingNumber, weight){}
    void estimateDeliveryTime(){
        cout<< "Air Freight Delivery Time: " << weight * 0.5 << " hours" << endl;
    }
    void showDetails() override {
        cout<<"Air Freight - Tracking Number: "<<trackingNumber<<", Weight: "<<weight<<" kg"<< endl;
    }
};

class GroundShipment : public Shipment{
public:
    GroundShipment(string trackingNumber, double weight) : Shipment(trackingNumber, weight){}
    void estimateDeliveryTime(){
        cout<< "Ground Shipment Delivery Time: " << weight * 2.0 << " hours" << endl;
    }
    void showDetails(){
        cout <<"Ground Shipment - Tracking Number: " << trackingNumber << ", Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Shipment* shipments[2];
    shipments[0] =new AirFreight("ek506", 32.5);
    shipments[1] = new GroundShipment("lt5543", 55.8);

    for (int i=0;i < 2; ++i) {
        shipments[i]->showDetails();
        shipments[i]->estimateDeliveryTime();
    }

    for (int i =0; i< 2;++i) {
        delete shipments[i];
    }
    return 0;
}
