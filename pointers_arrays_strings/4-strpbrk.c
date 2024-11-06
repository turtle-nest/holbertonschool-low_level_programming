#include "main.h"
/**
 * _strpbrk - recherche un caractère dans une chaîne
 * @s: chaîne de caractères à analyser
 * @accept: chaîne de caractères acceptés
 *
 * Return: pointeur vers le premier caractère de s qui est dans accept,
 *         ou NULL si aucun caractère n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}

s++;
}

return (NULL);
}
