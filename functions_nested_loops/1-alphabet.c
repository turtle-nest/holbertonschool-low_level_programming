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

int main(void)
{
	int _putchar(char c);

void print_alphabet(void)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    while (*alphabet)
    {
        _putchar(*alphabet);
        alphabet++;
    }
    _putchar('\n');
}
}
