//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class Employee{
	protected:
	string name;
	float salary;
	public:
	Employee(string name , float salary):name(name),salary(salary){}
	void displayDetails(){
		cout<<"Employee Name: "<<name<<endl;
		cout<<"Employee salary: "<<salary<<endl;
	}
};
class Manager : protected Employee{
	protected:
	float bonus;
	public:
	Manager(string name , float salary,float bonus) : Employee(name,salary),bonus(bonus){}
	void displayDetails(){
		Employee::displayDetails();
		cout<<"Employee bonus: "<<bonus<<endl;
	}
};
int main(){
	Manager m1("Affan Rasheed",28292.443,323.55);
	m1.displayDetails();
	return 0;
}