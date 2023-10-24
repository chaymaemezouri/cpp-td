#include <iostream>
#include <string>

class Animal {
protected:
    std::string nom;
    int age;

public:
    Animal() : nom(""), age(0) {}

    void set_value(const std::string& nom, int age) {
        this->nom = nom;
        this->age = age;
    }
};

class Zebra : public Animal {
public:
    Zebra() {}

    void afficherInfos() {
        std::cout << "Je suis un zèbre nommé " << nom << ". J'ai " << age << " ans." << std::endl;
        std::cout << "Je viens d'Afrique." << std::endl;
    }
};

class Dolphin : public Animal {
public:
    Dolphin() {}

    void afficherInfos() {
        std::cout << "Je suis un dauphin nommé " << nom << ". J'ai " << age << " ans." << std::endl;
        std::cout << "Je viens de l'océan." << std::endl;
    }
};

int main() {
    Zebra zebre;
    Dolphin dauphin;

    zebre.set_value("Rayures", 5);
    dauphin.set_value("Flipper", 10);

    zebre.afficherInfos();
    dauphin.afficherInfos();

    return 0;
}
