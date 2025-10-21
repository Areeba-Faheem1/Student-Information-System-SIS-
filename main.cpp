
#include "Student.h"
using namespace std;

// Default Constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0;
    cout << "Default Student created.\n";
}

// Parameterized Constructor
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized Student created: " << name << "\n";
}

// Destructor
Student::~Student() {
    cout << "Student record for " << name << " has been destroyed.\n";
}

// Getters 
string Student::getName() {
    return name;
}
int Student::getAge() { 
    return age; 
}
int Student::getRollNo() {
    return rollNo; 
}
float Student::getGpa() { 
    return gpa;
}
// Setters
void Student::setName(string n) { 
    name = n; 
}
void Student::setAge(int a) { 
    age = a;
}
void Student::setRollNo(int r) {
    rollNo = r; 
}
void Student::setGpa(float g) {
    gpa = g; 
}

void Student::displayInfo() {
    cout << "Name: " << name
        << " | Age: " << age
        << " | Roll No: " << rollNo
        << " | GPA: " << gpa
        << " | Grade: " << calculateGrade() << "\n";
}

char Student::calculateGrade() {
    if (gpa >= 3.5) 
        return 'A';
    else if (gpa >= 3.0)
        return 'B';
    else if (gpa >= 2.0) 
        return 'C';
    else if (gpa >= 1.0) 
        return 'D';
    else 
        return 'F';
}
