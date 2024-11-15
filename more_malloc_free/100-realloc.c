#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: s a pointer to the memory previously allocated 
 * with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: If new_size > old_size, the “added” memory should not be initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *old_data, *new_data;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
free(ptr);
return (NULL);

if (ptr == NULL)
return (malloc(new_size));

new_ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);

old_data = (char *)ptr;
new_data = (char *)new_ptr;

for (i = 0; i < old_size && i < new_size; i++)
new_data[i] = old_data[i];

free(ptr);

return (new_ptr);
}
