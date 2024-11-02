#include "main.h"
/**
 *_atoi - convert a string to an integer.
 *@s: is a string
 *
 * Description: convert a string to an integer.
 *
 * Return: 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)
	{
	if (*s == '-')
	{
	sign *= -1;
	}
	else if (*s == '+')
	;
	else if (*s >= '0' && *s <= '9')
	{
	started = 1;
	num = num * 10 + (*s - '0');
	}
	else if (started)
	{
	break;
	}
	s++;
	}

	return (sign * num);
}
