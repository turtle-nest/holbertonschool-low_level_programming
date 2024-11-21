#include "variadic_functions.h"

/**
 * print_all - prints anithing
 * @format: a list of types of arguments passed to the function
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
char separator = 0;
char *val_str;

va_start(args, format);

while (ptr && *ptr)
{
if (separator)
printf(", ");
separator = 1;

switch (*ptr)
{
case 'i':
{
int val_int = va_arg(args, int);
printf("%d", val_int);
break;
}
case 'f':
{
double val_double = va_arg(args, double);
printf("%f", val_double);
break;
}
case 'c':
{
char val_char = (char)va_arg(args, int);
printf("%c", val_char);
break;
}
case 's':
{
val_str = va_arg(args, char *);
if (val_str)
{
printf("%s", val_str);
}
else
{
printf("(nil)");
}
break;
}
default:
separator = 0;
break;
}
ptr++;
}

va_end(args);
printf("\n");
}
