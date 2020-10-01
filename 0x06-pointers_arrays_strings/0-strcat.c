#include "holberton.h"
/**
* *_strcat -  Function that concatenates two strings.
* @dest : final string to return
* @src : source
* Description: Function that concatenates two strings.
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, k;

	i = k = 0;
	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + k)))
	{
		i++;
		k++;
	}
	return (dest);
}
