#include "main.h"
/**
 * print_chessboard - imprime un échiquier
 * @a: tableau 2D représentant l'échiquier
 *
 * Return: Rien
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}

