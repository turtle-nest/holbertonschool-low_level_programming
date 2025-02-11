#include "main.h"
/**
 * print_sign - checks the instructions
 * @n: type int
 *
 * Description: prints the sign of a number
(* section header: Section description)*
 * Return: Always return 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
