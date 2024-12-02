#include "lists.h"

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
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		exit (1);

	newNode->next = *head;

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

    while (str[len] != '\0')
        len++;

	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
