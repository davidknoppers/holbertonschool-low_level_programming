#include "holberton.h"
/**
 * _strcpy - copies and returns a string
 *
 * @dest: destination string, output
 * @src: string to be copied
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while ((dest[n] = src[n]) != '\0')
	{
		n++;
	}
	return (dest);
}
