#ifndef LABCOURSE_H
#define LABCOURSE_H
#include <iostream>
#include "Course.h"
using namespace std;
class LabCourse : public Course{
    private:
    double grade;
    public:
    LabCourse(string courseCode,int credits):Course(courseCode,credits){}
    void calculateGrade(){
        grade = ((double)credits/3)*0.665;
    }
    void displayInfo(){
        cout<<"Lecture Course Code: "<<courseCode<<endl;
        cout<<"Course Grade: "<<grade<<endl;
    }
};
#endif