#include "holberton.h"

/**
* get_bit - Function that returns the value of a bit at a given index.
* @index: index of bits
* @n: int
* Return: the value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int mask;

	if (index > 32)
		return (-1);
	mask = 1 << index;
	mask = mask & n;
	mask = mask >> index;

return (mask);
}
