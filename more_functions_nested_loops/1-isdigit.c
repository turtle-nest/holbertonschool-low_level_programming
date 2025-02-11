#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: the character to be checked
 *
 * Description: a function that checks for a digit (0 through 9)
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
