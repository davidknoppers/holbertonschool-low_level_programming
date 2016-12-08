#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * _strlen - returns length of char string
 * @s: ptr to str
 * Return: strlen, an int
 */
int _strlen(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * append_text_to_file - attempts to append to file
 * @filename: name of the file
 * @text_content: number of letters to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, j, temp;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND, 0664);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	j = _strlen(text_content);
	temp = write(file, text_content, j);

	close(file);
	if (temp == -1)
		return (-1);
	return (1);
}
