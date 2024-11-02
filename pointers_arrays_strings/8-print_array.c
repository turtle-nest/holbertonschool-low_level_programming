#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@a: a is an integer
 *@n: number of elements of the array to be printed
 *
 * Description: prints n elements of an array of integers
 *
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
