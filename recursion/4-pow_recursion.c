#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base
 * @y: the power
 *
 * Description: a recursive function pow
 *
 * Return: -1 if y < 0, otherwise the result.
 */
int _pow_recursion(int x, int y)
{
int i;

if (y < 0)
	return(-1)
for (i = 1; i <= y; i++)
	return(i * _pow_recursion(x,i));
}

