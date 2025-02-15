//muhammad affan rasheed (24k-0579)
#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    string model;
    double fuelCapacity;
    double currentFuelLevel;
    double fuelAverage;
    public:
    void setValues(string pbrand,string pmodel,double maxCap,double current,double Avg){
        brand = pbrand;
        model = pmodel;
        fuelCapacity = maxCap;
        currentFuelLevel = current; 
        fuelAverage = Avg;
    }
    void driveCar(double distance){
        if (distance/fuelAverage < currentFuelLevel)
        {
            currentFuelLevel -= distance/fuelAverage; 
            cout<<distance<<" Kilometres driven! "<<currentFuelLevel<<" litres of fuel left!"<<endl;
            cout<<"Remaining Range = "<<currentFuelLevel*fuelAverage<<" Kilometeres" <<endl;
        }
        else
        {
            cout<<"Insufficient Fuel for trip!"<<endl;
        }
    }
    double fuelStatus(){
        return currentFuelLevel;
    }
    void fuelStatus(int i){
        cout<<"Fuel Level = "<<currentFuelLevel<<" Litres"<<endl;
    }
    void refuelTank(double refillAmount){
        if (refillAmount < fuelCapacity - currentFuelLevel)
        {
            currentFuelLevel += refillAmount;
            cout<<refillAmount<<" of fuel successfully added to fuel tank! "<<endl;
            cout<<"New Fuel = "<<fuelStatus()<<" Litres"<<endl;
        }
        else if (refillAmount > fuelCapacity - currentFuelLevel)
        {
            currentFuelLevel += fuelCapacity-currentFuelLevel;
            cout<<fuelCapacity-currentFuelLevel<<"Litres of fuel successfully added to fuel tank! "<<endl;
            cout<<"Fuel Tank Full!!"<<endl;
        }
    }
};
int main(){
    Car zoya_ki_gaari;
    zoya_ki_gaari.setValues("toyota","camry",350.0,100.0,20.0);
    zoya_ki_gaari.fuelStatus(1);
    zoya_ki_gaari.driveCar(67.0);
    zoya_ki_gaari.driveCar(43.0);
    zoya_ki_gaari.refuelTank(100.0);
    zoya_ki_gaari.driveCar(2674.5);
    zoya_ki_gaari.driveCar(788.0);
    
}
