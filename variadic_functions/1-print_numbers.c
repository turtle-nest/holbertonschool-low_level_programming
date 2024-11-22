#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;
char *str_num;

va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, int);
str_num = convert_to_string(num);
for (int j = 0; str_num[j]; j++)
_putchar(str_num[j]);
free(str_num);

if (separator != NULL && i != n - 1)
{
for (int j = 0; separator[j]; j++)
_putchar(separator[j]);
}
}

va_end(args);
_putchar('\n');
}

/**
 * convert_to_string - Converts an integer to a string.
 * @num: The integer to convert.
 *
 * Return: Pointer to the string representation of the integer.
 */
char *convert_to_string(int num)
{
int len = num == 0 ? 1 : 0, tmp = num;
char *str;
int is_negative = num < 0;

if (is_negative)
num = -num;

while (tmp != 0)
{
len++;
tmp /= 10;
}

str = malloc(len + is_negative + 1);
if (!str)
return (NULL);

str[len + is_negative] = '\0';
for (int i = len + is_negative - 1; i >= 0; i--)
{
str[i] = (num % 10) + '0';
num /= 10;
}

if (is_negative)
str[0] = '-';

return (str);
}
