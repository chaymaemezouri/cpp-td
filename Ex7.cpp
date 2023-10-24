#include <iostream>

int main() {
    const int taille = 10;
    int tableau[taille];

    // Saisie des 10 entiers dans le tableau
    for (int i = 0; i < taille; i++) {
        std::cout << "Entrez un entier : ";
        std::cin >> tableau[i];
    }

    bool echanges; // Un indicateur pour savoir si des échanges ont été effectués
    int nombreEchanges = 0; // Compteur du nombre d'échanges

    // Tri à bulles
    do {
        echanges = false;
        for (int i = 0; i < taille - 1; i++) {
            if (tableau[i] > tableau[i + 1]) {
                // Échange des éléments si nécessaire
                int temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                echanges = true;
                nombreEchanges++;
            }
        }
    } while (echanges);

    // Affichage du tableau trié
    std::cout << "Le tableau trié par ordre croissant est : ";
    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Nombre d'échanges effectués : " << nombreEchanges << std::endl;

    return 0;
}
