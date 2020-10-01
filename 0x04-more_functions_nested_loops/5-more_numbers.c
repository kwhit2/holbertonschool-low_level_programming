#include "holberton.h"

/**
* more_numbers- void
* @void: number
* Description - Prints 0-14 10x
* followed by a newline.
* Return:void
*
*/

void more_numbers(void)
{
	int num;
	int row;

	for (row = 0; row <= 9; row++)
	{
	for (num = 0; num <= 14; num++)
	{
		if (num > 9)
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}
