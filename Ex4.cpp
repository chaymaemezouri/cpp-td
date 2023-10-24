#include <iostream>

int main() {
    int taille;

    // Étape 1: Demander à l'utilisateur la taille du tableau
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Allouer dynamiquement un tableau pour stocker les nombres entiers
    int* tableau = new int[taille];

    // Lire les nombres entiers et les stocker dans le tableau
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez un nombre entier : ";
        std::cin >> tableau[i];
    }

    // Étape 2: Créer dynamiquement un nouveau tableau pour les carrés
    int* carres = new int[taille];

    // Calculer les carrés des nombres et les stocker dans le nouveau tableau
    for (int i = 0; i < taille; i++) {
        carres[i] = tableau[i] * tableau[i];
    }

    // Afficher les carrés
    std::cout << "Les carrés des nombres sont : ";
    for (int i = 0; i < taille; i++) {
        std::cout << carres[i] << " ";
    }
    std::cout << std::endl;

    // Étape 3: Libérer la mémoire allouée pour les tableaux
    delete[] tableau;
    delete[] carres;

    return 0;
}
