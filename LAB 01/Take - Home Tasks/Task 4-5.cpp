//MUHAMMAD AFFAN RASHEED (24K-0579)


#include "iostream"
using namespace std;
int main(){

    // TAKE HOME TASK 4

    int aqi[4][28];    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            cout<<"ENTER AQI FOR CITY "<<i+1<<" AND DAY "<<j+1<<": ";
            cin>>aqi[i][j];
        }
        cout<<endl;
    }
    int sum, highest = 0,index = -1;
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < 28; j++)
        {
            sum += aqi[i][j];
        }
        cout<<"AVERAGE AQI FOR CITY "<<i+1<<" FOR THE MONTH IS: "<<sum/28;
        cout<<endl;
        if (sum/28 > highest)
        {
            highest = sum/28;
            index = i;
        }
    }
    cout<<"CITY "<<index+1<<" HAS THE WORST AIR QUALITY WITH AN AQI OF "<<highest<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"CITY "<<i+1<<" "<<endl;
        for (int j = 0; j < 28; j++)
        {
            cout<<"DAY "<<j+1<<": ";
            for (int k = 0; k < aqi[i][j]/50; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

    int drop = 0;
    int first_avg,last_avg;
    index = -1;
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < 7; j++)
        {
            sum += aqi[i][j];
        }
        first_avg = sum/7;
        sum = 0;
        for (int j = 21; j < 28; j++)
        {
            sum += aqi[i][j];
        }
        last_avg = sum/7;
        if (drop < last_avg - first_avg)
        {
            index = i;
            drop = last_avg - first_avg;
        }
    }
    cout<<"CITY "<<index+1<<" HAD THE LARGEST INCREASE IN AIR QUALITY WITH A DIFFERENCE IN AQI OF "<<drop<<endl;


    //TAKE HOME TASK 5

   for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
    {
        sum = 0;
        for (int k = j * 7; k < (j + 1) * 7; k++) 
        {  
            sum += aqi[i][k];
        }
        cout<<"AVERAGE AQI FOR WEEK "<<j+1<<" of CITY "<<i+1<<" IS "<<sum/7<<endl;
    }
   }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if (aqi[i][j] > 150){
                cout<<"DAY "<<j+1<<" OF CITY "<<i+1<<" HAS CRITICAL POLLUTION!"<<endl;
            }
        }
        cout<<endl;
    }
    int lowest = aqi[0][0];
    int highest = lowest;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (aqi[i][j] < lowest)
            {
                lowest = aqi[i][j];
            }
            if (aqi[i][j] > highest)
            {
                highest = aqi[i][j];
            }
        }
    }
    cout<<"LOWEST AQI WAS "<<lowest<<" AND THE HIGHEST AQI WAS "<<highest;
    return 0;
}
