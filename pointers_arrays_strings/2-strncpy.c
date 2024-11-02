#include "main.h"
/**
 * char *_strncpy - copies a string.
 * @dest: a string
 * @src: a string
 * @n: an integer
 *
 * Description: copies a string.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n-- > 0)
	{
	if (*src)
	{
	*dest = *src;
	src++;
	}
	else
	{
	*dest = '\0';
	}
	dest++;
	}

	return (original_dest);
}
