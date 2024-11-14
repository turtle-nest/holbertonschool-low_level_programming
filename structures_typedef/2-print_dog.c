#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: structure dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
if (d->name == NULL || d->age == 0 || d->owner == NULL)
{
printf("Name : (nil)");
printf("Age : (nil)");
printf("Owner : (nil)");
}

else
{
printf("Name : %s\n", d->name);
printf("Age : %f\n", d->age);
printf("Owner : %s\n", d->owner);
}

return;
}
