#include "holberton.h"
/**
 * _strncat - uses loops and _strlen to cat strings up to n
 *
 * @src: gets copied to dest
 * @dest: becomes the two strings combined
 * @n: the limit to bytes from src
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = _strlen(dest);

	if (n <= 0)
	{
		return (dest);
	}
	while (i < n && *(src + i) != '\0')
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}
	*(dest + destlen + i) = '\0';
	return (dest);
}
