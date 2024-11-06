#include "main.h"
/**
 * _strchr - localise un caractère dans une chaîne
 * @s: chaîne de caractères à parcourir
 * @c: caractère à trouver
 *
 * Return: pointeur vers c dans s, ou NULL si non trouvé
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')
{
return (s);
}

return (NULL);
}

