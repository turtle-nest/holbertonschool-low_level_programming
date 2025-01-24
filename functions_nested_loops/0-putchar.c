/**
 * main - checks the instructions
 * @void: none
 *
 * Description:  prints _putchar, followed by a new line.
 * (* section header: Section description)*
 * Return: none
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#include <unistd.h>

int main(void)
{
	char msg[] = "_putchar\n";

	write(1, msg, sizeof(msg) - 1);

	return (0);
}
