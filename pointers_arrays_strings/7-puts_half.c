#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: is a string
 *
 * Description: prints half of a string
 *
 * Return: 0.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length])
	{
	length++;
	}

	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
	start = (length - 1) / 2 + 1;
	}

	while (str[start])
	{
	_putchar(str[start]);
	start++;
	}

	_putchar('\n');
}
