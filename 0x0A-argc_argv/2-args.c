#include <stdio.h>
#include <stdlib.h>
/**
* main- Prints arguments
* @argc: number of arguments
* @argv: name of arguments
* description: Prints arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

return (0);
}
