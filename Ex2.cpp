#include <iostream>

// Fonction pour vérifier si un nombre est un multiple de 2
bool estMultipleDe2(int nombre) {
    return nombre % 2 == 0;
}

// Fonction pour vérifier si un nombre est un multiple de 3
bool estMultipleDe3(int nombre) {
    return nombre % 3 == 0;
}

int main() {
    int nombre;
    
    std::cout << "Donnez un entier : ";
    std::cin >> nombre;
    
    if (estMultipleDe2(nombre)) {
        std::cout << "Il est pair" << std::endl;
    }

    if (estMultipleDe3(nombre)) {
        std::cout << "Il est multiple de 3" << std::endl;
    }

    if (estMultipleDe2(nombre) && estMultipleDe3(nombre)) {
        std::cout << "Il est divisible par 6" << std::endl;
    }
    
    return 0;
}
