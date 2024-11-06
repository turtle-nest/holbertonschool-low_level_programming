#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @:
 *
 * Description: prints the number of arguments passed into it.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
