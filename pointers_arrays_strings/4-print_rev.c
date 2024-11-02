#include "main.h"
/**
 *print_rev - prints a string, in reverse
 *@s: is a string
 *
 * Description: prints a string, in reverse
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
	length++;
	}

	while (length > 0)
	{
	_putchar(s[length - 1]);
	length--;
	}

	_putchar('\n');
}
