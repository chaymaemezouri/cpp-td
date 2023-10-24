#include <iostream>

class Complexe {
public:
    Complexe(double re, double im) : reel(re), imaginaire(im) {}

    // Méthode pour l'addition
    Complexe addition(const Complexe& autre) {
        double re_resultat = reel + autre.reel;
        double im_resultat = imaginaire + autre.imaginaire;
        return Complexe(re_resultat, im_resultat);
    }

    // Méthode pour la soustraction
    Complexe soustraction(const Complexe& autre) {
        double re_resultat = reel - autre.reel;
        double im_resultat = imaginaire - autre.imaginaire;
        return Complexe(re_resultat, im_resultat);
    }

    // Méthode pour la multiplication
    Complexe multiplication(const Complexe& autre) {
        double re_resultat = (reel * autre.reel) - (imaginaire * autre.imaginaire);
        double im_resultat = (reel * autre.imaginaire) + (imaginaire * autre.reel);
        return Complexe(re_resultat, im_resultat);
    }

    // Méthode pour la division
    Complexe division(const Complexe& autre) {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        double re_resultat = (reel * autre.reel + imaginaire * autre.imaginaire) / denominateur;
        double im_resultat = (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur;
        return Complexe(re_resultat, im_resultat);
    }

    // Méthode pour afficher le nombre complexe
    void afficher() {
        std::cout << reel << " + " << imaginaire << "i";
    }

    // Méthode pour vérifier l'égalité
    bool estEgal(const Complexe& autre) {
        return (reel == autre.reel) && (imaginaire == autre.imaginaire);
    }

private:
    double reel;
    double imaginaire;
};

int main() {
    double re1, im1, re2, im2;
    std::cout << "Entrez la partie réelle du premier nombre complexe : ";
    std::cin >> re1;
    std::cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    std::cin >> im1;
    std::cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    std::cin >> re2;
    std::cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    std::cin >> im2;

    Complexe complexe1(re1, im1);
    Complexe complexe2(re2, im2);

    int choix;
    std::cout << "Menu : \n";
    std::cout << "1. Vérifier l'égalité\n";
    std::cout << "2. Addition\n";
    std::cout << "3. Soustraction\n";
    std::cout << "4. Multiplication\n";
    std::cout << "5. Division\n";
    std::cout << "Entrez votre choix : ";
    std::cin >> choix;

    switch (choix) {
        case 1:
            if (complexe1.estEgal(complexe2)) {
                std::cout << "Les nombres complexes sont égaux." << std::endl;
            } else {
                std::cout << "Les nombres complexes ne sont pas égaux." << std::endl;
            }
            break;
        case 2:
            complexe1.addition(complexe2).afficher();
            break;
        case 3:
            complexe1.soustraction(complexe2).afficher();
            break;
        case 4:
            complexe1.multiplication(complexe2).afficher();
            break;
        case 5:
            complexe1.division(complexe2).afficher();
            break;
        default:
            std::cout << "Choix invalide." << std::endl;
    }

    return 0;
}
