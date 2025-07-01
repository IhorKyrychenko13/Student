#pragma once
#include <iostream>
using namespace std;

class Student {
private:
    char* fullName;
    double averageGrade;
    char university[50];
    char groupNumber[10];

public:
    Student(); 
    Student(const char* name, double grade, const char* univ, const char* group);
    ~Student(); 

    void showInfo();

    void setName(const char* name);
    void setGrade(double grade);

    const char* getName();
    double getGrade();
    const char* getUniversity();
    const char* getGroup();
};
