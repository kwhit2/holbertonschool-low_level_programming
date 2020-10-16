#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - Function that returns
 * the length of a string.
 * @s: string
 * Description: Function that returns
 * the length of a string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int ln; /* length */

	ln = 0;

	while (s[ln] != '\0')
		ln++;

	return (ln);
}
/**
 * *string_nconcat- Function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 *
 * Return: Pointer to string or NULL if
 * s1||s2 empty or malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	if ((int) n > _strlen(s2))
		n = _strlen(s2);
	newstr = malloc(_strlen(s1) + n + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0, k = 0; s1[i] != '\0'; i++, k++)/*getting first string */
		newstr[k] = s1[i];
	for (i = 0; i != n; i++, k++)/*1ststring stays incremented&nextstarts*/
		newstr[k] = s2[i]; /*with removing null byte @end of 1ststring*/
newstr[k] = '\0';
return (newstr);
}
