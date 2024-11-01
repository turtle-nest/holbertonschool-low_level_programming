#include "1-alphabet.h"
#include "main.h"
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
(* section header: Section description)*
 * Return: none
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
