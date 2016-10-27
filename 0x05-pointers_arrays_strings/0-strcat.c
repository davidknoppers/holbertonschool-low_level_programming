#include "holberton.h"
/**
 * _strlen - calculates and returns the length of a string
 *
 * @s: input, pointer to a string/char array
 * Return: the string's length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * _strcat - uses loops and _strlen to cat two strings
 *
 * @src: gets copied to dest
 * @dest: becomes the two strings combined
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int srclen = _strlen(src);
	int destlen = _strlen(dest);

	while (i <= srclen)
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}
	return (dest);
}
