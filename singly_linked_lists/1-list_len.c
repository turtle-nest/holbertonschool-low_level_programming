#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: a pointer to an element of the list
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
