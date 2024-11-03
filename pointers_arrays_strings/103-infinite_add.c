#include "main.h"
#include <string.h>
/**
 *infinite_add - adds two numbers.
 * @n1: n is a number
 * @n2: a number
 * @r: is a buffer used to store the result
 * @size_r: the buffer size
 *
 * Description: adds two numbers.
 *
 * Return: 0 if result not stored in r, otherwise r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, i, j, k;
int start, end;

len1 = strlen(n1);
len2 = strlen(n2);
carry = 0;
i = len1 - 1;
j = len2 - 1;
k = 0;

if (size_r <= (len1 > len2 ? len1 : len2) +1)
{
return (0);
}

while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
int digit2 = (j >= 0) ? n2[j--] - '0' : 0;
int sum = digit1 + digit2 + carry;

carry = sum / 10;
r[k++] = (sum % 10) + '0';
}

if (k >= size_r)
{
return (0);
}

r[k] = '\0';

for (start = 0, end = k - 1; start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}

return (r);
}
