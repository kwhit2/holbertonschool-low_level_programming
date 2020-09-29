#include "holberton.h"

/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string that is printed every other character
 * Description: Function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * Return: void
 *
 */

void puts2(char *str)
{
	int a;

	while (str[a] != '\0')
		if (a % 2 == 0)
		_putchar(str[a]);
		a++;

	_putchar('\n');
}
