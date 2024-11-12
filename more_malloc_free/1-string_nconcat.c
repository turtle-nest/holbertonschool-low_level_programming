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
size_t i, j;

if (n > s2_len)
{
n = s2_len;
}

total_len = s1_len + n + 1;

concat_str = (char *)malloc(total_len * sizeof(char));
if (concat_str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
{
concat_str[i] = s1[i];
}

for (j = 0; j < n; j++)
{
concat_str[i + j] = s2[j];
}

concat_str[i + j] = '\0';

return (concat_str);
}
