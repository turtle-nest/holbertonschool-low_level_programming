#include "main.h"
/**
 *_islower - checks the instructions
 * @c: type int
 *
 * Description:a function that checks for lowercase character.
(* section header: Section description)*
 * Return: Always return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
