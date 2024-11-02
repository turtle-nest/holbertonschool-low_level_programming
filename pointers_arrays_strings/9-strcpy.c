#include "main.h"
/**
 **_strcpy - copies the string pointed to by src
 *@dest: is a string
 *@src: is a string
 *
 * Description: copies the string pointed to by src
 *
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
	*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
