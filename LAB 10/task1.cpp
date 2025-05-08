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
    string line;
    while (getline(in,line))
    {
        cout<<line<<endl;
    }
    
    // string name = "Affan is me";
    // string subname = name.substr(name.find(" "));
    // cout<<subname<<endl;
}