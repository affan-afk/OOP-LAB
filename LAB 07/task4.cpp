#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    string contactNumber, address;

public:
    Person(string name, int age, string contact, string addr = "")
        : name(name), age(age), contactNumber(contact), address(addr) {}

    virtual void displayInfo() {
        cout << "Name: " << name << "\nAge: " << age
             << "\nContact: " << contactNumber << "\nAddress: " << address << endl;
    }

    virtual void updateInfo(string newContact, string newAddr) {
        contactNumber = newContact;
        address = newAddr;
    }
};

class Patient : public Person {
    string patientID, medicalHistory, doctorAssigned;

public:
    Patient(string name, int age, string contact, string addr,
            string id, string history, string doctor)
        : Person(name, age, contact, addr), patientID(id),
          medicalHistory(history), doctorAssigned(doctor) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Patient ID: " << patientID << "\nHistory: " << medicalHistory
             << "\nAssigned Doctor: " << doctorAssigned << endl;
    }
};

class Doctor : public Person {
    string specialization;
    double consultationFee;
    string patientsList;

public:
    Doctor(string name, int age, string contact, string addr,
           string spec, double fee, string patients)
        : Person(name, age, contact, addr), specialization(spec),
          consultationFee(fee), patientsList(patients) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Specialization: " << specialization << "\nFee: $" << consultationFee
             << "\nPatients: " << patientsList << endl;
    }
};

class Nurse : public Person {
    string assignedWard, shiftTiming;

public:
    Nurse(string name, int age, string contact, string addr,
          string ward, string shift)
        : Person(name, age, contact, addr), assignedWard(ward), shiftTiming(shift) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Ward: " << assignedWard << "\nShift: " << shiftTiming << endl;
    }
};

class Administrator : public Person {
    string department;
    double salary;

public:
    Administrator(string name, int age, string contact, string addr,
                  string dept, double salary)
        : Person(name, age, contact, addr), department(dept), salary(salary) {}

    void updateInfo(string dept, double newSalary) {
        department = dept;
        salary = newSalary;
    }

    void displayInfo() {
        Person::displayInfo();
        cout << "Department: " << department << "\nSalary: $" << salary << endl;
    }
};

int main() {
    Patient p("Ali", 30, "1234567890", "Lahore", "P001", "Diabetes", "Dr. Ahmad");
    Doctor d("Dr. Ahmad", 45, "0987654321", "Karachi", "Cardiology", 1500, "Ali, Bilal");
    Nurse n("Ayesha", 28, "1122334455", "Rawalpindi", "ICU", "Night");
    Administrator a("Imran", 50, "3344556677", "Islamabad", "HR", 90000);

    p.displayInfo();
    cout << endl;
    d.displayInfo();
    cout << endl;
    n.displayInfo();
    cout << endl;
    a.updateInfo("Admin", 95000);
    a.displayInfo();

    return 0;
}
