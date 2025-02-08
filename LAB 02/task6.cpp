//muhammad affan rasheed (24k-0579)
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollno;
    int marks[3];
    float avg;
};

void calculateavg(Student &student) {
    float sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += student.marks[i];
    }
    student.avg = sum / 3;
}

int main() {
    int totalstudents;
    cout << "enter the number of students: ";
    cin >> totalstudents;
    Student* students = new Student[totalstudents];
    for (int i = 0; i < totalstudents; ++i) {
        cout << "enter details for student " << i + 1 <<endl;
        cout << "name: ";
        cin >> students[i].name;
        cout << "roll no: ";
        cin >> students[i].rollno;
        for (int j = 0; j < 3; ++j) {
            cout << "enter marks for subject  " << j + 1 << ": ";
            cin >> students[i].marks[j];
        }
        calculateavg(students[i]);
    }

    cout << "istudent records:"<<endl;
    for (int i = 0; i <totalstudents; ++i) {
        cout << "name: "<<students[i].name<<endl;
        cout << "roll number: " << students[i].rollno<<endl;
        cout << "marks: "<<endl;
        for (int j = 0; j < 3; ++j) {
            cout << students[i].marks[j] <<endl;
        }
        cout<<"avg marks: " << students[i].avg <<endl;
    }
    delete[] students;
    return 0;
}
