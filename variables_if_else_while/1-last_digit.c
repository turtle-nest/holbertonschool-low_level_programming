#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: 
(* section header: Section description)*
 * Return: none
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n < 5)
		printf("%d and is greater than 5", n);
	if (n == 0)
		printf("%d and is 0", n);
	else 
		printf("%d and is less than 6 and not 0", n);
	return (0);
}
