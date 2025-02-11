#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: a pointer to an element of the list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
