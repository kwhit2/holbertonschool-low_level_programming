/**
* main- void
* Description: Prints the size of various types on the
* computer it is compiled and run on.
* Return:0
*/

#include<stdio.h>

int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte()s\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
