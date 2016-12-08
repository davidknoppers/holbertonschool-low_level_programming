#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>
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
 * close_file - attempts to close a file
 * @file: int representing file
 * Return: 0 if closed, -1 if not
 */
int close_file(int file)
{
	int i;

	temp = close(file);
	if (i == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", file);
		return (-1);
	}
	return (0);
}
/**
 * main - attempts to copy from file to file
 * @ac: should be 3
 * @av: the two files to use, in sequence
 * Return: 0 on success, exit with code on failure
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int from, to;
	ssize_t read_from, write_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	to = open(av[2], O_WRONLY | O_CREAT, 0664);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	while ((read_from = read(from, buffer, sizeof(buffer))) > 0)
	{
		write_to = write(to, buffer, from);
		if (read_from != write_to || read_from < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[2]);
			exit(99);
		}
	}
	if (close_file(from) == -1 || close_file(to) == -1)
		exit(100);
	return (0);
}
