#include "main.h"
/**
 * main - checks the instructions
 * @void: type int
 *
 * Description:
(* section header: Section description)*
 * Return: Always return 0.
 */

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}
