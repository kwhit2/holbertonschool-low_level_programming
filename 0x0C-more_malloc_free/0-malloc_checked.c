#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array- Function that allocates memory using malloc.
* @b: memory allocated
*
* description: Function that allocates memory using malloc.
* Return: A pointer to the allocated memory. if malloc fails,
* the malloc_checked function should cause normal process
* termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
return (ptr);
}
