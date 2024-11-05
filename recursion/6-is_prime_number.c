#include "main.h"
/**
 * int is_prime_number - determine if is a prime number
 * @n: the number
 *
 * Description: determine if is a prime number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */
int check_divisors(int n, int divisor)
{
if (divisor * divisor > n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (check_divisors(n, divisor + 1));
}

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_divisors(n, 2));
}
