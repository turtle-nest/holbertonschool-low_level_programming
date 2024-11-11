#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int i = 0, words = 0;

while (str[i])
{
while (str[i] == ' ')
i++;
if (str[i] != '\0')
words++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}

return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i = 0, j, k, word_len, word_count;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (j = 0; j < word_count; j++)
{
while (str[i] == ' ')
i++;

word_len = 0;
while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
word_len++;

words[j] = malloc((word_len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}

for (k = 0; k < word_len; k++)
words[j][k] = str[i++];
words[j][k] = '\0';
}

words[j] = NULL;
return (words);
}
