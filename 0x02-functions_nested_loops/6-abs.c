#include "holberton.h"

/**
* _abs - print_sign function that computes
* the absolute value of an integer.
* @r: digit
* Return: r and -r
*
*/

int _abs(int r)
{
	if (r >= 0)
		return (r);

	else
		return (-r);
}
