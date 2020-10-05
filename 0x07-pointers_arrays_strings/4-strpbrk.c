#include "holberton.h"
/**
* _strpbrk - Function that searches a string for any of a set of bytes.
* @s: string to be checked
* @accept: string to be checked against
*
* Return: a pointer to the byte in s that matches one of
* the bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; s[i]; i++)
	{
	for (k = 0; accept[k]; k++)
	{
		if (s[i] == accept[k])
			break;
	}
	if (accept[k])
		return (s + i);
	}
return (0);
}
