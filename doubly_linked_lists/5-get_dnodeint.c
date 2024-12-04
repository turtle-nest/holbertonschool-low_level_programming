#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of a node
 *
 * Return: the index or null
 * if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		 return (head);

		 head = head->next;
		 i++;
	}

	return (NULL);
}
