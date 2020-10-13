#include "holberton.h"
#include <stdlib.h>
/**
* *_strdup- Returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to copy
* Return: Pointer to newly allocated space in memory containing
* a copy of the string given as parameter and/or NULL if str = NULL and/or
* NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *newstr;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		newstr[i] = str[i];
	}

newstr[len] = '\0';
return (newstr);
}
