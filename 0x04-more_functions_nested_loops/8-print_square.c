#include "holberton.h"

/**
* print_square - Prints a square,
* followed by a new line.
* @size:
* Description - Prints a square,
* followed by a new line.
* Return:void
*
*/

void print_square(int size)
{
	int h, w;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
		_putchar('#');
		}

		_putchar('\n');
    }
		if (size <= 0)
		{
		_putchar('\n');
		}
}
