#include "lists.h"

/**
 * string_length - Calculates the length of a string.
 * @str: The string whose length to calculate.
 * 
 * Return: The length of the string.
 */
int string_length(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: a double pointer to an element of the list
 * @str: a string
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

 	_putchar(string_length(newNode->str) + '0');
    _putchar('\n');
    _putchar(newNode->str);


	return (newNode);
}
