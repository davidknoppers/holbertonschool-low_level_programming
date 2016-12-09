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

	ssize_t letter_count, temp;
	char *buffer;
	int file;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	letter_count = read(file, buffer, letters);
	if (letter_count == -1)
		return (0);
	letter_count = write(STDOUT_FILENO, buffer, letter_count);
	if (letter_count == -1)
		return (0);


	free(buffer);

	temp = close(file);
	if (temp == -1)
		return (0);
	free(buffer);
	return (letter_count);
}
