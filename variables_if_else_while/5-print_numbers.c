#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the instructions
 * @void: void
 *
 * Description: all digit numbers base 10 starting from 0
(* section header: Section description)*
 * Return: 0.
 */
int main(void)
{
int number; 
for (number = 0; number <= 9; number++) 
putchar(number + '0'); 
putchar('\n'); 
return (0);
}
