#include "main.h"
/**
 * factorial - a function
 * @n: an integer.
 *
 * Description: returns the ! of a given number.
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
return (n * factorial(n - 1));
}
