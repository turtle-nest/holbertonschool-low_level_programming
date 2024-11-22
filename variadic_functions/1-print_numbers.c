#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a separator between them
 * @separator: separator to be used
 * @n: number of integers
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int number;

if (separator == NULL)
return;

va_start (args, n);

for (i = 0; i < n; i++)
{
number = va_arg(args, int);
printf("%d", number);

if (separator && i < (n - 1))
printf("%s", separator);
}

va_end(args);
printf("\n");
}
