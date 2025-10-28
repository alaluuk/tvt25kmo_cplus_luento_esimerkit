#include <iostream>

using namespace std;

int main() {
    string name;
    int age;
    cout << "Anna nimesi: ";
    cin >> name;
    cout << "Anna ikasi: ";
    cin >> age;
    cout << "Terve " << name << "olet siis " << age << " vuotias" << endl;
    //jotta ruutu ei sulkeudu
    system("pause");
    return 0;
}
