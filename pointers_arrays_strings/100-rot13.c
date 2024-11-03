#include "main.h"
/**
 *rot13 - encodes a string using rot13.
 * @str: is a string
 *
 * Description: encodes a string using rot13.
 *
 * Return: str.
 */
char *rot13(char *str)
{
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rotated = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; original[j] != '\0'; j++)
	{
	if (str[i] == original[j])
	{
	str[i] = rotated[j];
	break;
	}
	}
	}

	return (str);
}
