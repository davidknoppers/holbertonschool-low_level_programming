#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - attempts to copy from file to file
 * @ac: should be 3
 * @av: the two files to use, in sequence
 * Return: 0 on success, exit with code on failure
 */
int main(int ac, char **av)
{
	char buffer[1204];
	int from, to, bytes, error_check;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (av[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]), exit(99);
	}
	error_check = bytes = 1;
	while (bytes)
	{
		bytes = read(from, buffer, 1204);
		if (bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (bytes > 0)
			error_check = write(to, buffer, bytes);
		if (error_check == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	}
	error_check = close(from);
	if (error_check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	error_check = close(to);
	if (error_check == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
