#include "holberton.h"
/**
 * _memset - fills a space in memory with b
 *
 * @s: pointer to the first byte in memory
 * @b: byte for replacement
 * Return: pointer to first byte in memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
