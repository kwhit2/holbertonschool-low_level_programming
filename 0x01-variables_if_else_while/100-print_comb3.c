#include <stdio.h>

/**
* main- void
* Description: Prints all possible
* different combinations of two digits.
* Return:0
*/

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{
			if (d1 == 8 && d2 == 9)
			continue;

			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
