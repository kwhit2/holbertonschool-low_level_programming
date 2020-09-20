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

	for (d1 = 00; d1 <= 98; d1++)
	{
		for (d2 = d1 + 1; d2 <= 99; d2++)
		{
			putchar(d1 / 10 % 10 + '0');
			putchar(d1 % 10 + '0');
			putchar(' ');
			putchar(d2 / 10 % 10 + '0');
			putchar(d2 % 10 + '0');

			if (d1 == 98 && d2 == 99)
			{
			putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}

	}
}
	return (0);
}
