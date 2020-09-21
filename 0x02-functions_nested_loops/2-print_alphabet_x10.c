#include "holberton.h"

/**
* print_alphabet - Prints the alphabet,
* 10x in lowercase, followed by a new line.
* Return:0
*
*/

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
