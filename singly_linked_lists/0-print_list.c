#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list to be printed.
 * 
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%lu] %s\n", strlen(h->str), h->str);
        h = h->next;
        count++;
    }
    printf("-> %lu elements\n", count);

    return (count);
}
