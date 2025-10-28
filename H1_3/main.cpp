#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Anna kokonaisluku: " << endl;
    cin>>num1;
    //Jos kahdella jaettaessa jakojäännös on nolla
    if(num1 % 2 == 0){
        cout<<"Luku "<<num1<<" on parillinen"<<endl;
    }
    else {
        cout<<"Luku "<<num1<<" on pariton"<<endl;
    }
    //jotta ruutu ei sulkeudu
    system("pause");
    return 0;
}
