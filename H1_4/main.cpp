#include <iostream>

using namespace std;
int tuplaa(int a) { return a + a; }
int main() {
    int luku;
    cout << "Anna kokonaisluku" << endl;
    cin >> luku;
    cout << "Luku tuplattuna=" << tuplaa(luku) << endl;
    //system("pause");
    return 0;
}
