#include "holberton.h"

/**
* _abs - print_sign function that computes
* the absolute value of an integer.
* @n: digit
* Return: r and -r
*
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
		return (-n);
}
