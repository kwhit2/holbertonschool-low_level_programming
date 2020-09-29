#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of
 * an array of integers, followed by a new line.
 * buffer pointed to by dest.
 * @a: pointer
 * @n: number of elements of the array to be printed
 * Description: Function that prints n elements of
 * an array of integers, followed by a new line.
 * Return: 0
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i < (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
