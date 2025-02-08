//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
 struct employee
 {
    string name;
    double hoursWorked,hourlyRate;
 };
 employee* employeemalloc(int x){
    employee* employees = new employee[x];
    cout<<"memory allocated!"<<endl;
    return employees;
 }
 void populateArray(employee* employees,int x){
    for (int i = 0; i < x; i++)
    {
        cout << "enter employee details " << i+1 << ": " << endl;
        cout << "name: ";
        cin>>employees[i].name;
        cout << "enter hourly Rate: ";
        cin>> employees[i].hourlyRate;
        cout << "enter hours Worked: ";
        cin >> employees[i].hoursWorked;
        cout << endl;
    }
 }
 void calculateAndDisplaySalary(employee* employees,int x){

    for (int i = 0; i < x; i++)
    {
        cout<<i+1<<". "<<employees[i].name<<" has Salary:"<<employees[i].hoursWorked*employees[i].hourlyRate<<endl;
    }
    
 }
 void freememory(employee *employee){
    delete[] employee;
    cout<<"memory freed! "<<endl;
 }
 int main(){
    int totalemployees;
    cout<<"enter total employees: ";
    cin>>totalemployees;
    employee* company = employeemalloc(totalemployees);
    populateArray(company,totalemployees);
    calculateAndDisplaySalary(company,totalemployees);
    freememory(company);
 }
