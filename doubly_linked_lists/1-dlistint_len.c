#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: a pointer to an element of the list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
