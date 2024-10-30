#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints all single digit numbers of base 10 starting from 0, followed by a new line. 
(* section header: Section description)*
 * Return: none
 */
int main(void)
{
       	int number; 
	for (number = 0; number <= 9; number++) 
		putchar(number + '0'); 
	putchar('\n'); 
	return 0;
}
