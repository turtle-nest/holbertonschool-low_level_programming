#include "main.h"
/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints 10 times the alphabet, in lowercase, followed by a new line.
(* section header: Section description)*
 * Return: none
 */

void print_alphabet_x10(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i;

    for (i = 0; i < 10; i++)
    {
        char *ptr = alphabet;
        while (*ptr)
        {
           _ putchar(*ptr++);
        }
    }
}
