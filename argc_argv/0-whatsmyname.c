#include "main.h"
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
(void)argc;

for (i = 0; argv[0][i] != '\0'; i++)
{
_putchar(argv[0][i]);
}
_putchar('\n');
return (0);
}

