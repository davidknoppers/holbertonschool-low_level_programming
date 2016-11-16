#include "function_pointers.h"

/**
 * int_index - searches for first instance of an integer
 *
 * @array: array
 * @size: size of array
 * @cmp: function that takes and returns ints
 *
 * Return: index on success or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
		   return (i);
	}
	return (-1);
}
