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
	void updateDetails(string pBrand,string pModel,double price,bool status){
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
};

int main(){
	Car car1;
	car1.updateDetails("toyota camry","camry",2900000.0,true);
	car1.rentACar();
	car1.rentACar();
}