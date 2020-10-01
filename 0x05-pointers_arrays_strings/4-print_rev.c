#include "holberton.h"

/**
 * print_rev - Function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 * Description: Function that prints a string,
 * in reverse, followed by a new line.
 * Return: void
 *
 */

void print_rev(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;

	for (a -= 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
