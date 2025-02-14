// muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class FitnessTracker
{
private:
    string userName;
    int dailyStepGoal = 0;
    int stepsTaken = 0;
    double caloriesBurned = 0.0;
public:
    void setValues(string name,int goal){
        userName = name;
        dailyStepGoal = goal;
    }
    void logSteps(int steps){
        if (steps > 0)
        {
            cout <<steps<<" taken and "<<0.04*steps<<" calories burnt "<<endl;
            stepsTaken += steps;
            caloriesBurned += 0.04*stepsTaken;
        }
    }
    void goalTracker(){
        if (stepsTaken < dailyStepGoal)
        {
            cout<<"Daily Steps Goal NOT Met! " << dailyStepGoal-stepsTaken << " steps left. "<<endl;
        }
        else
        {
            cout<<"Daily Steps Goal Met! "<<endl;
        }
        
    }
};
int main(){
    FitnessTracker today;
    today.setValues("Laiba",10000);
    today.goalTracker();
    today.logSteps(2323);
    today.goalTracker();
    today.logSteps(770);
    today.logSteps(4000);
    today.goalTracker();
    today.logSteps(5000);
    return 0;
}
