#include "holberton.h"
/**
* _strlen - Return length of string.
* @str: string to be check
* Return: Return length of string.
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}
/**
* chck_palindrome - Checks if
* string is a palindrome
* @l: left hand index
* @r: right hand index
* @p: possible palindrome
* Return: 1 if palindrome, 0 if not.
*/
int chck_palindrome(int l, int r, char *p)
{
if (l >= r)
return (1);

else if (p[l] != p[r])
return (0);
else
return (chck_palindrome(l + 1, r - 1, p));
}
/**
* is_palindrome - Function that returns 1 if a string
* is a palindrome and 0 if not.
* (empty string is palindrome)
* @s: string to be checked
* Return: 1 if palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
int i;
i = _strlen(s) - 1;
return (chck_palindrome(0, i, s));
}
