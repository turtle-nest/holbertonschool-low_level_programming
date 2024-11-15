#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - free allocation memory of dog
 * @d: pointer to struct dog_t for free
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);

free(d);
}
