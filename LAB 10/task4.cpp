#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    ifstream in("vehicles.txt");
    if (!in)
    {
        cerr<<"file no open"<<endl;
        exit(1);
    }
    string line,type,id,name,year,extradata,certification;
    while (getline(in,line))
    {
        if (line.empty() || line[0] == '/')
        {
            continue;
        }
        istringstream separate(line);
        getline(separate,type,',');
        getline(separate,id,',');
        getline(separate,name,',');
        getline(separate,year,',');
        getline(separate,extradata,',');
        getline(separate,certification,',');
        
        cout << "Vehicle Type: " << type << endl;
        cout << "Vehicle ID: " << id << endl;
        cout << "Vehicle Name: " << name << endl;
        cout << "Vehicle Year: " << year << endl;
        cout << "Extra Data: " << extradata << endl;
        cout << "Certification: " <<  certification<< endl;
        
        if (type == "AutonomousCar")
        {
            float s_ver = stof(extradata.substr(extradata.find(':')+1));
            cout << "Software Version: " << s_ver;
        }
        if (type == "ElectricVehicle")
        {
            int battery_cap = stof(extradata.substr(extradata.find(':')+1));
            cout << "Battery Capacity: " << battery_cap;
        }
        
        cout << "\n\n";
    }
    
    // string name = "Affan is me";
    // string subname = name.substr(name.find(" "));
    // cout<<subname<<endl;
}