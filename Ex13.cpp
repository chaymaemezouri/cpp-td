#include "point.h"
#include <iostream>

int main() {
    Point p(2.0, 3.0);

    std::cout << "Point initial : ";
    p.affiche();

    p.deplace(1.5, -0.5);

    std::cout << "Point après déplacement : ";
    p.affiche();

    return 0;
}
