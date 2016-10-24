#include "holberton.h"
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
