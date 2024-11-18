#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: The name to print
 * @f: a pointer to a print function
 * @char: char parameter of the pointed function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
