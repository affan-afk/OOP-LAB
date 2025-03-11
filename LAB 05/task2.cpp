//muhammad affan rasheed (24k-0579)
#include <iostream>
using namespace std;
class AlarmSystem{
	private:
	string secLvl;
	public:
	AlarmSystem(string lvl): secLvl(lvl){}
	void display(){
		cout<<"Alarm security level: "<<secLvl<<endl;
	}
};
class SmartHome{
	private:
	AlarmSystem a1;
	public:
	SmartHome(AlarmSystem alarm) : a1(alarm){}
	void display(){
	a1.display();
	}
};
int main(){
	AlarmSystem firstalarm("high");
	AlarmSystem secondalarm("medium");
	AlarmSystem thirdalarm("low");
	SmartHome s1(firstalarm);
	SmartHome s2(secondalarm);
	SmartHome s3(thirdalarm);
	s1.display();
	s2.display();s3.display();
}
