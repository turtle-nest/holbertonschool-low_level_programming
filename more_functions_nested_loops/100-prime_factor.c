#include "main.h"

/**
 * - checks for uppercase character.
 *@c: the character to be checked
 *
 * Description: a function that checks for uppercase character
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
#include <stdio.h>
#include <math.h>

long largest_prime_factor(long n) {
    long max_prime = -1;
    long i;

    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2) {
        max_prime = n;
    }

    return max_prime;
}
