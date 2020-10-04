#include "holberton.h"
/**
* _strncat - appends src to the dest string
* @dest: string to append by src
* @src: string to append to dest
* @n : highest possible number of bytes to append
*
* Return: address of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i)) /* same as dest[i] */
		i++;

	while (j < n && *(src + j)) /* shorthand is src[i] */
	{
	*(dest + i) = *(src + j); /* dest[i] = src[i] */
		i++;
		j++;
	}

	if (j < n) /*if Statement may not be needed. Got correct output w/o it*/
	*(dest + i) = *(src + j);

return (dest);
}
