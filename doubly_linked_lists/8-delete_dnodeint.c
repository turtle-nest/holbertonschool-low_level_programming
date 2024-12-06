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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}

	free(temp);
	return (1);
}
