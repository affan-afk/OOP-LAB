//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class Apartment{
	private:
	int id;
	string address;
	string *ownername;
	public:
	Apartment(string address,const string &ownerName,int id ): id(id),address(address){
		ownername = new string(ownerName);
	}
	Apartment(Apartment *apt){
		ownername = new string(*apt->ownername);
	}
	void display(){
		cout<<"APT ID: "<<id<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Owner Name: "<<*ownername<<endl;
	}
};
int main(){
	Apartment a1("21 st","ali",12321);
	Apartment a2("323 st","ahad",2121);
	Apartment a5("766 st","ahsan",2121);
	Apartment a7(a5);
	a5.display();
	a7.display();
}
