#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Vérifie si une chaîne contient uniquement des chiffres.
 * @str: La chaîne à vérifier.
 *
 * Return: 1 si la chaîne est composée uniquement de chiffres, sinon 0.
 */
int is_digit(char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
 * free_and_exit - Libère la mémoire et quitte le programme.
 * @result: Pointeur vers le tableau alloué dynamiquement.
 * @status: Code de sortie.
 */
void free_and_exit(int *result, int status)
{
if (result)
free(result);
exit(status);
}

/**
 * _strlen - Renvoie la longueur d'une chaîne.
 * @str: La chaîne dont la longueur est à calculer.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen(char *str)
{
int len = 0;

while (str[len])
len++;
return (len);
}

/**
 * main - Multiplie deux nombres positifs.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 *
 * Return: 0 si le programme s'exécute correctement, sinon 98.
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, i, j, carry, n1, n2, *result, pos;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
{
printf("Error\n");
exit(98);
}

len1 = _strlen(num1);
len2 = _strlen(num2);

result = calloc(len1 + len2, sizeof(int));
if (!result)
return (1);

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
pos = i + j + 1;

carry += result[pos] + (n1 * n2);
result[pos] = carry % 10;
carry /= 10;
}
result[i + j + 1] += carry;
}

i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

if (i == len1 + len2)
_putchar('0');

for (; i < len1 + len2; i++)
_putchar(result[i] + '0');

_putchar('\n');
free_and_exit(result, 0);

if (result != NULL)
{
free(result);
result = NULL;
}

return (0);
}
