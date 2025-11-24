#include "dog.h"
#include <iostream>

int main() {
    std::cout << "PID: " << getpid() << std::endl;
    for (int i = 0; i < 5; i++) {
        Dog* dog = new Dog("Koira" + to_string(i));
        dog->bark();
        delete dog;
        dog=nullptr;
        // VIRHE: delete puuttuu!
        // Jokaisella kierroksella vuotaa muistia
    }
    return 0;
}
