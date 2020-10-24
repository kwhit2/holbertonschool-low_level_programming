#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* print_strings- Function that prints strings, followed by a new line.
* @separator: const char pointer
* @n: unsigned int
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{

	str = va_arg(args, char *);

	if (str == NULL)
	printf("(nil)");

	else
	{
		printf("%s", str);
	}

	if (separator != NULL)
	{
		if (i < n - 1)
		printf("%s", separator);
	}
}

putchar('\n');
va_end(args);
}
