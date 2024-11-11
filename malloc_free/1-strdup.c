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
char *copy = (char*)malloc((strlen(str) + 1) * sizeof(char));

if (copy == NULL)
return (NULL);

strcpy(copy, str);

return (str);
}
