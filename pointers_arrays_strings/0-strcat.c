#include "main.h"
/**
 *char *_strcat - concatenates two strings.
 * @dest: is a string
 * @src: is a string
 *
 * Description: concatenates two strings.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
	{
	dest++;
	}

	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return (original_dest);
}

