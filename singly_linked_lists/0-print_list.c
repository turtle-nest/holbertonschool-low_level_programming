#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to an element of the list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
