#include "variadic_functions.h"

/**
 * print_strings - prints strings with a separator between them
 * @separator: separator to be used
 * @n: is the number of strings passed to the function
 *
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *string;

if (separator == NULL)
return;

va_start (args, n);

for (i = 0; i < n; i++)
{
string = va_arg(args, char *);

if (string == NULL)
{
printf("(nil)");
}

printf("%s", string);

if (separator && i < (n - 1))
printf("%s", separator);
}

va_end(args);
printf("\n");
}
