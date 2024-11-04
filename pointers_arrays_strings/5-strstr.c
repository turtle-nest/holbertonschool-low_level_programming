#include "main.h"
/**
 * _strstr - localise une sous-chaîne dans une chaîne
 * @haystack: chaîne à analyser
 * @needle: sous-chaîne à rechercher
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si la sous-chaîne n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}

while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*n && (*h == *n))
{
h++;
n++;
}

if (!*n)
{
return (haystack);
}

haystack++;
}

return (NULL);
}

