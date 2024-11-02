#include "main.h"

/**
 *_isupper - checks for uppercase character.
 *@c: the character to be checked
 *
 * Description: a function that checks for uppercase character
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
