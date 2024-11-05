#include "main.h"
/**
 * int factorial - returns the factorial of a given number.
 * @n: an integer.
 *
 * Description: function factorial
 *
 * Return: -1 if n < 0, otherwise 0.
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0 || n == 1)
	return (1);
else
	return (n * factorial(n-1));
}

