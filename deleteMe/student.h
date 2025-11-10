#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>

using namespace std;
class Student
{
private:
    string name;
    int year;
    string clas;
public:
    Student(string,int,string);
    void printStudentData();
};

#endif // STUDENT_H
