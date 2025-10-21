// main.cpp
#include "Student.h"
using namespace std;

int main() {
    cout << "Student Information System (SIS) " << endl;

    // Student 1,Default constructor 
    Student s1;
    s1.setName("Areeba");
    s1.setAge(20);
    s1.setRollNo(92);
    s1.setGpa(4.0);
    s1.displayInfo();

    cout << endl;

    // Student 2,parameterized constructor
    Student s2("Sara", 19, 102, 3.2);
    s2.displayInfo();
    cout << endl;

    // Student 3,parameterized constructor
    Student s3;
    s3.setName("Ayesha");
    s3.setAge(21);
    s3.setRollNo(111);
    s3.setGpa(2.8);
    s3.displayInfo();

    cout << "\n All Records \n";

    return 0;
}