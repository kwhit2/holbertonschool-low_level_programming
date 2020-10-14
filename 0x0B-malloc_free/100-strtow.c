#include "holberton.h"
#include <stdlib.h>
/**
* **strtow- Function that splits a string into words.
* @str: string to be split into words
*
* Return: Returns a pointer to an array of strings (words)
* NULL if str == NULL or str == "" and/or if functions fail return NULL
*/
char **strtow(char *str)
{
	char **new;
	int wrd;
	int sz = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	int mem = 0;
	int plc = 0;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	/* This check for number of words, not chars */
	while (str[sz] != '\0')
	{
		if (str[sz] == ' ')
			sz++;
		else
		{
			while (str[sz] != ' ' && str[sz] != '\0')
				sz++;
			wrd++;
		}
	}
	/* sz + 1 is to accomodate for and escape char */
	new = (char **)malloc((wrd + 1) * sizeof(char *));
	/* this while loop gets num of chars and allocated mem */
	while (str[a] != '\0')
	{
		if (str[a] == ' ')
			a++;
		else
		{
			b = 0;
			while (str[a] != ' ' && str[a] != '\0')
			{
				a++;
				b++;
			}
			new[mem] = malloc((b + 1) * sizeof(char));
			mem++;
		}
	}
	mem = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			plc = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				new[mem][plc] = str[i];
				i++;
				plc++;
			}
			new[mem][plc] = '\0';
			mem++;
		}
	}
	for (i = 0; new[i] != NULL; i++)
		printf("new[i] = %p\n", new[i]);
	new[mem] = NULL;
	return (new);
}
