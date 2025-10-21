#pragma once

#include <string>
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    // Default constructor
    Student();

    // Parameterized constructor 
    Student(string n, int a, int r, float g);

    // Destructor
    ~Student();

    // Getter 
    string getName();
    int getAge();
    int getRollNo();
    float getGpa();

    // Setter 
    void setName(string n);
    void setAge(int a);
    void setRollNo(int r);
    void setGpa(float g);

    void displayInfo();

    char calculateGrade();
};