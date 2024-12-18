#include "variadic_functions.h"

/**
 * sum_them_all - adds all the parameters
 * @n: number of parameters
 *
 * Return: The result, or 0 if n is zero.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

if (n == 0)
{
return (0);
}

va_start(args, n);

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
