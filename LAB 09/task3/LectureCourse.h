#ifndef LECTURECOURSE_H
#define LECTURECOURSE_H
#include <iostream>
#include "Course.h"
using namespace std;
class LectureCourse : public Course{
    private:
    double grade;
    public:
    LectureCourse(string courseCode,int credits):Course(courseCode,credits){}
    void calculateGrade(){
        grade = ((double)credits)*4.983;
    }
    void displayInfo(){
        cout<<"Lecture Course Code: "<<courseCode<<endl;
        cout<<"Course Grade: "<<grade<<endl;
    }
};
#endif