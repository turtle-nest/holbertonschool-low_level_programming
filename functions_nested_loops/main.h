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
/**
 * TASK 6
 *int _abs(int) : a function that computes the absolute value of an integer.
 */
int _abs(int n)
{
    if (n < 0)
    {
        return -n;
    }
    return n;
}
/**
 * TASK 7
 *
 */
/**
 * TASK 8
 *void jack_bauer(void) : a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');
            _putchar(':');
            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');
            _putchar('\n');
        }
    }
}
#endif
