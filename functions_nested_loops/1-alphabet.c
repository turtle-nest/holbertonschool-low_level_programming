#include "main.h"

void _putchar(char c) {
    // Assuming you are using a write system call or similar
    write(1, &c, 1); // This uses the write system call to print
}

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}


int _putchar(char c);
void print_alphabet(void);


