#include "search_algos.h"
/**
 * interpolation_search - potentially ultra fast key-based search
 * @array: ptr to first element of an int array
 * @size: number of elements in the array
 * @value: the value we hope to find in the array
 * Return: index of value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, probe;

	if (!array || size < 1)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		probe = low +
			(((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (probe >= size)
		{
			printf("Value checked array[%lu] is out of range\n",
			       probe);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n",
		       probe, array[probe]);
		if (array[probe] < value)
			low = probe;
		else if (array[probe] > value)
			high = probe;
		else
			return (probe);
	}
	return (-1);
}
