#include <stdio.h>
#include "holberton.h"
/**
 * is_printable - checks if a char is printable
 *
 * @chr: char input
 * Return: the char if printable, . otherwise
 */
char is_printable(char chr)
{
	if (chr >= ' ' && chr <= '~')
		return (chr);
	return ('.');
}
/**
 * print_buffer - prints a buffer jk lol
 *
 * @b: pointer to beginning of buffer
 * @size: the size of the buffer
 * Return: none
 */
void print_buffer(char *b, int size)
{
	char temp;
	int startline, endline, permasize;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	startline = 0, endline = 10, permasize = size;
	while (size > 0)
	{
		printf("%08x: ", startline);
		while (startline < endline)
		{
			printf("%02x", *(b + startline));
			printf("%02x ", *(b + startline + 1));
			startline += 2;
		}
		startline -= 10;
		while (startline < endline)
		{
			temp = is_printable(*(b + startline));
			printf("%c", temp);
			startline++;
		}
		printf("\n");
		size -= 10, endline += 10;
		if (endline > permasize)
			endline = permasize;
	}
}
