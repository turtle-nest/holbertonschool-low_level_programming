#include "main.h"
/**
 * print_last_digit - checks the instructions
 * @n: type int
 *
 * Description: print last digit
(* section header: Section description)*
 * Return: Always return 0.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
