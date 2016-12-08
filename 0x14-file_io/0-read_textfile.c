#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * read_textfile - reads a given number of chars from file
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of letters successfully printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t i, letter_count;
	char *buffer;
	int file;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	letter_count = read(file, buffer, letters);
	if (letter_count == -1)
		return (0);
	i = 0;
	while(i < letter_count)
	{
		_putchar(buffer[i]);
		i++;
	}
	close(file);
	free(buffer);

	return (i);
}
