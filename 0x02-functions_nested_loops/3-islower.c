#include "holberton.h"

/**
* int _islower - Prints the alphabet,
* 10x in lowercase, followed by a new line.
* Return:0 or 1
*
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
