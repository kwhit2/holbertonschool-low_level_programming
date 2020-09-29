#include "holberton.h"

/**
 * _atoi - Function that convert a string to an integer.
 * buffer pointed to by dest.
 * @s: string converted to an interger
 * Description: Function that convert a string to an integer.
 * Return: res
 *
 */

int _atoi(char *s);
{
	int res;
	int i;
	res = 0;
	for (i = 0; s[i] != '\0'; i++)
	res = res * 10 + s[i] - '0';
	return res; 
}
