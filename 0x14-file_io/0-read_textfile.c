#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a given number of chars from file
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of letters successfully printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t letter_count, write_count, error_check;
	char *buffer;
	int file;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	letter_count = read(file, buffer, letters);
	if (letter_count == -1)
	{
		free(buffer);
		return (0);
	}
	if (letter_count > 0)
		write_count = write(STDOUT_FILENO, buffer, letter_count);
	if (write_count < letter_count)
	{
		free(buffer);
		return (0);
	}

	error_check = close(file);
	if (error_check == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (write_count);
}
