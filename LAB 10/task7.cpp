#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out("sensor_log.txt",ios::app);
    if (!out)
    {
        cerr<<"error opening file"<<endl;
        exit(1);
    }
    
    streampos pos = out.tellp();
    cout<< "Current position of write pointer: "<< pos <<endl;
    out << " Sensor 3: 1010 Pa";
    pos = out.tellp();
    cout<< "Current position of write pointer: "<< pos <<endl;
    out << " Sensor 4: 43% Humidity\t";
    pos = out.tellp();
    cout<< "Current position of write pointer: "<< pos <<endl;
    out << " Sensor 5: 21%  Light\t";
    pos = out.tellp();
    cout<< "Current position of write pointer: "<< pos <<endl;
    out <<"\t";
    pos = out.tellp();
    cout<< "Current position of write pointer: "<< pos <<endl;
    out.close();
}