#include <iostream>

class Liste {
private:
    struct Element {
        int valeur;
        Element* suivant;
        Element(int val) : valeur(val), suivant(nullptr) {}
    };

    Element* premier; // Pointeur vers le premier élément de la liste

public:
    Liste() : premier(nullptr) {}

    ~Liste() {
        // Destructeur : libérer la mémoire lorsque l'objet est détruit
        while (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void ajouterElement(int valeur) {
        Element* nouvelElement = new Element(valeur);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void supprimerElement() {
        if (premier) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void afficherListe() {
        Element* courant = premier;
        while (courant) {
            std::cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }
};

int main() {
    Liste maListe;

    maListe.ajouterElement(10);
    maListe.ajouterElement(20);
    maListe.ajouterElement(30);

    std::cout << "Liste : ";
    maListe.afficherListe();

    maListe.supprimerElement();

    std::cout << "Liste après suppression : ";
    maListe.afficherListe();

    return 0;
}

