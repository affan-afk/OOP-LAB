//muhammad affan rasheed (24k-0579)
#include <iostream>
#include <string.h>
using namespace std;
class Patient{
    protected:
    string name;
    string id;
    public:
    virtual void displayTreatment() = 0;
    virtual void calculateCost() = 0;
    Patient(string name,string id):name(name),id(id){}
};
class InPatient:public Patient{
    public:
    InPatient(string name,string id):Patient(name,id){}
    void displayTreatment(){
        cout<<"InPatient Details:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Treatment: Proton Therapy"<<endl;
    }
    void calculateCost(){
        cout<<"InPatient Cost: $32323333"<<endl;
    }
};
class OutPatient:public Patient{
    public:
    OutPatient(string name,string id):Patient(name,id){}
    void displayTreatment(){
        cout<<"Out Patient Details:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Treatment: Brain Therapy"<<endl;;
    }
    void calculateCost(){
        cout<<"OutPatient Cost: $9578"<<endl;
    }
};
int main(){
    InPatient Inp("Sameer","323");
    OutPatient Oup("Ahmed","643");
    
    Inp.displayTreatment();
    Inp.calculateCost();
    Oup.displayTreatment();
    Oup.calculateCost();
    

}
