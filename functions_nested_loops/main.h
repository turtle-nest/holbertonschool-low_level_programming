#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - 10 times the alphabet, in lowercase, followed by a new line.
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
            putchar(*ptr++);
        }
    }
}


#endif
