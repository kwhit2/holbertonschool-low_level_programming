#include "holberton.h"

/**
* print_line - Draws a straight
* line in the terminal.
* @n: _
* Description - Draws a straight
* line in the terminal.
* Return:void
*
*/

void print_line(int n)
{
	int ln;

	if (n > 0)
	{
	for (ln = 0; ln <= n; ln++)
		_putchar('_');
	}
	_putchar('\n');
}
