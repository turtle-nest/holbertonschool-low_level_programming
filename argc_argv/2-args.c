#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints all arguments it receives
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
