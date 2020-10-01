#include "holberton.h"

/**
 * *rot13 - Function that encodes a string using rot13.
 * @s: string to be encoded
 * Description: Function that encodes a string using rot13.
 * Return: s
 *
 */

char *rot13(char *s)
{
	int i, k;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
	for (k = 0; k < 52; k++)
	{
		if (a[k] == *(s + i))
		{
		*(s + i) = b[k];
		break;
		}
	}
	}
	return (s);
}
