#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Engine {
private:
    string type;
public:
    Engine(const string& type = "V6") : type(type) {
        cout << "Engine " << type << " luotiin" << endl;
    }

    ~Engine() {
        cout << "Engine " << type << " tuhottiin" << endl;
    }

    string getType() const {
        return type;
    }
};

class Car {
private:
    unique_ptr<Engine> objEngine;  // Kompositio: Car omistaa Enginen
    string model;
public:
    Car(const string& model) : model(model) {
        objEngine = make_unique<Engine>("V8");
        cout << "Car " << model << " luotiin" << endl;
    }

    ~Car() {
        cout << "Car " << model << " tuhottiin" << endl;
        // unique_ptr deletoi automaattisesti Engine-olion!
    }

    void printInfo() const {
        cout << "Auto: " << model << ", Moottori: " << objEngine->getType() << endl;
    }
};

int main() {
    Car objCar("Tesla Model S");  // Luo Carin, joka luo oman Enginen
    objCar.printInfo();

    return 0;
    // Car tuhoutuu ja tuhoaa samalla myös Enginen
}
