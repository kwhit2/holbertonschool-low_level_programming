#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
* positive_or_negative - Print whether the number stored
* in the variable n is positive or negative.
* @i: positive or negative
* Return:0
*/

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
