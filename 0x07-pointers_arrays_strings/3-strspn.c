#include "holberton.h"
/**
* _strspn - Function that gets the length of a prefix substring.
* @s: string to be checked
* @accept: string to be checked against
*
* Return: number of bytes of s in accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				break;
		}
		if (!accept[k])
			break;
	}
	return (i);
}
