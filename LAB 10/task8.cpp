#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out("config.txt");
    if (!out)
    {
        cerr << "error creating file ";
        exit(1);
    }
    
    out << "AAAAA";
    out << "BBBBB";
    out << "CCCCC";
    out.close();
    cout<<"Initial Data Written to file"<<endl;
    fstream file("config.txt",ios::in | ios::out);
    file.seekp(5);
    file << "XXXXX";
    file.close();
    ifstream read("config.txt");
    if (!read)
    {
        cerr << "error opening file ";
        exit(1);
    }
    string line;
    getline(read,line);
    cout<<"After Changes: "<<line<<endl;
    read.close();
}