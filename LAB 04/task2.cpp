#include <iostream>
using namespace std;
class Car
{
private:
	string brand;
	string model;
	double rentalPrice;
	bool avlStatus;
public:
	Car(){
		brand = "Unknown";
		model = "Generic";
		rentalPrice = 0.0;
		avlStatus = true;
	}
	Car(string pBrand,string pModel,double price,bool status){
		brand = pBrand;
		model = pModel;
		rentalPrice = price;
		avlStatus = status;
	}
	bool checkAvailability(){
		return avlStatus;
	}
	void rentACar(){
		if (this->avlStatus){
			cout<<"Car of brand "<<this->brand<<" and model "<<this->model<<" is rented at "<<this->rentalPrice<<endl;
			this->avlStatus = false;
			return;
		}
		else{
			cout<<"Car of brand "<<this->brand<<" and model "<<this->model<<" is already rented!"<<endl;
			return;
		}
	}
	void discount(int days){
		if (days < 10 && days > 5){
			cout<<"u get a 5 % discount"<<endl;
		}
		else if (days > 10)
		{
			cout<<"u get a 10 % discount"<<endl;
		}
	}
};

int main(){
	Car car1("toyota","camry",23.432,true);

}