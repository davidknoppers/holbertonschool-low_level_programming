#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * create_file - creates a file with a given number of chars from file
 * @filename: name of the file
 * @text_content: number of letters to print
 * Return: number of letters successfully printed
 */
int create_file(const char *filename, char *text_content)
{
	int file, error_check, bytes;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);


	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, permissions);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	bytes = 0;
	while (text_content[bytes])
		bytes++;

	if (bytes > 0)
	error_check = write(file, text_content, bytes);
	close(file);
	if (error_check == -1)
		return (-1);
	return (1);
}
