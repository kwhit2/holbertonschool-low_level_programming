#include "holberton.h"

/**
* print_alphabet_x10 - Prints the alphabet,
* 10x in lowercase, followed by a new line.
* Return:void
*
*/

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	}
}
