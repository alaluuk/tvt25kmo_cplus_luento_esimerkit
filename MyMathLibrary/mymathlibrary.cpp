#include "mymathlibrary.h"
#include <stdexcept>

MyMathLibrary::MyMathLibrary() {}

int MyMathLibrary::factor(int n)
{
    if(n<0){
        throw std::runtime_error("luku ei saa olla negatiivinen");
    }
    int result=1;
    for(int x=1; x<=n; x++){
        result=x*result;
    }
    return result;
}
