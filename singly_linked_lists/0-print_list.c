#include "lists.h"
#include "lists.h"

/**
 * str_length - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 * 
 * Return: The length of the string.
 */
size_t str_length(const char *str)
{
    size_t length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return (length);
}
#include "lists.h"
#include <stdio.h>

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
        printf("[%lu] %s\n", str_length(h->str), h->str);
        h = h->next;
        count++;
    }
    printf("-> %lu elements\n", count);

    return (count);
}
