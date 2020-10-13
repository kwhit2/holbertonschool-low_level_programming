#include "holberton.h"
#include <stdlib.h>
/**
* *argstostr- Function that concatenates all the arguments of your program.
* @ac: int
* @av: double pointer
*
* Return: NULL if ac == 0 or av == NULL and/or
* a pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);
}
