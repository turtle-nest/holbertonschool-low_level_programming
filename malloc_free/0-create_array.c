#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes with a specific char
 * @size: size of the array
 * @c: a char to initialize
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr = (char*)malloc(size * sizeof(char));
unsigned int i;

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
