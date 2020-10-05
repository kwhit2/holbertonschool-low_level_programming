#include "holberton.h"

/**
* _memset - Function that fills memory with a constant byte.
* @s: pointer to memory area to be filled.
* @b: character to fill memory area.
* @n: number of bytes to be filled.
* Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return (s);
}
