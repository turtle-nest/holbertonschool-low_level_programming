#include "main.h"
/**
 *reset_to_98 - takes a pointer to an int
 * @*n: is a pointer 
 *
 * Description: as parameter and updates the value to to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int valeur = 0;
    reset_to_98(&valeur);
    _putchar(valeur + '0');
    _putchar('\n');
    return 0;
}
