#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 * TASK 2
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
            _putchar(*ptr++);
        }
    }
}
/**
 * TASK 3
 * int _islower(int c)  : a function that checks for lowercase character.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}
/**
 *TASK 4
 *int _isalpha(int c) :  a function that checks for alphabetic character.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
/**
 * TASK 5
 *int print_sign(int n) : a function that prints the sign of a number.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else
    {
        _putchar('-');
        return (-1);
    }
}

#endif
