#include <iostream>
#include <cstring>

class Fichier {
private:
    char* P; // Pointeur vers le fichier en mémoire
    int longueur; // Longueur du fichier en octets

public:
    Fichier(int taille) {
        longueur = taille;
        P = new char[longueur]; // Allouer de l'espace en mémoire
    }

    ~Fichier() {
        delete[] P; // Libérer la mémoire lors de la destruction de l'objet
    }

    void Creation() {
        // L'espace est déjà alloué lors de la création de l'objet
        // Vous pouvez effectuer des opérations supplémentaires ici si nécessaire
    }

    void Remplit() {
        // Remplir arbitrairement l'espace mémoire pointé par P
        for (int i = 0; i < longueur; i++) {
            P[i] = 'A' + (i % 26); // Remplir avec des lettres de 'A' à 'Z' en boucle
        }
    }

    void Affiche() {
        // Afficher la zone mémoire pointée par P
        for (int i = 0; i < longueur; i++) {
            std::cout << P[i];
        }
        std::cout << std::endl;
    }
};

int main() {
    // Instanciation de la classe Fichier par new
    Fichier* monFichier = new Fichier(100);

    // Appel des méthodes
    monFichier->Creation();
    monFichier->Remplit();
    monFichier->Affiche();

    // Libération de la mémoire et destruction de l'objet par delete
    delete monFichier;

    return 0;
}
