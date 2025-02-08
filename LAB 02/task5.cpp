//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
 int main(){
   int total;
   cout<<"enter total numbers u wana enter: ";
   cin>>total;
   int array[total];
   for (int i = 0; i < total; i++)
   {
      cout<<"enter element "<<i+1<<": ";
      cin>>*(array+i);
   }
   cout<<"elements of array:"<<endl;
   for (int i = 0; i < total; i++)
   {
      cout<<*(array+i);
      cout<<endl;
   }
   int sum = 0;
   for (int i = 0; i < total; i++)
   {
      sum += *(array+i);
   }
   cout<<"sum of all numbers is: "<<sum;
   return 0; 
 }
