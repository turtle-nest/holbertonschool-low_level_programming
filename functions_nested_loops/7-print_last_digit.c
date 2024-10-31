/**
 * main - checks the instructions
 * @void: type int
 *
 * Description: a function that prints the last digit of a number.
(* section header: Section description)*
 * Return: Always return 0.
 */
#include "main.h"

int main(void)
{
    int r;

        print_last_digit(98);
        print_last_digit(0);
        r = print_last_digit(-1024);
        _putchar('0' + r);
        _putchar('\n');
        return (0);
}
