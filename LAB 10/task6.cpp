#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class InventoryItem{
    public:
    int itemID;
    char itemName[20];
};
int main(){
    InventoryItem i1;
    i1.itemID = 101; 
    strcpy(i1.itemName,"bottle");
    ofstream out("inventory.dat",ios::binary);
    out.write((char*)&i1,sizeof(i1));
    out.close();
    InventoryItem i2;
    
    ifstream in("inventory.dat",ios::binary);
    in.read((char*)&i2,sizeof(i2));
    cout<<"Item ID: "<<i2.itemID<<endl;
    cout<<"Item Name: "<<i2.itemName<<endl;
}   