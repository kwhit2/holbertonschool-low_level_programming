#include <stdio.h>

/**
* main- void
* Description: Prints all possible
* different combinations of three digits.
* Return:0
*/

int main(void)
{
	int d1, d2, d3;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			for (d3 = d2 + 1; d3 <= '9'; d3++)
			{

			putchar(d1);
			putchar(d2);
			putchar(d3);

		if (d1 == '7' && d2 == '8' && d3 == '9')
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
}
	return (0);
}
