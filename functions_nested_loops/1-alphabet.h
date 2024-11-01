#ifndef 1-alphabet_h
#define 1-alphabet_h
#include <unistd.h>
/**
 * TASK 1
 * print_alphabet_x10 : prints the alphabet, in lowercase, followed by a new line.
 */
int _putchar(char c);

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
#endif
