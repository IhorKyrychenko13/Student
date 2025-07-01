#include "Student.h"
#include <cstring>

Student::Student() {
    fullName = new char[10] { "undefined" };
    averageGrade = 0.0;
    strcpy_s(university, "Unknown");
    strcpy_s(groupNumber, "000");
    cout << "Створено стандартного студента\n";
}

Student::Student(const char* name, double grade, const char* univ, const char* group) {
    int len = strlen(name) + 1;
    fullName = new char[len];
    strcpy_s(fullName, len, name);
    averageGrade = grade;
    strcpy_s(university, univ);
    strcpy_s(groupNumber, group);
    cout << "Створено студента: " << name << endl;
}

Student::~Student() {
    delete[] fullName;
    cout << "Видалено студента\n";
}

void Student::showInfo() {
    cout << "\n===== Студент =====\n";
    cout << "ПІБ: " << fullName << "\n";
    cout << "Середній бал: " << averageGrade << "\n";
    cout << "Університет: " << university << "\n";
    cout << "Група: " << groupNumber << "\n";
    cout << "===================\n";
}

void Student::setName(const char* name) {
    delete[] fullName;
    int len = strlen(name) + 1;
    fullName = new char[len];
    strcpy_s(fullName, len, name);
}

void Student::setGrade(double grade) {
    averageGrade = grade;
}

const char* Student::getName() { return fullName; }
double Student::getGrade() { return averageGrade; }
const char* Student::getUniversity() { return university; }
const char* Student::getGroup() { return groupNumber; }
