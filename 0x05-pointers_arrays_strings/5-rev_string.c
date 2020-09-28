#include "holberton.h"

/**
 * rev_string - Function that reverses a string.
 * @s: string that will be reversed
 * Description: Function that reverses a string.
 * Return: void
 *
 */

void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;
	while (s[a] != '\0')
		a++;

	a--;

	for (b = 0; b <= a; b++, a--)
	{
	temp = s[b];
	s[b] = s[a];
	s[a] = temp;
	}
}
