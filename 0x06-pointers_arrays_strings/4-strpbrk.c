#include "holberton.h"
/**
 * _strpbrk - strips... bark?
 *
 * @s: string to be searched
 * @accept: string to match
 * Return: pointer to match on success, NULL if failure
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	temp = accept;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = temp;
		s++;
	}
	if (*s == '\0')
		return ('\0');
	return (s);
}
