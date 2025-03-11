//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class Vehicle{
	protected:
	string brand;
	int speed;
	public:
	Vehicle(string brand,int speed):brand(brand),speed(speed){}
	void displayDetails(){
		cout<<"Vehicle brand: "<<brand<<endl;
		cout<<"Vehicle speed: "<<speed<<endl;
	}
};
class Car : protected Vehicle{
	protected:
	int seats;
	public:
	Car(string brand,int speed,int seats):Vehicle(brand,speed),seats(seats){}
	void displayDetails(){
		Vehicle::displayDetails();
		cout<<"Vehicle seats: "<<seats<<endl;
	}
};
class ElectricCar:protected Car{
	protected:
	int batteryLife;
	public:
	ElectricCar(string brand,int speed,int seats,int batteryLife):Car(brand,speed,seats),batteryLife(batteryLife){}
	void displayDetails(){
		Car::displayDetails();
		cout<<"Electric Vehicle battery Life: "<<batteryLife<<endl;
	}
};
int main(){
	ElectricCar ev1("tesla",222,6,20);
	ev1.displayDetails();
}