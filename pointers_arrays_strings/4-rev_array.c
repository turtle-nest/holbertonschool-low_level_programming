#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers.
 * @a: an integer
 * @n: number of elements of an array
 *
 * Description: reverses the content of an array of integers.
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
	}
}
