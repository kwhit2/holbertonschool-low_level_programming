#include "holberton.h"

/**
* int _isalpha - Function that checks
* for alphabetic character.
* Return:0
*
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
