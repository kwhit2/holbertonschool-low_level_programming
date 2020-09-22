#include "holberton.h"

/**
* int print_last_digit -  Function that
* prints the last digit of a number.
* Return:i
*
*/

int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
}
