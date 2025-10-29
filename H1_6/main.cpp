#include <iostream>

using namespace std;
void tuplaa(int *);
int main()
{
    int luku;
    cout << "Anna luku" << endl;
    cin>>luku;
    tuplaa(&luku);
    cout<<"Nyt luku="<<luku<<endl;

    system("pause");
    return 0;
}

void tuplaa(int *a){
    *a=2 * *a;
    cout<<"tuplaa funktiossa luku="<<*a<<endl;
}
