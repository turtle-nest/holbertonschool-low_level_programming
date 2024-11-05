#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to evaluate
 *
 * Description: similar function strlen
 *
 * Return: the lenght of the string s.
 */
int _strlen_recursion(char *s)
{
int i;

i=0;
while (s[i] != '\0')
	i++;
return (i);
}

