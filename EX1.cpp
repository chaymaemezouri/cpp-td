#include <iostream>

void afficherAppelNumero() {
    // Variable statique locale pour compter les appels
    static int compteur = 1;

    // Afficher le nombre d'appels
    std::cout << "appel numéro " << compteur << std::endl;

    // Incrémenter le compteur
    compteur++;
}

int main() {
    // Exemple d'utilisation de la fonction
    afficherAppelNumero();
    afficherAppelNumero();
    afficherAppelNumero();

    return 0;
}
