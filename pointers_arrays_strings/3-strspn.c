#include "main.h"
/**
 * _strspn - calcule la longueur d'un préfixe de sous-chaîne
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères acceptés
 *
 * Return: le nombre d'octets dans le segment initial de s qui
 *         ne contiennent que des caractères de accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
break;
}
}
if (!accept[i])
{
break;
}

s++;
}

return (count);
}

