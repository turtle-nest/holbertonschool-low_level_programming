/**
 * main - checks the instructions
 * @void: type int
 *
 * Description: a function that computes the absolute value of an integer.
(* section header: Section description)*
 * Return: Always return 0.
 */
#include "main.h"

int main(void)
{
    int r;

        r = _abs(-1);
        printf("%d\n", r);
        r = _abs(0);
        printf("%d\n", r);
        r = _abs(1);
        printf("%d\n", r);
        r = _abs(-98);
        printf("%d\n", r);
        return (0);
}

