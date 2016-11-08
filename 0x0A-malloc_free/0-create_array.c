#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - initializes array with malloc and fills it with c
 *
 * @size: unsigned int, size of array
 * @c: char to populate array with
 * Return: pointer to start of char array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *Bob = (char *)malloc(size * sizeof(char));

	for (i = 0; i <= size / sizeof(char); i++)
		Bob[i] = c;
	return (Bob);
}
