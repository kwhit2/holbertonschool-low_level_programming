#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* main - Prints the numbers from 1 to 100,
* followed by a new line.
* @:void
* Description - Fizz-Buzz
* Return:void
*
*/

int main(void)
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
