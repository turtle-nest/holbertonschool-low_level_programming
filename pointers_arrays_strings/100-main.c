#include "main.h"
#include <stdio.h>

/**
 * main - vérifie le code
 *
 * Return: Toujours 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}

