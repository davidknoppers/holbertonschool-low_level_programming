#include "search_algos.h"
/**
 * advanced_binary - returns the FIRST occurrence
 * of a value using binary search
 * @array: ptr to the first element in an array of ints
 * @size: number of elements in the array
 * @value: the value we hope to find
 * Return: index of FIRST occurrence of value
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lower, upper, middle, i;


	lower = 0;
	upper = size - 1;
	if (!array || lower > upper)
		return (-1);

	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[upper]);
		middle = (lower + upper) / 2;
		if (array[middle] < value)
			lower = middle + 1;
		else if (array[middle] > value)
			upper = middle;
		else if (lower != middle)
			upper = middle;
		else
			return (middle);
	}
	return (-1);
}
