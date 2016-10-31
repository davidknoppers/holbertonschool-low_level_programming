#include "holberton.h"
/**
 * _memcpy - copies bytes from src to dest
 * @src: the source
 * @dest: where the bytes will be overwritten
 * @n: number of bytes to copy
 * Return: pointer to beginning of memory space
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
