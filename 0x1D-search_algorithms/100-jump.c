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

	step = sqrt(size);
	start = 0;
/*	printf("size is %zu and step is %zu\n", size, step);*/
	while (start < size && array[start] < value)
		start += step;
        if (start > size)
		end = size;
	else
		end = start;
	start -= step;
	printf("Value found between indexes [%zu] and [%zu]\n", start, end);
	for (index = start; index < end; index++)
	{
		printf("Value checked array[%zu] = [%d]\n",
		       index, array[index]);
		if (array[index] == value)
			break;
	}
	if (index < end || array[index] == value)
		return (index);
	return (-1);
}
