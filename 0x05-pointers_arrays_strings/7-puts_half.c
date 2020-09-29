#include "holberton.h"

/**
 * puts_half - Function that prints half
 * of a string, followed by a new line.
 * @str: string that is printed every other character
 * Description: Function that prints half
 * of a string, followed by a new line.
 * Return: void
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	if (i % 2 != 0)
	{
	i += 1;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
