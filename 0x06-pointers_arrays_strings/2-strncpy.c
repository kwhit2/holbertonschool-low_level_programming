#include "holberton.h"
/**
* _strncpy - copies a string
* @dest: destination, string to be copied to
* @src: source, string to copy
* @n : highest possible number of bytes to copy
*
* Return: address of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	while (i < n)
	{
	dest[i++] = '\0';
	}

return (dest);
}
 /*
 * first for statement could be replaced with
 *
 * while (src[i] && i < n)
 *
 * and it should run just fine with less typing and reading
 * more clearly.
 *
 */
