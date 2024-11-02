#include "main.h"
/**
 *puts2 - prints every other character of a string
 *@str: is a string
 *
 * Description: starting with the first character
 *
 * Return: 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	i++;
	}

	_putchar('\n');
}
