#include "main.h"

/**
 *print_line - draws a straight line
 *@n: n is the number of _ printed
 *
 * Description: draws a straight line in the terminal
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
