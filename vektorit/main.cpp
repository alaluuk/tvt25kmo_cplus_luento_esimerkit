#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int taulukko[5] = {1, 2, 3, 4, 5};
    //et voi lisätä taulukkoon uusia alkioita
    //sen sijaan vektoriin voidaan lisätä alkioita
    vector<int> vektori = {1, 2, 3, 4, 5};
    vektori.push_back(6);
    for (int luku : vektori) {
        cout << luku << " ";
    }
    //kysellään lukuja kunnes käyttäjä antaa luvun 99
    //jolloin luvut tulostetaan
    vector<int> myNumbers;
    int newNumber=1;
    while(newNumber != 99){
        cout<<"Anna kokonaisluku (lopetus=99): ";
        cin>>newNumber;
        myNumbers.push_back(newNumber);
    }
    cout<<"Annetut luvut ovat"<<endl;
    for(int x: myNumbers){
        cout<<x<<", ";
    }
    return 0;
}
