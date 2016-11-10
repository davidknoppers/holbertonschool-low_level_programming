#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory based on inputs
 *
 * @old_size: old memory size
 * @new_size: new memory size
 * @ptr: pointer to origina memory address
 * Return: new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, buff;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr = NULL)
	{
		buff = malloc(new_size);
		if (buff == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (buff);
	}

	buff = malloc(new_size);
	if (buff == NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = ptr;
	for (i = 0; i < old_size; i++)
	{
		buff[i] = tmp[i];
	}
	free(ptr);
	return (buff);
}
