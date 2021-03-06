#include "holberton.h"
/**
* _strchr - Function that locates a character in a string.
* @s: string to search through for char c
* @c: character to search for
*
* Return: A pointer to the first
* occurrence of the char c in the string s, or NULL
* if char is not found
*/
char *_strchr(char *s, char c)
{
	int i;
/* '\0' below refers to ASCII value 0 and '\0' can be subtituted for 0 */
	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
