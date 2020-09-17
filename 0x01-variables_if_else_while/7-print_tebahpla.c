#include <stdio.h>

/**
* main- void
* Description: Prints the lowercase alphabet
* in reverse, followed by a new line.
* Return:0
*/

int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
