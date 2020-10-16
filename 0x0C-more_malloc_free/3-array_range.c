#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *array_range- Function that creates an array of integers.
* @min: minimum number in array
* @max: maximum number in array
*
* Return: Pointer to newly created array or
* NULL if min > max or NULL if malloc fails
*/
int *array_range(int min, int max)
{
	int *newarray;
	int i;

	if (min > max)
		return (NULL);
	newarray = malloc(((max - min) + 1) * sizeof(int));
	if (newarray == NULL)
		return (NULL);
	i = 0;
	while (min <= max) /*for (i = 0; min <= max; i++, min++) */
		newarray[i++] = min++; /* newarray[i] = min; */
return (newarray);
}
