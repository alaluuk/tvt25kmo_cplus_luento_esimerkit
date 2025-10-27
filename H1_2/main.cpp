#include <iostream>

using namespace std;
int laskeNelio(int x);

int main()
{
    int luku,tulos;
    cout << "Anna kokonaisluku: " << endl;
    cin >> luku;
    tulos=laskeNelio(luku);
    cout<<"Luvun "<<luku<<" nelio = "<<tulos<<endl;
    cin>>luku;
    return 0;
}

int laskeNelio(int x){
    return x*x;
}
