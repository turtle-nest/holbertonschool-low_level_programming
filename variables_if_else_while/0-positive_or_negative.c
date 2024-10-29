#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else 
		printf("%d is negative", n);
	return (0);
}
