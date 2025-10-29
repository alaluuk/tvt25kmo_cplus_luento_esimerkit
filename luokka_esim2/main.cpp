#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    Person objPerson;
    objPerson.setName("Aino Virta");
    objPerson.setAge(25);
    cout<<objPerson.getName()<<" on "<<objPerson.getAge()<<" vuotias"<<endl;
    system("pause");
    return 0;
}
