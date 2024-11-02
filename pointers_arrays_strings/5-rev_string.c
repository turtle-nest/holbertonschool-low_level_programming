#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: is a string
 *
 * Description: reverses a string.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i;

	while (s[length])
	{
	length++;
	}

	for (i = 0; i < length / 2; i++)
	{
	temp = s[i];
	s[i] = s[length - 1 - i];
	s[length - 1 - i] = temp;
	}
}
