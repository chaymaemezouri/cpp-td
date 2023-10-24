#include <iostream>
#include <cmath>

class Vecteur3d {
private:
    float x;
    float y;
    float z;

public:
    // Constructeur par défaut
    Vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) : x(x), y(y), z(z) {}

    // Fonction pour afficher les composantes du vecteur
    void afficher() {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    // Fonction pour obtenir la somme de deux vecteurs
    Vecteur3d somme(const Vecteur3d& autre) {
        return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
    }

    // Fonction pour obtenir le produit scalaire de deux vecteurs
    float produitScalaire(const Vecteur3d& autre) {
        return (x * autre.x) + (y * autre.y) + (z * autre.z);
    }

    // Fonction pour savoir si deux vecteurs ont les mêmes composantes
    bool coincide(const Vecteur3d& autre) {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    // Fonction pour obtenir la norme du vecteur
    float norme() {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme par valeur
    Vecteur3d normaxParValeur(const Vecteur3d& autre) {
        if (norme() >= autre.norme()) {
            return *this;
        } else {
            return autre;
        }
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme par adresse
    void normaxParAdresse(const Vecteur3d& autre, Vecteur3d& resultat) {
        if (norme() >= autre.norme()) {
            resultat = *this;
        } else {
            resultat = autre;
        }
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme par référence
    void normaxParReference(const Vecteur3d& autre, Vecteur3d& resultat) {
        if (norme() >= autre.norme()) {
            resultat = *this;
        } else {
            resultat = autre;
        }
    }
};

int main() {
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(4.0, 5.0, 6.0);

    // Affichage des vecteurs
    std::cout << "Vecteur v1 : ";
    v1.afficher();
    std::cout << "Vecteur v2 : ";
    v2.afficher();

    // Somme de vecteurs
    std::cout << "Somme de v1 et v2 : ";
    Vecteur3d somme = v1.somme(v2);
    somme.afficher();

    // Produit scalaire
    float produit = v1.produitScalaire(v2);
    std::cout << "Produit scalaire de v1 et v2 : " << produit << std::endl;

    // Vérification de la coïncidence
    if (v1.coincide(v2)) {
        std::cout << "v1 et v2 ont les mêmes composantes." << std::endl;
    } else {
        std::cout << "v1 et v2 n'ont pas les mêmes composantes." << std::endl;
    }

    // Norme des vecteurs
    std::cout << "Norme de v1 : " << v1.norme() << std::endl;
    std::cout << "Norme de v2 : " << v2.norme() << std::endl;

    // Vecteur avec la plus grande norme par valeur
    Vecteur3d maxVecteur = v1.normaxParValeur(v2);
    std::cout << "Vecteur avec la plus grande norme par valeur : ";
    maxVecteur.afficher();

    // Vecteur avec la plus grande norme par adresse
    Vecteur3d maxVecteurAdresse;
    v1.normaxParAdresse(v2, maxVecteurAdresse);
    std::cout << "Vecteur avec la plus grande norme par adresse : ";
    maxVecteurAdresse.afficher();

    // Vecteur avec la plus grande norme par référence
    Vecteur3d maxVecteurReference;
    v1.normaxParReference(v2, maxVecteurReference);
    std::cout << "Vecteur avec la plus grande norme par référence : ";
    maxVecteurReference.afficher();

    return 0;
}
