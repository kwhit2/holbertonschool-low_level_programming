#include "holberton.h"

/**
* void jack_bauer - Function that prints every
* minute of the day of Jack Bauer,
* starting from 00:00 to 23:59.
* Return:void
*
*/

void jack_bauer(void)
{
	int d1, d2;

	for (d1 = 00; d1 <= 23; d1++)
	{
	for (d2 = 00; d2 <= 59; d2++)
	{
	_putchar(d1 / 10 % 10 + '0');
	_putchar(d1 % 10 + '0');
	_putchar(':');
	_putchar(d2 / 10 % 10 + '0');
	_putchar(d2 % 10 + '0');
	_putchar('\n');
	}
}
}
