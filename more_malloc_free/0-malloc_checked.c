#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: an unsigned integers
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = (void *)malloc(b * sizeof(unsigned int));
if (ptr == NULL)
exit(98);

return (ptr);
}
