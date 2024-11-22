#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        if (i > 0 && separator != NULL)
            printf("%s", separator);  /* Print separator if it's not NULL */
        printf("%d", va_arg(args, int));  /* Print the number */
    }

    va_end(args);
    printf("\n");  /* Print a new line at the end */
}
