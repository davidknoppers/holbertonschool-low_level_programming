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
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	if (_strlen(s2) && _strlen(s1))
		len = _strlen(s2);
	else
		return (NULL);
	if (n > len)
		n = len;
	buff = malloc((_strlen(s1) + n + 1) * sizeof(char));
	if (buff == NULL)
		return (NULL);
	for (i = 0; *s1 != '\0'; s1++, i++)
		buff[i] = *s1;
	for (j = i; *s2 != '\0' && (j - i) <= n; s2++, j++)
		buff[j] = *s2;
	buff[j] = '\0';
	return (buff);
}
