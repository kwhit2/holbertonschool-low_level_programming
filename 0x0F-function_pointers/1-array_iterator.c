#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator- Function that executes a function given
* as a parameter on each element of an array.
* @array: pointer to character array in main
* @size: size/length of array
* @action: void pointer function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}
