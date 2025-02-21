#include <iostream>
using namespace std;
class Car
{
private:
	string brand;
	string model;
	double rentalPrice;
	bool avlStatus;
	int days;
public:
	Car(string pBrand,string pModel,double price,bool status,int pdays){
		brand = pBrand;
		model = pModel;
		rentalPrice = price;
		avlStatus = status;
		days = pdays;
	}
	bool checkAvailability(){
		return avlStatus;
	}
	// void rentACar(){
	// 	if (this->avlStatus){
	// 		cout<<"Car of brand "<<this->brand<<" and model "<<this->model<<" is rented at "<<this->rentalPrice<<endl;
	// 		this->avlStatus = false;
	// 		return;
	// 	}
	// 	else{
	// 		cout<<"Car of brand "<<this->brand<<" and model "<<this->model<<" is already rented!"<<endl;
	// 		return;
	// 	}
	// }
	void discount(int days){
		if (days < 10 && days > 5){
			cout<<"u get a 5 % discount"<<endl;
		}
		else if (days > 10)
		{
			cout<<"u get a 10 % discount"<<endl;
		}
	}
	Car(Car &obj){
		brand = obj.brand;
		model = obj.model;
		rentalPrice = obj.rentalPrice;
		avlStatus = obj.avlStatus; 
	}
	void displayDetails(){
		cout<<brand<<endl<<model<<endl<<rentalPrice<<endl<<avlStatus<<endl;
	}
	
	~Car(){
		cout <<"destructor called!"<<endl;
	}
};

int main(){
	Car car1("toyota","camry",23.432,true,78);
	Car car2(car1);
	car1.displayDetails();
	car2.displayDetails();
}
