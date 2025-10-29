#include <iostream>

using namespace std;

int tuplaa(int);
void luvunTulostus(int);

int main() {
    int luku;
    int tulos;
    cout << "Anna positiivinen kokonaisluku" << endl;
    cin >> luku;
    if(luku<0){
        throw runtime_error("Piti antaa positiivinen luku");
    }
    try {
        tulos=tuplaa(luku);
        luvunTulostus(tulos);
    } catch (runtime_error& e) {
        cout<<e.what()<<endl;
    }

    system("pause");
    return 0;
}

int tuplaa(int a) {
    return a + a;
}
void luvunTulostus(int b){
    cout<<"Tulos="<<b<<endl;
}
