#include "holberton.h"
#include <stdlib.h>
/**
* *argstostr- Function that concatenates all the arguments of your program.
* @ac: Number of arguments passed into the program
* @av: Array of pointers to the arguments
*
* Return: NULL if ac == 0 or av == NULL and/or
* a pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int buffer = 0;
	int len = 0;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)

	for (j = 0; av[i][j]; j++)
	len++;                  /* gets length of every char in arguments */

	ptr = (char *)malloc(len * sizeof(char) + ac + 1);
	if (!ptr)
		return (NULL);


	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, buffer++)
		ptr[buffer] = av[i][j];

	ptr[buffer] = '\n';
	buffer++;
}
ptr[buffer] = '\0';
return (ptr);
}
