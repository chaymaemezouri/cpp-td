#include <iostream>
#include <string>

int main() {
    std::string chaineDateHeure = "010920091123"; // Votre chaîne

    if (chaineDateHeure.length() == 12) {
        // Extraction des champs
        std::string jour = chaineDateHeure.substr(0, 2);
        std::string mois = chaineDateHeure.substr(2, 2);
        std::string annee = chaineDateHeure.substr(4, 4);
        std::string heure = chaineDateHeure.substr(8, 2);
        std::string minute = chaineDateHeure.substr(10, 2);

        // Conversion en entiers
        int jourInt = std::stoi(jour);
        int moisInt = std::stoi(mois);
        int anneeInt = std::stoi(annee);
        int heureInt = std::stoi(heure);
        int minuteInt = std::stoi(minute);

        // Affichage des champs
        std::cout << "Jour : " << jourInt << std::endl;
        std::cout << "Mois : " << moisInt << std::endl;
        std::cout << "Année : " << anneeInt << std::endl;
        std::cout << "Heure : " << heureInt << std::endl;
        std::cout << "Minute : " << minuteInt << std::endl;
    } else {
        std::cout << "La chaîne ne contient pas le format attendu." << std::endl;
    }

    return 0;
}
