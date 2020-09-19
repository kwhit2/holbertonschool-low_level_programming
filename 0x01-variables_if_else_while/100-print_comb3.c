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

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 < '9'; d2++)
		{
			putchar(d1);
			putchar(d2);

			if (d1 == '8' && d2 == '9')
			{
			putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}

	}

	return (0);
}
