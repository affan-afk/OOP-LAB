#include <iostream>
#include "LectureCourse.h"
using namespace std;
int main(){
    LectureCourse oop("CS1002",3);
    oop.calculateGrade();
    oop.displayInfo();
}