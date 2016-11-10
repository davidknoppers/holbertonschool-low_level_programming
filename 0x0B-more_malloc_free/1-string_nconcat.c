#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	unsigned int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * string_nconcat - concatenates two strings, if space suffices
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned int representing amount of s2 to copy
 * Return: pointer to beginning of combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *buff;

	i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s2);
	if (n > len)
		n = len;
	buff = malloc(_strlen(s1) + n + 1);
	if (buff == NULL)
		return (NULL);
	for (i = 0, j = 0; *(s1 + i) != '\0'; i++, j++)
		*(buff + i) = *(s1 + i);
	for (i = 0; i <= n; i++, j++)
		*(buff + j) = *(s2 + i);
	buff[j] = '\0';
	return (buff);
}
