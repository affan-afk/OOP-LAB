//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class Account{
	protected:
	int accountNumber;
	float balance;
	public:
	Account(int accountNumber, float balance) : accountNumber(accountNumber), balance(balance) {}
	void displayDetails(){
		cout<<"Account Number: "<<accountNumber<<endl;
		cout<<"Account Balance: "<<balance<<endl;
	}
};
class SavingsAccount : protected Account{
	protected:
	float interestRate;
	public:
	SavingsAccount(int accountNumber, float balance, float interestRate) :  Account(accountNumber,balance), interestRate(interestRate){}
	void displayDetails(){
		Account::displayDetails();
		cout<<"Savings Account Interest Rate: "<<interestRate<<endl;
	}
};
class CheckingsAccount : protected Account{
	protected:
	float overdraftLimit;
	public:
	CheckingsAccount(int accountNumber, float balance, float overdraftLimit) :  Account(accountNumber,balance), overdraftLimit(overdraftLimit){}
	void displayDetails(){
		Account::displayDetails();
		cout<<"Checkings Account Overdraft Limit: "<<overdraftLimit<<endl;
	}
};
int main(){
	SavingsAccount sa(32274,3232.44,15.5);
	CheckingsAccount ca(73732,9376.93,2220.54);
	sa.displayDetails();
	ca.displayDetails();
	return 0;
}