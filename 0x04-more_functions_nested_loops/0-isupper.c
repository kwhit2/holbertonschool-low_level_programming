#include "holberton.h"

/**
 * _isupper - Checks for Uppercase character.
 *@c: Uppercase A-Z
 *
 *Description: Returns (1) if c is uppercase,
 *else return (0)
 *section header: Section description
 *Return: returns int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
