#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcopy - Copies a string to a destination buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the new dog's owner
 *
 * Return: NULL if failed, otherwise a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcopy(dog->name, name);

	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcopy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
