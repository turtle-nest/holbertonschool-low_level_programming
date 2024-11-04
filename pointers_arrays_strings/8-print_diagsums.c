#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - imprime la somme des deux diagonales d'une matrice
 * @a: pointeur vers la matrice
 * @size: taille de la matrice
 *
 * Return: Rien
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += *(a + (i * size + i));
sum2 += *(a + (i * size + (size - i - 1)));
}
printf("%d, %d\n", sum1, sum2);
}

