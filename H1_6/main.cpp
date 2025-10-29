#include <iostream>

using namespace std;
void tuplaa(int *);
int main()
{
    int luku;
    cout << "Anna luku" << endl;
    cin>>luku;
    tuplaa(&luku);
    // &luku on sen muistipaikan osoite, jossa muuttuja
    // nimeltään luku sijaitsee
    cout<<"Nyt luku="<<luku<<endl;

    system("pause");
    return 0;
}

// *a on osoitin muuttuja, johon voidaan
//sijoittaa int tyyppisen muuttujan osoite
void tuplaa(int *a){
    *a=2 * *a;
    cout<<"tuplaa funktiossa luku="<<*a<<endl;
    // a on nyt muistipaikan osoite ja *a sen sisältö
}
