#include <iostream>
#include <vector>

class Pile {
private:
    std::vector<int> elements;

public:
    Pile() {} // Constructeur par défaut

    void push(int value) {
        elements.push_back(value); // Empile un élément
    }

    bool pop(int &value) {
        if (!isEmpty()) {
            value = elements.back(); // Récupère le dernier élément
            elements.pop_back();    // Dépile l'élément
            return true;
        }
        return false; // La pile est vide
    }

    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Pile p1, p2;

    // Empile des valeurs sur la pile p1
    p1.push(10);
    p1.push(20);
    p1.push(30);

    // Empile des valeurs sur la pile p2
    p2.push(5);
    p2.push(15);

    int value;

    // Dépile et affiche les valeurs de la pile p1
    std::cout << "Dépiler p1 : ";
    while (p1.pop(value)) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Dépile et affiche les valeurs de la pile p2
    std::cout << "Dépiler p2 : ";
    while (p2.pop(value)) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
