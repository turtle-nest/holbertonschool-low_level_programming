#include "main.h"
/**
 *_puts - prints a string
 *@str: is a string 
 *
 * Description: prints a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
