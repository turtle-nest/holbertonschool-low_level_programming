#include "main.h"

/**
 *more_numbers - prints 10 times the numbers
 *@void: parameter void
 *
 * Description: prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char numbers[] = "01234567891011121314\n";
	int i;

	for (i = 0; i < 10; i++)
	{
	char *ptr = numbers;
	while (*ptr)
		{
		_putchar(*ptr++);
		}
	}
}
