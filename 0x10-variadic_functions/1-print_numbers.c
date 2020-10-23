#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* print_numbers-  Function that prints numbers, followed by a new line.
* @separator: const char pointer
* @n: unsigned int
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, int));
	if (separator != NULL)
	{
		if (i < n - 1)
		printf("%s", separator);
	}
}
putchar('\n');
va_end(args);
}
