#include "holberton.h"

/**
* print_triangle - Prints a triangle,
* followed by a new line.
* @size:
* Description - Prints a triangle
* Return:void
*
*/

void print_triangle(int size)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if (a % 5 == 0)
		{
			printf("Buzz");
		}
		if (a % 3 != 0 && a % 5 != 0)
		{
			printf("%d", a);
		}
		if (a != 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
