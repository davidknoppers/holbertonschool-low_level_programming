#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
/**
 * argstostr - concatenates and prints strings from argv
 * @ac: argc in clever disguise
 * @av: argv[] in clever disguise
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 1;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	if (str)
		return (str);
	else
		return (NULL);
}
