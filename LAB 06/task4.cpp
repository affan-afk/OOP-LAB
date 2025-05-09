#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    float balance;

public:
    Account(int accNo, float bal) : accountNumber(accNo), balance(bal) {}

    virtual void displayDetails() {
        cout << "Account Number: " << accountNumber << "\nBalance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
    float interestRate;

public:
    SavingsAccount(int accNo, float bal, float rate)
        : Account(accNo, bal), interestRate(rate) {}

    void displayDetails() {
        Account::displayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public Account {
    float overdraftLimit;

public:
    CheckingAccount(int accNo, float bal, float limit)
        : Account(accNo, bal), overdraftLimit(limit) {}

    void displayDetails() {
        Account::displayDetails();
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount sa(101, 5000.0, 3.5);
    CheckingAccount ca(102, 3000.0, 1000.0);

    cout << "Savings Account Details:\n";
    sa.displayDetails();
    cout << "\nChecking Account Details:\n";
    ca.displayDetails();

    return 0;
}
