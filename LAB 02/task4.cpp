//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;


 int main(){
    int totalStrings;
    cout<<"enter total strings: ";
    cin>>totalStrings;
    string *strings = new string[totalStrings];
    cin.ignore();
    for (int i = 0; i < totalStrings; i++)
    {
      cout<<"enter string "<<i+1<<": ";
      getline(cin,strings[i]);
      cout<<endl;
    }
    for (int i = 0; i < totalStrings; i++)
    {
      cout<<"string "<<i+1<<": "<<strings[i];
      cout<<endl;
    }
    delete[] strings;
 }
