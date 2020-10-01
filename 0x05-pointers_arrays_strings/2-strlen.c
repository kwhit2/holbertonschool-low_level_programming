#include "holberton.h"

/**
 * _strlen - Function that returns
 * the length of a string.
 * @s: string
 * Description: Function that returns
 * the length of a string.
 * Return: ln
 *
 */

int _strlen(char *s)
{
	int ln;

	ln = 0;

	while (s[ln] != '\0')
		ln++;

	return (ln);
}
