#include "holberton.h"

/**
 * _atoi - Function that convert a string to an integer.
 * buffer pointed to by dest.
 * @s: string converted to an interger
 * Description: Function that convert a string to an integer.
 * Return: res
 *
 */

int _atoi(char *s)
{
	unsigned int a;
	int i, min, res; /** i, minus, result */

	i = min = res = a = 0;
	min = -1;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
	min *= -1;

	if (s[i] >= '0' && s[i] <= '9')
	{
	res *= 10;
	res -= (s[i] - '0');
	a = 1;
	}
	else if (a == 1)
	break;
	i++;
	}
	res *= min;
	return (res); /** return result */
}
