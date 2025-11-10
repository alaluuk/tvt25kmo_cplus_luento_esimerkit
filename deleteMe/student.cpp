#include "student.h"



Student::Student(string n, int y, string c)
{
    name=n;
    year=y;
    clas=c;
}

void Student::printStudentData()
{
    cout<<"name: "<<name<<" year: "<<year<<" class: "<<clas<<endl;
}
