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

	/* Parcourir la liste jusqu'à atteindre l'index ou la fin */
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	/* Retourner NULL si l'index dépasse la taille de la liste */
	return (NULL);
}
