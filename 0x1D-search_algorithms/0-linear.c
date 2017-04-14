#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - basic loop through array to find an int
 * @array: ptr to first element in arr of ints
 * @size: number of elements in the array
 * @value: the int value that we hope to find
 * Return: the index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked at array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
