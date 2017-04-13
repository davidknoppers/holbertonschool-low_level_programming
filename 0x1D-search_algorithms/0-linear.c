#include "search_algos.h"
#include <stdio.h>
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
