#include "main.h" 
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * @void: type void
 *
 * Description: 
(* section header: Section description)*
 * Return: Always return 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter); 
	}
	_putchar('\n');
}
