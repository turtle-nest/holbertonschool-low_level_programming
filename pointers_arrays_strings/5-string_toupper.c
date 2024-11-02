#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 * @char: a string
 *
 * Description: changes all lowercase letters of a string to uppercase.
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str)
	{
	if (*str >= 'a' && *str <= 'z')
	{
	*str -= 32;
	}
	str++;
	}

	return (original_str);
}
