#include <stdio.h>
/**
 * main - checks the instructions
 * @void: void
 *
 * Description:prints all possible combinations of single-digit numbers
(* section header: Section description)*
 * Return: 0.
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}

