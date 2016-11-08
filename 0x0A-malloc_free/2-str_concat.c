#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
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
/**
 * string_concat - concatenates two strings, if space suffices
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to beginning of combined string
 */
char *string_concat(char *s1, char *s2)
{
	char *buff = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (buff == NULL)
		return (NULL);
	_strcpy(buff, s1);
	_strcpy(buff + _strlen(s1), s2);
	*(buff + _strlen(s1) + _strlen(s2) + 1) = '\0';
	return (buff);
}
