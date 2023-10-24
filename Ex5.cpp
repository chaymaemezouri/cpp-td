#include <iostream>

int main() {
    int a = 42;  // Déclaration de l'entier a et initialisation à 42
    int& ref_a = a;  // Déclaration d'une référence ref_a qui référence a
    int* p_a = &a;  // Déclaration d'un pointeur p_a pointant vers a

    std::cout << "a : " << a << std::endl;
    std::cout << "Adresse de a : " << &a << std::endl;
    std::cout << "ref_a : " << ref_a << std::endl;
    std::cout << "Adresse de ref_a : " << &ref_a << std::endl;
    std::cout << "p_a : " << *p_a << std::endl;  // Utilisation de *p_a pour accéder à la valeur pointée
    std::cout << "Adresse de p_a : " << p_a << std::endl;

    return 0;
}
