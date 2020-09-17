#include <stdio.h>

/**
* main- void
* Description: Prints all possible combinations
* of single-digit numbers.
* Return:0
*/

int main(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		putchar((f % 10) + '0');
		if (f == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
