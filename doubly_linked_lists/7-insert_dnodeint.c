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
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Parcourir la liste jusqu'à l'index ou la fin */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* Si l'index est invalide ou si on atteint la fin */
	if (!temp || (i < idx - 1))
		return (NULL);

	/* Insérer à la fin si temp->next est NULL */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Créer le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	/* Ajuster les pointeurs pour insérer le nouveau nœud */
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
