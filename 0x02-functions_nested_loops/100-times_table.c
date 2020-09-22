#include "holberton.h"

/**
* print_times_table - function that prints the n
* times table, starting with 0.
* @n: digit
* Return:n
*
*/

void print_times_table(int n)
{
    {
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
	_putchar('0');

	for (b = 1; b <= 9; b++)
	{
	_putchar(',');
	_putchar(' ');

	c = a * b;

	if (c <= 9)
	_putchar(' ');
	else
		_putchar((c / 10) + '0');

	_putchar((c % 10) + '0');
	}
	_putchar('\n');
    return (n);
}
