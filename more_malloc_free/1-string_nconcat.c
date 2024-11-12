#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2
 *
 * Return: a string or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t s1_len = strlen(s1);
size_t s2_len = strlen(s2);
size_t total_len;
char *concat_str;

if (n > s2_len)
{
n = s2_len;
}

total_len = s1_len + n + 1;

concat_str = (char *)malloc(total_len * sizeof(char));
if (concat_str == NULL)
return (NULL);

strcpy(concat_str, s1);

strncat(concat_str, s2, n);

return (concat_str);
}
