#include "main.h"
/**
 *char *_strncat - concatenates two strings.
 * @dest: is a string
 * @src: a srting
 * @n: is number of bytes
 *
 * Description: concatenates two strings.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
	dest++;
	}

	while (n-- > 0 && *src)
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return (original_dest);
}
