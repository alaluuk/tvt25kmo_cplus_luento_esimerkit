#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    int number;
    string userInput;
    cout<<"Anna input: ";
    cin>>userInput;

    // number = stoi(userInput);
    // cout << "Luku: " << number << endl;

    try {
        number = stoi(userInput);
        cout << "Luku: " << number << endl;
    } catch (invalid_argument ex) {
        cout<<"VIRHE: "<<ex.what()<<endl;
    }

    system("pause");
    return 0;
}
