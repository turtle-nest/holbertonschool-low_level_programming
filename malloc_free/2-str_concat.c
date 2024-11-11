#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, length1 = 0, length2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

str = malloc((length1 + length2 + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < length1; i++)
str[i] = s1[i];

for (j = 0; j < length2; j++)
str[i +j] = s2[j];

str[i + j] = '\0';

return (str);
}
