#include "holberton.h"

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
* create_file - Function that creates a file.
* @filename: name of file to be created
* @text_content: a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…) / if filename
* is NULL return -1
*/

int create_file(const char *filename, char *text_content)
{
int fd;
int wr;

	if (filename == NULL)
		return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

wr = write(fd, text_content, _strlen(text_content));
close(fd);

	if (wr == -1)
		return (-1);

return (1);
}
