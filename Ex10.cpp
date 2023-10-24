#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    std::string prenom;
    std::string dateNaissance;

public:
    Personne(const std::string& nom, const std::string& prenom, const std::string& dateNaissance)
        : nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}

    virtual void Afficher() {
        std::cout << "Nom : " << nom << ", Prénom : " << prenom << ", Date de naissance : " << dateNaissance << std::endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire)
        : Personne(nom, prenom, dateNaissance), salaire(salaire) {}

    void Afficher() override {
        Personne::Afficher();
        std::cout << "Salaire : " << salaire << " euros" << std::endl;
    }
};

class Chef : public Employe {
private:
    std::string service;

public:
    Chef(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire, const std::string& service)
        : Employe(nom, prenom, dateNaissance, salaire), service(service) {}

    void Afficher() override {
        Employe::Afficher();
        std::cout << "Service : " << service << std::endl;
    }
};

class Directeur : public Chef {
private:
    std::string societe;

public:
    Directeur(const std::string& nom, const std::string& prenom, const std::string& dateNaissance, double salaire, const std::string& service, const std::string& societe)
        : Chef(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

    void Afficher() override {
        Chef::Afficher();
        std::cout << "Société : " << societe << std::endl;
    }
};

int main() {
    Personne personne("Doe", "John", "01/01/1980");
    Employe employe("Smith", "Alice", "10/05/1990", 50000.0);
    Chef chef("Brown", "Bob", "15/07/1985", 60000.0, "R&D");
    Directeur directeur("Johnson", "Eve", "20/03/1975", 80000.0, "Management", "ACME Inc.");

    personne.Afficher();
    employe.Afficher();
    chef.Afficher();
    directeur.Afficher();

    return 0;
}
