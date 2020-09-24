#include "holberton.h"

/**
* print_numbers - Prints the numbers,
* from 0 to 9, followed by a new line.
* @void:
* Description - Prints 0-9
* Return:void
*
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
