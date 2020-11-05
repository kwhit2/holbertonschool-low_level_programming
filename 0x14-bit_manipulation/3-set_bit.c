#include "holberton.h"

/**
* set_bit - Function that sets the value of a bit to 1 at a given index.
* @index: index of bits to set
* @n: int
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;

return (1);
}
