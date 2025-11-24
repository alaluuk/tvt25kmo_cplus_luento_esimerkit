#ifndef TESTCLASS_H
#define TESTCLASS_H
#include <iostream>
#include "imyinterface.h"

using namespace std;
class TestClass : public IMyInterface
{
public:
    TestClass();

    // IMyInterface interface
public:
    void Method1(int);
    int Method2(int);
};

#endif // TESTCLASS_H
