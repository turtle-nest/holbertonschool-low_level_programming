#include "main.h"
#include <stdio.h>

/**
 * main - vérifie le code
 *
 * Return: Toujours 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

