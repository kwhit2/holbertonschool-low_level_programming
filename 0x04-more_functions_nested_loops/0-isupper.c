#include "holberton.h"

/**
 * _isupper - Checks for Uppercase character.
 *@c: Uppercase A-Z
 *@:
 *Description: Returns (1) if c is a Uppercase,
 *else return (0)
 *section header: Section description
 *Return: Returns (1) if c is uppercase,
 *else return (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
