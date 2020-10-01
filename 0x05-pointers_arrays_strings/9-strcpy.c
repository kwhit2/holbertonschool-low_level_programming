#include "holberton.h"

/**
 * *_strcpy - Function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the
 * buffer pointed to by dest.
 * @dest: destination of string
 * @src: source of string to be copied to dest
 * Description: Function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the
 * buffer pointed to by dest.
 * Return: void
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
