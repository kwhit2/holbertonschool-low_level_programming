#include "holberton.h"

/**
* main- void
* Description: Program that prints
* Holberton, followed by a new line.
* Return:0
*/

int main(void)
{
	char *b;
	int c;

	b = "Holberton";

	for (c = 0; c < 9; c++)
	{
	_putchar(b[c]);
	}

	_putchar('\n');

	return (0);
}
