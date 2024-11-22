#include "variadic_functions.h"

/**
 * print_int - print an int
 * @args: argument of a variadic list
 *
 * Return: None.
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: argument of a variadic list
 *
 * Return: None.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_char - prints a char
 * @args: argument of a variadic list
 *
 * Return: None.
 */
void print_char(va_list args)
{
printf("%c", (char)va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: argument of a variadic list
 *
 * Return: None.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (!str)
{
printf("(nil)");
return;
}

printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0, j;
char *separator = "";
va_list args;

printer_t printers[] = 
{
{'i', print_int},
{'f', print_float},
{'c', print_char},
{'s', print_string},
{'\0', NULL}
};

va_start(args, format);

while (format[i] != '\0')
{
j = 0;
while (printers[j].type != '\0')
{
if (format[i] == printers[j].type && format != NULL)
{
printf("%s", separator);
printers[j].func(args);
separator = ", ";
break;
}
j++;
}
i++;
}

va_end(args);
printf("\n");
}
