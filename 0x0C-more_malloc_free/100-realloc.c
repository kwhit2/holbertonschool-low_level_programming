#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* *_realloc- Function that reallocates a memory block using malloc and free
* @ptr: pointer to move data from
* @old_size: size of current pointer
* @new_size: size of new pointer
* Return: Pointer to space allocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = ((char *)ptr)[i];
	free(ptr);
	return (new);
}
