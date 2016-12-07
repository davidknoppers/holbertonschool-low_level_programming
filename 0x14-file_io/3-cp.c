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
 * main - attempts to copy from file to file
 * @ac: should be 3
 * @av: the two files to use, in sequence
 * Return: 0 on success, exit with code on failure
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int from, to, temp;
	ssize_t read_from, write_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDOLNY);
	to = open(av[2], O_RDWR | O_CREAT, 0664);
	if (from == -1)
	{
		dprintf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf("Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	while ((read_from = read(from, buffer, sizeof(buffer))) > 0)
	{
		write_to = write(to, buffer, from);
		if (from != to)
		{
			dprintf("Error: Can't read from file %s\n", av[2]);
			exit(90);
		}
	close(from);
	close(to);
	return (0);
}
