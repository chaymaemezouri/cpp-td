#include <iostream>

int main() {
    const int taille = 10;
    int tableau[taille];

    // Lecture des 10 nombres dans le tableau
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez un nombre : ";
        std::cin >> tableau[i];
    }

    int minimum = tableau[0];
    int maximum = tableau[0];

    // Recherche du minimum et du maximum
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < minimum) {
            minimum = tableau[i];
        }
        if (tableau[i] > maximum) {
            maximum = tableau[i];
        }
    }

    std::cout << "Le plus petit nombre est : " << minimum << std::endl;
    std::cout << "Le plus grand nombre est : " << maximum << std::endl;

    return 0;
}
