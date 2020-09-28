#include "holberton.h"

/**
 * swap_int - Function that swaps the
 * values of two integers.
 * @a: number
 * @b: number
 * Description: function that swaps the
 * values of two integers.
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
