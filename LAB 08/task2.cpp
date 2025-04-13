//muhammad affan rasheed (24K-0579)
#include <iostream>
using namespace std;
class Manger;
class Account{
    private:
    int num;
    double bal;
    public:
    Account(int num = 0, double bal = 0 ):num(num),bal(bal){}
    void deposit(double amount){    
        this->bal += amount;
        cout<<amount<<" was successfully depsited into account #"<<num<<"!"<<endl;
    }
    void withdraw(double amount){    
        if (this->bal - amount >= 0 )
        {
            this->bal-=amount;
            cout<<amount<<" was successfully withdrawn from account #"<<num<<"!"<<endl;
        }
        else
        {
            cout<<"Insufficient funds in account #"<<num<<"!"<<endl;
        }
    }
    friend class Manager;
    friend void transferFunds(Account& a1,Account& a2,double amount);
};
class Manager{
    public:
    void withdrawAmount(Account *a1, double amount){
        if (a1->bal - amount >= 0 )
        {
            a1->bal-=amount;
            cout<<amount<<" was successfully withdrawn from account #"<<a1->num<<"!"<<endl;
        }
        else
        {
            cout<<"Insufficient funds in account!"<<endl;
        }
    }
    void depositAmount(Account *a1, double amount){
        a1->bal += amount;
        cout<<amount<<" was successfully depsited into account #"<<a1->num<<"!"<<endl;
    }
    void display(Account a1){
        cout<<"Account Number: "<<a1.num<<endl;
        cout<<"Current Balance: "<<endl;
    }
};
void transferFunds(Account& a1,Account& a2,double amount){
    if (amount <= a1.bal)
    {
        a1.withdraw(amount);
        a2.deposit(amount);
        cout<<amount<<" transferred from account #"<<a1.num<<" to account #"<<a2.num<<endl;
    }
    else
    {
        cout<<"Insufficient funds in Sender account! "<<endl;
    }
}
int main(){
    Account a1(6228,4232.544);
    Account a2(3321,2322.34);
    Account a3(3832,754.33);
    Manager m1;
    m1.depositAmount(&a1,20000.43);
    m1.withdrawAmount(&a1,433.65);
    transferFunds(a1,a2,476.98);
}
