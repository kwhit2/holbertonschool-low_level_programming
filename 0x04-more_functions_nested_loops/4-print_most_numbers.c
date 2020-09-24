#include "holberton.h"

/**
* print_most_numbers - Prints the numbers,
* from 0 to 9, except 2 and 4
* followed by a new line.
* @void:
* Description - Prints 0-9 but not 2 and 4
* Return:void
*
*/

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	if (a != '2' && a != '4')
	_putchar(a);
	}
	_putchar('\n');
}
