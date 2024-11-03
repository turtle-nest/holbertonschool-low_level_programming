#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the instructions
 * @void: void.
 *
 * Description: all the numbers of base 16 in lowercase
(* section header: Section description)*
 * Return: 0.
 */
int main(void)
{
int num;

for (num = 0; num < 16; num++)
{
if (num < 10)
putchar(num + '0');
else
putchar(num - 10 + 'a');
}

putchar('\n');

return (0);
}
