#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
(* section header: Section description)*
 * Return: none
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
