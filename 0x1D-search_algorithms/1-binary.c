#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t lower, upper, mid, found_at, i;


	lower = 0;
	upper = size - 1;
	found_at = -1;
	if (!array)
		return (-1);
	if (size < 2)
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
		mid = (upper + lower + 1) / 2;

		if (array[mid] == value)
		{
			found_at = mid;
			break;
		}
		else if (array[mid] < value)
			lower = mid + 1;
		else
			upper = mid - 1;
	}
	return (found_at);
}
