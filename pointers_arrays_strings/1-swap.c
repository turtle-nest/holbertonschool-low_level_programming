#include "main.h"
/**
 *swap_int - swaps the values of two integers
 * @a: a is an integer
 * @b: b is an integer
 *
 * Description: swaps the values of two integers.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
