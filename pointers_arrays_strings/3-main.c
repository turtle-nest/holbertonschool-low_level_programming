#include "main.h"
#include <stdio.h>
/**
 * main - vérifie le code
 *
 * Return: Toujours 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f); // Calcule la longueur du préfixe
    printf("%u\n", n); // Affiche la longueur
    return (0); // Retourne 0
}

