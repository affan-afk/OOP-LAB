//MUHAMMAD AFFAN RASHEED (24K-0579)


#include "iostream"
using namespace std;
int main(){
  
    //TAKE HOME TASK 1
    int aqi[4][7];    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout<<"ENTER AQI FOR CITY "<<i+1<<" AND DAY "<<j+1<<": ";
            cin>>aqi[i][j];
        }
        cout<<endl;
    }
    int sum, highest = 0,index;
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < 7; j++)
        {
            sum += aqi[i][j];
        }
        cout<<"AVERAGE AQI FOR CITY "<<i+1<<" FOR THE WEEK IS: "<<sum/7;
        cout<<endl;
        if (sum/7 > highest)
        {
            highest = sum/7;
            index = i;
        }
    }
    cout<<"CITY "<<index+1<<" HAS THE WORST AIR QUALITY WITH AN AQI OF "<<highest<<endl;
  
    //TAKE HOME TASK 2 
  
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (aqi[i][j] > 150){
                cout<<"DAY "<<j+1<<" OF WEEK "<<i+1<<" HAS CRITICAL POLLUTION!"<<endl;
            }
        }
        cout<<endl;
    }
  
    //TAKE HOME TASK 3
  
    for (int i = 0; i < 4; i++)
    {
        cout<<"CITY "<<i+1<<" "<<endl;
        for (int j = 0; j < 7; j++)
        {
            cout<<"DAY "<<j+1<<": ";
            for (int k = 0; k < aqi[i][j]/50; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
