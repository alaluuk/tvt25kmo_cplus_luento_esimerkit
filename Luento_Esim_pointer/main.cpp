#include <iostream>

using namespace std;

void kasvata(int&);
void asetaNollaksi(int* luku);
void tuplaa(int);

int main()
{
    int x=42;
    //int *pointer_x=&x;
    int *pointer_x;
    pointer_x=&x;

    cout << "x="<<x << endl;
    cout << "&x="<<&x << endl;
    cout <<"pointer_x="<<pointer_x<<endl;
    cout <<"*pointer_x="<<*pointer_x<<endl;
    //kokeillaan tuplaa funktiota
    tuplaa(x);
    cout << "kokeilun jalkeen x="<<x << endl;

    //kasvatetaan x:n arvoa
    kasvata(x);
    cout << "kasvatettuna x="<<x << endl;
    asetaNollaksi(&x);
    cout << "nollattuna x="<<x << endl;
    return 0;
}

void kasvata(int &luku){
    luku++;
    //sama kuin
    //luku=luku+1;
    //ja sama kuin
    //luku+=1;
}
void asetaNollaksi(int* luku){
    *luku=0;
}

void tuplaa(int luku){
    luku=luku*2;
    cout<<"Funktion tuplaa sisalla luku="<<luku<<endl;
}
