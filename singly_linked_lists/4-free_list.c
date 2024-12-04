#include "lists.h"

/**
 * free_list- frees a list_t list
 * @head: a pointer to the elements of the list
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	head = head->next;
	free(head);
}
