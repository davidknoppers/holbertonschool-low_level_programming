#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a given number of chars from file
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of letters successfully printed
 */
size_t read_textfile(const char *filename, size_t letters)
{

	size_t i;
	FILE *file;
	int temp;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (!file)
		return (0);

	i = 0;
	while (i < letters && (temp = getc(file)) != EOF)
	{
		putchar(temp);
		i++;
	}
	fclose(file);

	return (i);
}
