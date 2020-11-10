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
* append_text_to_file - Function that appends text at the end of a file.
* @filename: name of file
* @text_content: a NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure / If filename is NULL return -1 /
* 1 if the file exists and -1 if the file does not exist or if you do not
* have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int wr;

	if (filename == NULL)
		return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

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
