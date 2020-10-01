#include "holberton.h"

/**
 * _puts - Function that prints a string,
 * followed by a new line, to stdout.
 * @str: string
 * Description: Function that prints a string,
 * followed by a new line, to stdout.
 * Return: void
 *
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
