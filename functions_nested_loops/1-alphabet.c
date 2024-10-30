/**
 * main - checks the instructions
 * @void: none
 *
 * Description: prints the alphabet, in lowercase, followed by a new line. 
 * (* section header: Section description)*
 * Return: none
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <unistd.h>

void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i;

    for (i = 0; alphabet[i] != '\0'; i++)
    {
        _putchar(alphabet[i]);
    }
}
