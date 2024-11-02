#include "main.h"

/**
 *print_numbers - prints the numbers
 *@void: parameter void
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	char *ptr = numbers;

	while (*ptr)
	{
	_putchar(*ptr++);
	}
}
