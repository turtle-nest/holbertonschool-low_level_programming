#include "main.h"
/**
 * jack_bauer - checks the instructions
 * @void: void
 *
 * Description: 24h chrono
(* section header: Section description)*
 * Return: Always return 0.
 */

void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
