#include "mystaticclass.h"

#include <iostream>

using namespace std;

int main()
{
    double number;
    double result;
    cout << "Anna desimaaliluku" << endl;
    cin>>number;
    result=MyStaticClass::doubleMe(number);
    cout<<"tuplattuna luku="<<result<<endl;

    //MyStaticClass object;
    return 0;
}
