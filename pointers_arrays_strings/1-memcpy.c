#include "main.h"

/**
 * _memcpy - copie une zone de mémoire
 * @dest: pointeur vers la zone mémoire de destination
 * @src: pointeur vers la zone mémoire source
 * @n: nombre d'octets à copier
 *
 * Return: pointeur vers la zone mémoire de destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return dest;
}

