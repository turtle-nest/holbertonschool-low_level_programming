#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the head of the list
 *
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

 	while (head != NULL) 
	{
        temp = head;
        head = head->next;
        free(temp);
	}
}
