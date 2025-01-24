#include <unistd.h>

/**
 * main - Entry point of the program
 * 
 * Description: This function prints a specific string to the standard error.
 *
 * Return: Always returns 1 (Error)
 */
int main(void)
{
	const char message[] = 
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
