#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i, j;
    int num;
    char str_num[20];  /* Fixed-size buffer for converting number to string */

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        num = va_arg(args, int);
        convert_to_string(num, str_num);  /* Convert the number to string in-place */

        /* Print the converted number */
        for (j = 0; str_num[j]; j++)
            _putchar(str_num[j]);

        /* Print the separator */
        if (separator != NULL && i != n - 1)
        {
            for (j = 0; separator[j]; j++)
                _putchar(separator[j]);
        }
    }

    va_end(args);
    _putchar('\n');
}

/**
 * convert_to_string - Converts an integer to a string.
 * @num: The integer to convert.
 * @str: The buffer where the string representation will be stored.
 */
void convert_to_string(int num, char *str)
{
    int len = 0, tmp = num, is_negative = 0;
    int i;

    if (num == 0)
    {
        str[len++] = '0';
        str[len] = '\0';
        return;
    }

    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }

    while (tmp != 0)
    {
        len++;
        tmp /= 10;
    }

    str[len + is_negative] = '\0';

    for (i = len + is_negative - 1; i >= 0; i--)
    {
        str[i] = (num % 10) + '0';
        num /= 10;
    }

    if (is_negative)
        str[0] = '-';
}
