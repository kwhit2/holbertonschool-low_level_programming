#include "holberton.h"

/**
 *int _isalpha - function that checks for
 * alphabetic character.
 *@c: Alpha characters
 *
 *Description: Returns 1 if c is lowercase, else 0
 *section header: Section description
 *Return: 1 if a letter or 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
