/*
MUHAMMAD AFFAN RASHEED (24K-0579) 
*/
#include "iostream"
using namespace std;
int main(){
    // IN-LAB TASK 1
    int x,y;       
    cout<<"ENTER NUMBER OF PARTICIPANTS FOR EVENT 1: ";
    cin>>x;
    cout<<endl;
    cout<<"ENTER NUMBER OF PARTICIPANTS FOR EVENT 2: ";
    cin>>y;
    cout<<endl;
    string event_1[x],event_2[y];
    for (int i = 0; i < x; i++)     
    {
        cout<<"ENTER NAME FOR PARTICIPANT "<<i+1<<" FOR EVENT 1: ";
        cin>>event_1[i];
        cout<<endl;
    }
    for (int i = 0; i < y; i++)
    {
        cout<<"ENTER NAME FOR PARTICIPANT "<<i+1<<" FOR EVENT 2: ";
        cin>>event_2[i];
        cout<<endl;
    }
    // IN-LAB TASK 2
    string name;        
    bool found = false;
    cout<<"ENTER PARTICIPANT NAME TO SEARCH: ";
    cin>>name;
    for (int i = 0; i < x; i++)
    {
        if (name == event_1[i])
        {
            found = true;
            cout<<"PARTICIPANT "<<name<<" PRESENT! "<<endl;
            break;
        }
    }
    if (found != true){
        for (int i = 0; i < y; i++)
        {
           if (name == event_2[i])
        {
            found = true;
            cout<<"PARTICIPANT "<<name<<" PRESENT! "<<endl;
            break;
        }
        }
    }
    if (found != true){
        cout<<"PARTICIPANT "<<name<<" NOT PRESENT!"<<endl;
    } 

    // IN-LAB TASK 3

    int donations = (x+y)*10;
    cout<<"TOTAL DONATIONS COLLECTED ARE: "<<donations<<endl;
   
    // IN-LAB TASK 4
   
    cout<<"EVENT 1 PARTICIPANTS: "<<endl;
    for (int i = x-1; i >= 0; i--)
    {
        cout<<event_1[i]<<endl;
    }
    cout<<"EVENT 2 PARTICIPANTS: "<<endl;
    for (int i = x-1; i >= 0; i--)
    {
        cout<<event_2[i]<<endl;
    }

    // IN-LAB TASK 5
    cout<<"EVENT 1 PARTICIPANTS: ";
    for (int i = 0; i < x; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    cout<<"EVENT 2 PARTICIPANTS: ";
    for (int i = 0; i < y; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
