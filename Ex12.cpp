#include <iostream>

class Test {
public:
    static int appelCount; // Variable statique pour compter les appels

    void call() {
        appelCount++;
    }
};

// Initialisation de la variable statique à 0
int Test::appelCount = 0;

int main() {
    Test obj1, obj2, obj3;

    // Appels de la fonction call
    obj1.call();
    obj2.call();
    obj3.call();
    obj1.call();

    std::cout << "La fonction 'call' a été appelée " << Test::appelCount << " fois." << std::endl;

    return 0;
}
