#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - Struct printer
 *
 * @type: The type to print
 * @func: The function associated
 */
typedef struct printer
{
char type;
void (*func)(va_list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
