//muhammad affan rasheed (24k-0579)
#include <iostream>
#include <cstring>
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
    for (int i = 0; i < totalStrings-1; i++)
    {
      for (int j = 0; j < totalStrings-i-1; j++)
      {
         if (strings[j] > strings[j+1])
         {
            string temp = strings[j];
            strings[j] = strings[j + 1];
            strings[j + 1] = temp;
         }
      }
    }
    for (int i = 0; i < totalStrings; i++)
    {
      cout<<"string "<<i+1<<": "<<strings[i];
      cout<<endl;
    }
    delete[] strings;
    return 0;
 }
