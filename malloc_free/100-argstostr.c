#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: Pointer to the new concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, total_length = 0;


if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}

str = malloc((total_length + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}
