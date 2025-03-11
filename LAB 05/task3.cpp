//muhammad affn rasheed (24k-0579)
#include <iostream>
using namespace std;
class Employee{
 private:
 string name;
 string designation;
 public:
 Employee(string name,string desg): name(name),designation(desg){}
void display(){
	cout<<"emp name: "<<name<<endl;
	cout<<"emp designation: "<<designation<<endl;
}
};
class Project{
	private:
	string title;
    string deadline;
	Employee *members[10];
	int empCount = 0;
 public:
	Project(string title,string dead):title(title),deadline(dead){}
	void addEmployee(Employee *emp){
		if (empCount < 10)
		{
			members[empCount++] = emp;
		}
	}
	void display(){
		cout<<"project details: "<<endl;
		cout<<"project title: "<<title<<endl;
		cout<<"project deadline: "<<deadline<<endl;
		for (int i = 0; i < empCount; i++)
		{
			members[i]->display();
		}
	}
};
int main(){
	Employee e1("ali","head");
	Employee e2("ahmed","lead programmer");
	Employee e3("mohsin","backend");
	Project p1("game 2","9/11");
	p1.addEmployee(&e1);
	p1.addEmployee(&e2);
	p1.addEmployee(&e3);
	p1.display();
}
