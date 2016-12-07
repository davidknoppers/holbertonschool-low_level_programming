#include <stdio.h>
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
 * read_textfile - reads a given number of chars from file
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of letters successfully printed
 */
int create_file(const char *filename, char *text_content)
{
	int file, j, temp;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT, 0600);

	if (file == -1)
		return (-1);

	j = _strlen(text_content);
	temp = write(file, text_content, j);

	if (temp == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
