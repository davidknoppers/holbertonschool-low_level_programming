#include "search_algos.h"
/**
 * binary_search - classical O(log(n)) search algo
 * @array: ptr to first element in arr of ints
 * @size: number of elements in the array
 * @value: the int value that we hope to find
 * Return: the index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lower, upper, mid, found_at, i;


	lower = 0;
	upper = size - 1;
	found_at = -1;
	if (!array || size < 1)
		return (-1);
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		return (-1);
	}
	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[upper]);
		mid = lower + (upper - lower) / 2;

		if (array[mid] == value)
		{
			found_at = mid;
			break;
		}
		else if (array[mid] < value)
			lower = mid + 1;
		else
			upper = mid;
	}
	return (found_at);
}
