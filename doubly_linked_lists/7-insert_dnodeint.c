#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * at the index idx.
 * @h: a double pointer to the head of the list.
 * @idx: the index where new node is added.
 * @n: an integer added in the list.
 *
 * Return: the address of the new node,
 * or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = add_dnodeint(h, n);

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (NULL);
	}

	temp = *h;
	i = 0;

	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}

	temp->next = new_node;

	return (new_node);
}
