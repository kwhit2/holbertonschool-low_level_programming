#include "holberton.h"

/**
* print_diagonal - Draws a diagonal
* line on the terminal.
* @n: _
* Description - Draws a diagonal
* line on the terminal.
* Return:void
*
*/

void print_diagonal(int n)
{
	int ln, spc;

	if (n > 0)
	{
	for (ln = 0; ln < n; ln++)
	{
	for (spc = 0; spc < ln; spc++)
		_putchar(' ');
		_putchar('\\');

		if (ln == n - 1)
		continue;

	_putchar('\n');
	}
	}
	_putchar('\n');
}
