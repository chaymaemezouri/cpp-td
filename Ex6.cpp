#include <stdio.h>

// Fonction pour incrémenter une variable en utilisant l'adresse
void incrementer(int* variable) {
    (*variable)++; // Incrémente la valeur pointée par le pointeur
}

// Fonction pour permuter deux variables en utilisant l'adresse
void permuter(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour incrémenter une variable en utilisant la référence
void incrementerParReference(int &variable) {
    variable++; // Incrémente la variable directement
}

int main() {
    int x = 5;
    int y = 10;

    // Test de l'incrémentation en utilisant l'adresse
    printf("Avant incrementer(x): x = %d\n", x);
    incrementer(&x);
    printf("Après incrementer(x): x = %d\n", x);

    // Test de la permutation en utilisant l'adresse
    printf("Avant permuter(x, y): x = %d, y = %d\n", x, y);
    permuter(&x, &y);
    printf("Après permuter(x, y): x = %d, y = %d\n", x, y);

    // Test de l'incrémentation en utilisant la référence
    printf("Avant incrementerParReference(y): y = %d\n", y);
    incrementerParReference(y);
    printf("Après incrementerParReference(y): y = %d\n", y);

    return 0;
}
