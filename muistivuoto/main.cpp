#include "dog.h"

int main() {
    for (int i = 0; i < 5; i++) {
        Dog* dog = new Dog("Koira" + to_string(i));
        dog->bark();
        // VIRHE: delete puuttuu!
        // Jokaisella kierroksella vuotaa muistia
    }
    return 0;
}
