#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @str: a string
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *create_node(const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		exit(1);

	new_node->str = strdup(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a double pointer to an element of the list
 * @str: a string
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = create_node(str);
	list_t *temp;
	unsigned int len = 0;

	if (*head == NULL)
	{
		*head = new_node;
		return(new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	while (str[len] != '\0')
        len++;

	new_node->len = len;
	temp->next = new_node;

	return (new_node);
}
