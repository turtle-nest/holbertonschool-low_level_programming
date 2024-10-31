#ifndef main_h
#define main_h
#include <time.h>
/**
 * TASK 1
 * print_alphabet_x10 : prints the alphabet, in lowercase, followed by a new line.
 */
int _putchar(char c);

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
#endif
