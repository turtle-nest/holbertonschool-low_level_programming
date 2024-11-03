#include "main.h"
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
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = 0, len2 = 0, carry = 0, i, j, k, l;

    while (n1[len1] != '\0') len1++;
    while (n2[len2] != '\0') len2++;

    if (len1 > size_r || len2 > size_r || len1 + len2 + 1 > size_r) {
        return 0;
    }

    r[len1 + len2] = '\0';
    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += n1[i--] - '0';
        if (j >= 0) sum += n2[j--] - '0';

        carry = sum / 10;
        r[len1 + len2 - 1 - k++] = (sum % 10) + '0';
    }

    if (k >= size_r) return 0;

    for (l = 0; l < k / 2; l++) {
        char temp = r[l];
        r[l] = r[k - 1 - l];
        r[k - 1 - l] = temp;
    }

    return r;
}
