#include "main.h"
/**
 * print_to_98 - checks the instructions
 * @n: type int
 *
 * Description: prints 98
 * Return: Always return 0.
 */
void print_to_98(int n)
{
	char num[4];
	int temp, i;
	while (n != 98)
	{
		temp = n;
		i = 0;

		if (n < 0)
		{
			_putchar('-');
			temp = -temp;
		}
		while (temp > 0)
		{
			num[i++] = (temp % 10) + '0';
			temp /= 10;
		}
		while (i > 0)
		{
			_putchar(num[--i]);
		}
		if (n == 0)
		{
			_putchar('0');
		}
		_putchar(',');
		_putchar(' ');
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
