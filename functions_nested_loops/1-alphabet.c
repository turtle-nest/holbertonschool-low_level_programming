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

void _putchar(char c) {

}

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

