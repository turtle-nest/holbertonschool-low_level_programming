#include "3-calc.h"

/**
 * add - add two integers
 * @a: an integer
 * @b: another integer
 *
 * Return: the result.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * sub - substracts two integers
 * @a: an integer
 * @b: another integer
 *
 * Return: the result.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: an integer
 * @b: another integer
 *
 * Return: the result.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * div - divides two integers
 * @a: an integer
 * @b: another integer
 *
 * Return: the result.
 */
int op_div(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a / b);
}

/**
 * mod - returns the remainder of the division
 * of two integers
 * @a: an integer
 * @b: another integer
 *
 * Return: the result.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
