#include "search_algos.h"
/**
 * jump_search - clever O(sqrt(n)) search algo
 * @array: ptr to first element in arr of ints
 * @size: number of elements in the array
 * @value: the int value that we hope to find
 * Return: the index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, step, start, end;

	if (!array || size < 1)
		return (-1);
	step = sqrt(size);
	start = 0;
	while (start < size && array[start] < value)
	{
		if (start <= size)
			printf("Value checked array[%lu] = [%d]\n",
			       start, array[start]);
		start += step;
	}
	if (start > size)
		end = size;
	else
		end = start;
	start -= step;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       start, start + step);
	for (index = start; index <= end && index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		if (array[index] == value)
			break;
	}
	if (index < end || array[index] == value)
		return (index);
	return (-1);
}
