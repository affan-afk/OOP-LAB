//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class wallet
{
private:
    string ownerName = "Saad";
    double totalBalance;
    double transactionHistory[100] = {0.0};
public:
    void addMoney(double amount){
        if (amount > 0)
        {
            totalBalance += amount;
            cout<<amount<<" was successfully debited into "<<ownerName<<"'s account!"<<endl;
            for (int i = 0; i < 100; i++)
            {
                if (transactionHistory[i] == 0.0)
                {
                    transactionHistory[i] = amount;
                    break;
                }
            }
        }
        else
        {
            cout<<"Invalid Amount!"<<endl;
        }
        
    }
    void spendMoney(double amount){
        if (totalBalance - amount > 0)
        {
            cout<<amount<<" was successfully withdrawn from "<<ownerName<<"'s account!"<<endl;
            totalBalance -= amount;
            for (int i = 0; i < 100; i++)
            {
                if (transactionHistory[i] == 0.0)
                {
                    transactionHistory[i] = -1*amount;
                    break;
                }
            }
        }
        else
        {
            cout<<"Insufficient Balance!"<<endl;
        }
        
    }
    void displayTransactionHistory(){
        int i = 0;
        cout<<"Transaction History:"<<endl;
        while (transactionHistory[i] != 0.0)
        {
            cout<<transactionHistory[i]<<endl;
            i++;
        }
    }
};
int main(){
    wallet myWallet;
    myWallet.addMoney(12.3);
    myWallet.addMoney(23.332);
    myWallet.addMoney(1332.35);
    myWallet.addMoney(12353.33);
    myWallet.spendMoney(33.1);
    myWallet.spendMoney(92.441);
    myWallet.displayTransactionHistory();
    return 0;
}


