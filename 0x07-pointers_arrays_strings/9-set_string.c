#include "holberton.h"
/**
* set_string - Function that sets the value of a pointer to a char.
* @s: pointer to be changed
* @to: string to change pointer to
*
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
