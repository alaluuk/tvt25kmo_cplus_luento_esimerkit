#include <iostream>

using namespace std;

int main()
{
    string fname;
    cout << "Anna etunimesi:" << endl;
    cin >> fname;
    cout<<"Terve "<<fname <<endl;
    //jotta ruutu ei sulkeudu, luetaan vielä kerran
    cin >> fname;
    return 0;
}
