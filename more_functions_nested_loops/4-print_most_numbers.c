#include "main.h"

/**
 *print_most_numbers - prints the numbers, from 0 to 9
 *@void: parameter void
 *
 * Description: a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char numbers[] = "01356789\n";
	char *ptr = numbers;

	while (*ptr)
	{
	_putchar(*ptr++);
	}
}
