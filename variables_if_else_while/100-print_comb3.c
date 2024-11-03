#include <stdio.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints all possible different combinations of two digits.
(* section header: Section description)*
 * Return: none
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
