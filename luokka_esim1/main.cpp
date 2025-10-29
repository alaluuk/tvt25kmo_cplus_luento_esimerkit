#include <iostream>

using namespace std;

class Person{
private:
    int age;
    string name;
public:

    int getAge() const {
        return age;
    }
    void setAge(int value){
        age=value;
    }
    string getName() const {
        return name;
    }
    void setName(string value){
        name=value;
    }
};

int main()
{
    //Luodaan olio luokasta Person
    Person objPerson;
    objPerson.setName("Teppo");
    cout<<objPerson.getName()<<endl;
    system("pause");
    return 0;
}
