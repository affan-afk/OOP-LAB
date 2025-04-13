//muhammad affan rasheed (24K-0579)
#include <iostream>
using namespace std;

class InventoryManager;

class Car {
private:
    string model;
    double price;

public:
    Car(string model = "", double price = 0.0) : model(model), price(price) {}

    friend class InventoryManager;
    friend void comparePrice(Car& car1,Car& car2);
};

class InventoryManager {
public:
    void updatePrice(Car& car, double newPrice) {
        car.price = newPrice;
    }

    void displayDetails(Car& car) {
        cout << "Model: " << car.model << ", Price: " << car.price << endl;
    }
};

void comparePrice(Car& car1,  Car& car2) {
    if (car1.price > car2.price)
        cout << car1.model << " is more expensive." << endl;
    else if (car1.price < car2.price)
        cout << car2.model << " is more expensive." << endl;
    else
        cout << "both cars have the same price." << endl;
}

int main() {
    Car car1("suzuki mehran", 1000);
    Car car2("nissan patrol", 6700);

    InventoryManager manager;

    cout<<"initial details:"<<endl;
    manager.displayDetails(car1);
    manager.displayDetails(car2);
    manager.updatePrice(car2, 2605);
    cout<<endl<<"After price update:"<<endl;
    manager.displayDetails(car1);
    manager.displayDetails(car2);
    cout<<endl<<"Price comparison:"<<endl;
    comparePrice(car1, car2);
}
