#include "holberton.h"
/**
* check_sqrt - checks for square root of c
* @a: guess at square root
* @b: number to find sqaure root of
* Return: square root of c or -1 if none
*/
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));
}
/**
* _sqrt_recursion - Function that returns the natural
* square root of a number.
* @n: number to find square root of
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
		return (check_sqrt(1, n));
}
