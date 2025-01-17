#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a string
 *
 * Return: str or NULL.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
